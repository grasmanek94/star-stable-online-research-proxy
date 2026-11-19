void *__fastcall sub_14031C6F0(_QWORD *a1)
{
  LPVOID *v1; // rdx
  void *result; // rax
  void *v3; // r8
  __int64 v4; // rax
  void *v5; // rcx
  LPVOID lpMem[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+30h] [rbp-48h]
  _BYTE v8[64]; // [rsp+38h] [rbp-40h] BYREF

  v1 = (LPVOID *)(a1 + 157);
  result = (void *)a1[157];
  v3 = (void *)a1[158];
  if ( result != v3 )
  {
    *(_OWORD *)lpMem = 0;
    v7 = 0;
    if ( lpMem != v1 )
    {
      lpMem[0] = result;
      lpMem[1] = v3;
      v7 = a1[159];
      *v1 = nullptr;
      a1[158] = 0;
      a1[159] = 0;
    }
    v4 = sub_140310BC0(a1: &unk_141313D68, a2: v8, a3: lpMem);
    result = (void *)sub_1407EE6B0(a1: v4);
    if ( lpMem[0] != nullptr )
    {
      if ( (unsigned __int64)(40 * ((signed __int64)(v7 - (unsigned __int64)lpMem[0]) / 40)) < 0x1000 )
      {
        return (void *)sub_1409DB4C0(lpMem: lpMem[0]);
      }
      else
      {
        v5 = *((void **)lpMem[0] - 1);
        if ( (unsigned __int64)((char *)lpMem[0] - (char *)v5 - 8) > 0x1F )
          __fastfail(5u);
        return (void *)sub_1409DB4C0(lpMem: v5);
      }
    }
  }
  return result;
}