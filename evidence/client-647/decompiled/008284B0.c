__int64 __fastcall sub_1408284B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int128 *v4; // rsi
  __int64 v5; // rbx
  __int64 result; // rax
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rbx
  char *v14; // rcx
  __int64 v15; // r12
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // rax
  __int64 v24; // r13
  char *v25; // r12
  __int64 v26; // rsi
  unsigned __int64 v27; // r14
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int128 *v30; // rdi
  __int128 *v31; // rcx
  int v32; // eax
  void *v33; // rcx
  void *v34; // rcx
  char *v35; // [rsp+30h] [rbp-39h] BYREF
  __int64 v36; // [rsp+38h] [rbp-31h]
  __int128 v37; // [rsp+40h] [rbp-29h] BYREF
  __int64 v38; // [rsp+50h] [rbp-19h]
  unsigned __int64 v39; // [rsp+58h] [rbp-11h]
  __int128 v40; // [rsp+60h] [rbp-9h] BYREF
  __int64 v41; // [rsp+70h] [rbp+7h]
  unsigned __int64 v42; // [rsp+78h] [rbp+Fh]

  v3 = a1;
  v36 = a1;
  v4 = nullptr;
  v5 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1413AA4D0 > *(_DWORD *)(v5 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA4D0);
    if ( dword_1413AA4D0 == -1 )
    {
      sub_1409DB700(a1: sub_140EE2BB0);
      sub_1409DBB40(a1: &dword_1413AA4D0);
    }
  }
  sub_140823560(a1: v3, (_DWORD *)a2);
  if ( dword_1413AA4D8 > *(_DWORD *)(v5 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA4D8);
    if ( dword_1413AA4D8 == -1 )
    {
      v12 = qword_141314288;
      v13 = 0x7FFFFFFFFFFFFFFFLL;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314288) < 0x16 )
        sub_14001B680(a1: v9, a2: v8);
      v14 = aGardenbed;
      if ( (unsigned __int64)qword_141314290 > 0xF )
        v14 = *(char **)aGardenbed;
      v35 = v14;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v15 = qword_141314288 + 22;
      if ( (unsigned __int64)(qword_141314288 + 22) <= 0xF )
      {
        v16 = 15;
        v4 = &v40;
        goto LABEL_33;
      }
      v16 = v15 | 0xF;
      if ( (v15 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      {
        v16 = 0x7FFFFFFFFFFFFFFFLL;
        v17 = 0x8000000000000027uLL;
LABEL_21:
        v18 = sub_1409DB470(a1: v17);
        if ( v18 == 0 )
          __fastfail(5u);
        v4 = (__int128 *)((v18 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v4 - 1) = v18;
        v14 = v35;
        *(_QWORD *)&v40 = v4;
LABEL_33:
        v41 = v12 + 22;
        v42 = v16;
        sub_140E82100(a1: v4, a2: v14, a3: v12);
        qmemcpy((char *)v4 + v12, "growthMeshTypeOverride", 22);
        *((_BYTE *)v4 + v15) = 0;
        v23 = (char *)&v40;
        if ( v42 > 0xF )
          v23 = (char *)v40;
        v35 = v23;
        v24 = qword_141314288;
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314288) < 0x16 )
          sub_14001B680(a1: v20, a2: v19);
        v25 = aGardenbed;
        if ( (unsigned __int64)qword_141314290 > 0xF )
          v25 = *(char **)aGardenbed;
        v37 = 0;
        v38 = 0;
        v39 = 0;
        v26 = qword_141314288 + 22;
        if ( (unsigned __int64)(qword_141314288 + 22) <= 0xF )
        {
          v13 = 15;
          v30 = &v37;
        }
        else
        {
          if ( (v26 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
          {
            v27 = 0x8000000000000027uLL;
LABEL_42:
            v28 = sub_1409DB470(a1: v27);
            if ( v28 == 0 )
              __fastfail(5u);
            v30 = (__int128 *)((v28 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
            *((_QWORD *)v30 - 1) = v28;
            *(_QWORD *)&v37 = v30;
            goto LABEL_54;
          }
          v13 = v26 | 0xF;
          if ( (v26 | 0xFuLL) < 0x16 )
            v13 = 22;
          v29 = v13 + 1;
          if ( v13 == -1 )
          {
            v30 = nullptr;
            *(_QWORD *)&v37 = 0;
          }
          else
          {
            if ( v29 >= 0x1000 )
            {
              v27 = v13 + 40;
              if ( v13 + 40 < (unsigned __int64)(v13 + 1) )
              {
                sub_14001B170(a1: v29, a2: 0, a3: v21, a4: v22);
                __debugbreak();
              }
              goto LABEL_42;
            }
            v30 = (__int128 *)sub_1409DB470(a1: v29);
            *(_QWORD *)&v37 = v30;
          }
        }
LABEL_54:
        v38 = v24 + 22;
        v39 = v13;
        sub_140E82100(a1: v30, a2: v25, a3: v24);
        qmemcpy((char *)v30 + v24, "growthMeshTypeOverride", 22);
        *((_BYTE *)v30 + v26) = 0;
        v31 = &v37;
        if ( v39 > 0xF )
          v31 = (__int128 *)v37;
        v32 = sub_140062160(a1: v31);
        sub_140062D10(
          a1: (unsigned int)&dword_1413AA4D4,
          a2: v32,
          a3: (_DWORD)v35,
          a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarS"
                        "tableOnline\\SSOLib\\src\\Actors\\Gardening\\PXGardenBed.cpp",
          a5: 27);
        if ( v39 > 0xF )
        {
          v33 = (void *)v37;
          if ( v39 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v37 - *(_QWORD *)(v37 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v33 = *(void **)(v37 - 8);
          }
          sub_1409DB4C0(lpMem: v33);
        }
        *(_QWORD *)&v37 = 19937;
        v38 = 0;
        v39 = 31;
        if ( v42 > 0xF )
        {
          v34 = (void *)v40;
          if ( v42 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v40 - *(_QWORD *)(v40 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v34 = *(void **)(v40 - 8);
          }
          sub_1409DB4C0(lpMem: v34);
        }
        sub_1409DBB40(a1: &dword_1413AA4D8);
        v3 = v36;
        goto LABEL_3;
      }
      if ( v16 < 0x16 )
        v16 = 22;
      if ( v16 != -1 )
      {
        if ( v16 + 1 >= 0x1000 )
        {
          v17 = v16 + 40;
          if ( v16 + 40 < v16 + 1 )
          {
            sub_14001B170(a1: v17, a2: v8, a3: v10, a4: v11);
            __debugbreak();
          }
          goto LABEL_21;
        }
        v4 = (__int128 *)sub_1409DB470(a1: v16 + 1);
        v14 = v35;
      }
      *(_QWORD *)&v40 = v4;
      goto LABEL_33;
    }
  }
LABEL_3:
  result = (unsigned int)dword_1413AA4D4;
  LODWORD(v35) = dword_1413AA4D4;
  if ( *(_DWORD *)a2 != 0 )
  {
    if ( *(_BYTE *)(a2 + 62) == 0 || *(_DWORD *)(v3 + 512) != 2 )
    {
      v7 = sub_140076F50();
      return sub_140084F80(a1: a2, a2: (unsigned int)&v35, a3: (int)v3 + 512, a4: 4, a5: v7);
    }
  }
  else
  {
    result = sub_1400852F0(a1: a2, a2: (int)v3 + 512, a3: (unsigned int)&v35, a4: 4, a5: 512);
    if ( (_BYTE)result == 0 )
      *(_DWORD *)(v3 + 512) = 2;
  }
  return result;
}