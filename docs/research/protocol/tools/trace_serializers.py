from pathlib import Path
import argparse,re,json
parser=argparse.ArgumentParser(description='Trace candidate stream dependencies in local IDA pseudocode exports.')
parser.add_argument('--evidence',type=Path,default=Path('evidence/client-647'))
args=parser.parse_args()
ROOT=args.evidence.resolve()
bindings=json.loads((ROOT/'rpc-bindings.json').read_text())
def split_args(text):
    parts=[];start=0;depth=0
    for i,c in enumerate(text):
        if c in '(<[':depth+=1
        elif c in ')>]':depth-=1
        elif c==',' and depth==0:parts.append(text[start:i].strip());start=i+1
    if text[start:].strip():parts.append(text[start:].strip())
    return parts
def calls(text):
    for match in re.finditer(r'sub_(140[0-9A-F]+)\s*\(',text):
        start=match.end();depth=1;i=start
        while i<len(text) and depth:
            if text[i]=='(':depth+=1
            elif text[i]==')':depth-=1
            i+=1
        yield int(match.group(1),16)-0x140000000,split_args(text[start:i-1]),match.start()
def arg_expr(text):
    text=re.sub(r'^a\d+:\s*','',text.strip())
    return text.strip()
def signature_tuple(text):
    at=text.rfind('std::tuple<')+len('std::tuple<');depth=1;i=at
    while i<len(text) and depth:
        if text[i]=='<':depth+=1
        elif text[i]=='>':depth-=1
        i+=1
    return text[at:i-1] if depth==0 else '?'
def compact_type(text):
    return re.sub(r'\b(class|struct)\s+','',text)
for b in bindings:b['tuple_cpp']=compact_type(signature_tuple(b['signature']))
(ROOT/'rpc-bindings-enriched.json').write_text(json.dumps(bindings,indent=2),encoding='utf-8')

# (function, argument index) describes only propagation of a stream object.
# This is a candidate dependency graph; wire schemas still require review.
known={}
for b in bindings:
    known.setdefault(int(b['execute_rva'],16),set()).add((2,0))
for r in [0x801400,0x80BFE0,0x7AA810,0x2B4D00,0xA44740,0x9CB310,0x1D0820,0x2D2B10,0x200540]:known.setdefault(r,set()).add((1,0))
for r in [0x7D2C00,0x7D24E0,0x7D2310,0x7D3360,0x7D2020,0x7AF240,0x349DC0,0x7AF9F0]:known.setdefault(r,set()).add((2,1 if r in [0x7AF240,0x349DC0,0x7AF9F0] else 0))
known.setdefault(0x7F3E10,set()).add((3,0))
known.setdefault(0x82C850,set()).add((3,0))
known.setdefault(0x82FCB0,set()).add((2,0))
for r in [0x82B390,0x82B7F0,0x82AF00]:known.setdefault(r,set()).add((2,0))
for r in [0x829710,0x829770,0x8297C0,0x829800]:known.setdefault(r,set()).add((1,0))
local_seeds={}
for p in (ROOT/'decompiled').glob('*.c'):
    text=p.read_text();rva=int(p.stem,16)
    for m in re.finditer(r'(\w+)\[0\]\s*=\s*&PXEngine::(?:ByteStreamWriter|ByteStreamReader|PreallocatedByteStreamWriter)::',text):
        local_seeds.setdefault(rva,set()).add(m.group(1))
for rva in local_seeds:known.setdefault(rva,set())
done=set();edges=[];missing=set();queue=list(known)
while queue:
    rva=queue.pop();state=(rva,tuple(sorted(known[rva])))
    if state in done:continue
    done.add(state);path=ROOT/'decompiled'/f'{rva:08X}.c'
    if not path.is_file():missing.add(rva);continue
    text=path.read_text();aliases={}
    for i,level in known[rva]:aliases.setdefault(f'a{i}',set()).add(level)
    arrays=set()
    def levels(expr):
        expr=re.sub(r'\([_A-Za-z][\w\s:*<>]*\)','',expr).strip()
        match=re.fullmatch(r'([&*]*)([av]\d+)',expr)
        if not match:return set()
        ops,name=match.groups();delta=ops.count('&')-ops.count('*')
        if name in arrays and ops=='&':delta=0
        return {x+delta for x in aliases.get(name,set()) if x+delta>=0}
    events=[]
    for m in re.finditer(r'(\w+)\[0\]\s*=\s*&PXEngine::(?:ByteStreamWriter|ByteStreamReader|PreallocatedByteStreamWriter)::[^;]+;',text):
        events.append((m.end(),'seed',m.group(1)))
    for m in re.finditer(r'\b((?:a|v)\d+)\s*=\s*([^;\n]+);',text):events.append((m.end(),'assign',(m.group(1),m.group(2).strip())))
    for target,args,offset in calls(text):events.append((offset,'call',(target,args)))
    for offset,kind,payload in sorted(events):
        if kind=='seed':aliases[payload]={0};arrays.add(payload);continue
        if kind=='assign':
            dest,src=payload
            new=levels(src)
            if new:aliases[dest]=new
            else:aliases.pop(dest,None)
            continue
        target,args=payload
        for i,arg in enumerate(args,1):
            a=arg_expr(arg)
            # C++ tuple visitor passes a pointer to the stream pointer.
            newlevels=levels(a)
            if not newlevels:continue
            if target<0x1000 or target>=0xEE0000:continue
            edges.append({'source_rva':hex(rva),'target_rva':hex(target),'stream_argument':i,'source_expression':a,'indirection':sorted(newlevels)})
            positions=known.setdefault(target,set())
            new={(i,l) for l in newlevels}
            if not new<=positions:positions.update(new);queue.append(target)
            elif not any(s[0]==target for s in done):queue.append(target)
result={'function_stream_arguments':{hex(r):sorted(v) for r,v in sorted(known.items())},'local_streams':{hex(r):sorted(v) for r,v in local_seeds.items()},'edges':edges,'missing':sorted(missing)}
(ROOT/'serializer-dependencies.json').write_text(json.dumps(result,indent=2),encoding='utf-8')
print(json.dumps({'candidate_functions':len(known),'dependency_edges':len(edges),'missing':len(missing),'first_missing':[hex(x) for x in sorted(missing)[:12]]}))
