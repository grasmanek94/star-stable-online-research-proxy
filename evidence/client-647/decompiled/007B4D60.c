__int64 __fastcall sub_1407B4D60(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdi
  _QWORD *v4; // r14
  _QWORD *v5; // r15
  __int16 v6; // si
  __m128i si128; // xmm6
  LPARAM v8; // r12
  LPARAM v9; // r13
  __int64 v10; // rax
  _QWORD *v11; // r15
  char v12; // r14
  int v13; // ebx
  BOOL v14; // eax
  char v15; // cl
  HANDLE Toolhelp32Snapshot; // rax
  void *v17; // r14
  PCSTR v18; // r12
  _QWORD *v19; // rbx
  const CHAR *v20; // rdx
  DWORD CurrentProcessId; // eax
  LPVOID *v22; // rbx
  void *v23; // rcx
  void *v24; // rcx
  char (__fastcall *v25)(__int64, __int64, __int64); // r9
  char (__fastcall *v26)(__int64, __int64, __int64); // r9
  char **v27; // r14
  char **v28; // r15
  unsigned __int64 v29; // rcx
  char *v30; // rax
  char *v31; // r8
  char **v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int128 v42; // rtt
  DWORD v43; // eax
  int v44; // [rsp+20h] [rbp-E0h]
  PCSTR pszSrch; // [rsp+28h] [rbp-D8h] BYREF
  LPVOID v46[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C0h]
  int v48; // [rsp+48h] [rbp-B8h]
  __int64 v49; // [rsp+50h] [rbp-B0h] BYREF
  char v50[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+64h] [rbp-9Ch]
  char v52[8]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v53[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  char v56; // [rsp+90h] [rbp-70h]
  char v57[8]; // [rsp+98h] [rbp-68h] BYREF
  LPVOID lpMem[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v59[6]; // [rsp+C0h] [rbp-40h] BYREF
  char v60; // [rsp+F0h] [rbp-10h]
  int v61; // [rsp+F4h] [rbp-Ch]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  _QWORD *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h] BYREF
  __int16 v65; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v66[32]; // [rsp+118h] [rbp+18h] BYREF
  char v67; // [rsp+138h] [rbp+38h]
  __int16 v68; // [rsp+140h] [rbp+40h]
  _BYTE v69[40]; // [rsp+148h] [rbp+48h] BYREF
  LPARAM lParam[2]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v71; // [rsp+180h] [rbp+80h]
  __int128 v72; // [rsp+188h] [rbp+88h] BYREF
  __int64 v73; // [rsp+198h] [rbp+98h]
  __int64 v74; // [rsp+1A0h] [rbp+A0h]
  char v75; // [rsp+1A8h] [rbp+A8h]
  PROCESSENTRY32 pe; // [rsp+1B0h] [rbp+B0h] BYREF

  v1 = a1;
  v62 = a1;
  v44 = 0;
  result = *(unsigned __int8 *)(a1 + 168);
  if ( (_BYTE)result != 0 )
  {
    v3 = a1 + 176;
    v4 = (_QWORD *)(a1 + 256);
    v5 = (_QWORD *)(a1 + 280);
    v63 = (_QWORD *)(a1 + 280);
    v6 = word_141313EA0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
    while ( 1 )
    {
      if ( *(_BYTE *)(v1 + 169) == 0 )
        goto LABEL_80;
      if ( *(_QWORD *)&nExitCode == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F34FA8) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
LABEL_98:
        --*(_DWORD *)(v1 + 252);
        sub_1409D4760(a1: 6);
      }
      *(_BYTE *)(v1 + 169) = 0;
      memset(v59, 0, sizeof(v59));
      v60 = 0;
      v61 = 0;
      if ( (unsigned int)sub_1409D4560(a1: v3) != 0 )
        sub_1409D4760(a1: 5);
      if ( *(_DWORD *)(v1 + 252) == 0x7FFFFFFF )
        goto LABEL_98;
      if ( v59 == v4 )
      {
        v10 = v59[2];
        v9 = v59[1];
        v8 = v59[0];
      }
      else
      {
        v8 = *(_QWORD *)(v1 + 256);
        v9 = *(_QWORD *)(v1 + 264);
        v10 = *(_QWORD *)(v1 + 272);
        *(_QWORD *)(v1 + 256) = 0;
        *(_QWORD *)(v1 + 264) = 0;
        *(_QWORD *)(v1 + 272) = 0;
      }
      v49 = v10;
      if ( &v59[3] == v5 )
      {
        v11 = (_QWORD *)v59[4];
        pszSrch = (PCSTR)v59[3];
      }
      else
      {
        pszSrch = *(PCSTR *)(v1 + 280);
        v59[3] = pszSrch;
        v11 = *(_QWORD **)(v1 + 288);
        *(_OWORD *)&v59[4] = *(_OWORD *)(v1 + 288);
        *(_QWORD *)(v1 + 280) = 0;
        *(_QWORD *)(v1 + 288) = 0;
        *(_QWORD *)(v1 + 296) = 0;
      }
      v60 = *(_BYTE *)(v1 + 304);
      v12 = v60;
      v13 = *(_DWORD *)(v1 + 308);
      v61 = v13;
      sub_1409D45F0(a1: v3);
      v52[0] = 0;
      v56 = 0;
      v57[0] = 0;
      memset(lpMem, 0, 24);
      v50[0] = v12;
      v51 = v13;
      v14 = IsDebuggerPresent();
      v15 = v52[0];
      if ( v14 )
        v15 = 1;
      v52[0] = v15;
      v72 = 0;
      v73 = 0;
      v74 = 15;
      LOBYTE(v72) = 0;
      v75 = 0;
      lParam[0] = v8;
      lParam[1] = v9;
      v71 = v49;
      memset(v59, 0, 24);
      EnumWindows(lpEnumFunc: EnumFunc, (LPARAM)lParam);
      if ( v75 != 0 )
      {
        if ( v56 != 0 )
        {
          sub_14001B5A0(a1: v53);
          v53[0] = 19937;
          v54 = 0;
          v55 = 31;
          v56 = 0;
        }
        sub_140016F80(a1: v53, a2: &v72);
        v56 = 1;
      }
      Toolhelp32Snapshot = CreateToolhelp32Snapshot(dwFlags: 2u, th32ProcessID: 0);
      v17 = Toolhelp32Snapshot;
      if ( Toolhelp32Snapshot != (HANDLE)-1LL )
      {
        pe.dwSize = 304;
        if ( Process32First(hSnapshot: Toolhelp32Snapshot, lppe: &pe) )
        {
          v18 = pszSrch;
          do
          {
            if ( v57[0] == 0 )
            {
              v19 = v18;
              if ( v18 != (PCSTR)v11 )
              {
                while ( 1 )
                {
                  v20 = v19[3] <= 0xFu ? (const CHAR *)v19 : (const CHAR *)*v19;
                  if ( StrStrIA(pszFirst: pe.szExeFile, pszSrch: v20) != nullptr )
                    break;
                  v19 += 4;
                  if ( v19 == v11 )
                    goto LABEL_31;
                }
                v57[0] = 1;
              }
            }
LABEL_31:
            ;
          }
          while ( Process32Next(hSnapshot: v17, lppe: &pe) );
        }
        CloseHandle(hObject: v17);
      }
      CurrentProcessId = GetCurrentProcessId();
      v22 = (LPVOID *)sub_1407B6CD0(a1: v46, a2: CurrentProcessId);
      if ( lpMem != v22 )
      {
        if ( lpMem[0] != nullptr )
        {
          sub_1407AB790(a1: lpMem[0], a2: lpMem[1], a3: lpMem);
          if ( (unsigned __int64)(56 * (((char *)lpMem[2] - (char *)lpMem[0]) / 56)) < 0x1000 )
          {
            v23 = lpMem[0];
          }
          else
          {
            v23 = *((void **)lpMem[0] - 1);
            if ( (unsigned __int64)((char *)lpMem[0] - (char *)v23 - 8) > 0x1F )
              goto LABEL_94;
          }
          sub_1409DB4C0(lpMem: v23);
          memset(lpMem, 0, 24);
        }
        qmemcpy(lpMem, v22, 24);
        *v22 = nullptr;
        v22[1] = nullptr;
        v22[2] = nullptr;
      }
      if ( v46[0] != nullptr )
      {
        sub_1407AB790(a1: v46[0], a2: v46[1], a3: v46);
        if ( (unsigned __int64)(56 * ((signed __int64)(v47 - (unsigned __int64)v46[0]) / 56)) < 0x1000 )
        {
          v24 = v46[0];
        }
        else
        {
          v24 = *((void **)v46[0] - 1);
          if ( (unsigned __int64)((char *)v46[0] - (char *)v24 - 8) > 0x1F )
LABEL_94:
            __fastfail(5u);
        }
        sub_1409DB4C0(lpMem: v24);
      }
      v46[1] = nullptr;
      v47 = 0;
      v48 = 0;
      v46[0] = &PXEngine::ByteStreamWriter::`vftable';
      if ( (unsigned __int8)sub_1402B8840(a1: v46, a2: v50) == 0 )
        goto LABEL_58;
      LODWORD(v49) = v51;
      if ( sub_1401D0820(a1: v46, a2: &v49) == 0 )
        goto LABEL_58;
      v51 = v49;
      v25 = *((char (__fastcall **)(__int64, __int64, __int64))v46[0] + 2);
      if ( v25 == sub_1401F6C10 )
      {
        sub_140A25890(a1: v46, a2: v52, a3: 1);
      }
      else if ( v25(a1: (__int64)v46, a2: (__int64)v52, a3: 1) == 0 )
      {
        goto LABEL_58;
      }
      if ( (unsigned __int8)sub_1407A9120(a1: v46, a2: v53) != 0 )
      {
        v26 = *((char (__fastcall **)(__int64, __int64, __int64))v46[0] + 2);
        if ( v26 == sub_1401F6C10 )
        {
          sub_140A25890(a1: v46, a2: v57, a3: 1);
        }
        else if ( v26(a1: (__int64)v46, a2: (__int64)v57, a3: 1) == 0 )
        {
          goto LABEL_58;
        }
        if ( (unsigned __int8)sub_1407A8190(a1: v46, a2: lpMem) != 0 )
        {
          v68 = v6;
          sub_140A255B0(a1: v69, a2: v46);
          v65 = v68;
          sub_140A255B0(a1: v66, a2: v69);
          v67 = 1;
          sub_140A25690(a1: v69);
          goto LABEL_59;
        }
      }
LABEL_58:
      v67 = 0;
LABEL_59:
      sub_140A25690(a1: v46);
      pszSrch = (PCSTR)&v65;
      if ( v67 != 0 )
      {
        sub_1407D62B0(a1: v62, a2: v65, a3: (__int64)v66);
        if ( v67 != 0 )
        {
          sub_140A25690(a1: v66);
          v67 = 0;
        }
      }
      sub_14001B5A0(a1: &v72);
      *(_QWORD *)&v72 = 19937;
      v73 = 0;
      v74 = 31;
      sub_14001B3E0(a1: lParam);
      *(__m128i *)lParam = si128;
      v71 = 19937;
      v27 = (char **)lpMem[0];
      if ( lpMem[0] != nullptr )
      {
        v28 = (char **)lpMem[1];
        if ( lpMem[0] != lpMem[1] )
        {
          do
          {
            sub_14001B3E0(a1: v27 + 4);
            v27[4] = (char *)19937;
            v27[5] = (char *)19937;
            v27[6] = (char *)19937;
            v29 = (unsigned __int64)v27[3];
            if ( v29 > 0xF )
            {
              v30 = *v27;
              if ( v29 + 1 < 0x1000 )
              {
                v31 = *v27;
              }
              else
              {
                v31 = *((char **)v30 - 1);
                if ( (unsigned __int64)(v30 - v31 - 8) > 0x1F )
                  goto LABEL_95;
              }
              sub_1409DB4C0(lpMem: v31);
            }
            *v27 = (char *)19937;
            v27[2] = nullptr;
            v27[3] = (char *)31;
            v27 += 7;
          }
          while ( v27 != v28 );
          v27 = (char **)lpMem[0];
        }
        if ( (unsigned __int64)(56 * (((char *)lpMem[2] - (char *)v27) / 56)) < 0x1000 )
        {
          v32 = v27;
        }
        else
        {
          v32 = (char **)*(v27 - 1);
          if ( (unsigned __int64)((char *)v27 - (char *)v32 - 8) > 0x1F )
LABEL_95:
            __fastfail(5u);
        }
        sub_1409DB4C0(lpMem: v32);
      }
      v44 |= 1u;
      *(__m128i *)lpMem = si128;
      lpMem[2] = (LPVOID)19937;
      if ( v56 != 0 )
      {
        sub_14001B5A0(a1: v53);
        v53[0] = 19937;
        v54 = 0;
        v55 = 31;
        v56 = 0;
      }
      sub_14001B3E0(a1: &v59[3]);
      *(__m128i *)&v59[3] = si128;
      v59[5] = 19937;
      sub_14001B3E0(a1: v59);
      v5 = v63;
LABEL_80:
      sub_14009B080(a1: &v64);
      if ( v64 > 0x7FFFFFFFFF67697ELL )
        v33 = 0x7FFFFFFFFFFFFFFFLL;
      else
        v33 = v64 + 10000000;
      while ( 1 )
      {
        v34 = sub_1409D47D0();
        v35 = sub_1409D47B0();
        v37 = v35;
        if ( v34 == 10000000 )
        {
          v38 = 100 * v35;
        }
        else
        {
          if ( v34 == 24000000 )
          {
            v36 = (unsigned __int128)(2 * v35 * (__int128)0x5555555555555556LL) >> 64;
            v39 = 2 * v35 / 3;
            v40 = 41 * v37;
          }
          else
          {
            v41 = v35 / v34;
            v42 = 1000000000 * (v35 % v34);
            v39 = 1000000000 * (v35 % v34) / v34;
            v36 = v42 % v34;
            v40 = 1000000000 * v41;
          }
          v38 = v40 + v39;
        }
        if ( v33 == v38 || v33 < v38 )
          break;
        pszSrch = (PCSTR)(v33 - v38);
        v43 = sub_140190FA0(a1: &pszSrch, a2: v36, a3: v37);
        Sleep(dwMilliseconds: v43);
      }
      v1 = v62;
      result = *(unsigned __int8 *)(v62 + 168);
      if ( (_BYTE)result == 0 )
        return result;
      v4 = (_QWORD *)(v62 + 256);
    }
  }
  return result;
}