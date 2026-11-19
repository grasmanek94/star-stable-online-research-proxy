__int64 __fastcall sub_140876C00(__int64 a1, __int64 a2)
{
  __int128 *v2; // rsi
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // rbx
  char *v11; // r13
  __int64 v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 *v20; // r12
  __int64 v21; // r13
  char *v22; // r15
  __int64 v23; // rsi
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int128 *v27; // rdi
  __int128 *v28; // rcx
  int v29; // eax
  void *v30; // rcx
  void *v31; // rcx
  int v32; // [rsp+30h] [rbp-39h] BYREF
  __int64 v33; // [rsp+38h] [rbp-31h]
  __int64 v34; // [rsp+40h] [rbp-29h]
  __int128 v35; // [rsp+48h] [rbp-21h] BYREF
  __int64 v36; // [rsp+58h] [rbp-11h]
  unsigned __int64 v37; // [rsp+60h] [rbp-9h]
  __int128 v38; // [rsp+68h] [rbp-1h] BYREF
  __int64 v39; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v40; // [rsp+80h] [rbp+17h]

  v34 = a2;
  v33 = a1;
  v2 = nullptr;
  v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1413AB748 > *(_DWORD *)(v3 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AB748);
    if ( dword_1413AB748 == -1 )
    {
      sub_1409DB700(a1: sub_140EE2DE0);
      sub_1409DBB40(a1: &dword_1413AB748);
    }
  }
  if ( dword_1413AB750 > *(_DWORD *)(v3 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AB750);
    if ( dword_1413AB750 == -1 )
    {
      v9 = qword_1413143A8;
      v10 = 0x7FFFFFFFFFFFFFFFLL;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413143A8) < 7 )
        sub_14001B680(a1: v6, a2: v5);
      v11 = aScriptbinary;
      if ( (unsigned __int64)qword_1413143B0 > 0xF )
        v11 = *(char **)aScriptbinary;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v12 = qword_1413143A8 + 7;
      if ( (unsigned __int64)(qword_1413143A8 + 7) <= 0xF )
      {
        v13 = 15;
        v2 = &v38;
        goto LABEL_28;
      }
      v13 = v12 | 0xF;
      if ( (v12 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      {
        v13 = 0x7FFFFFFFFFFFFFFFLL;
        v14 = 0x8000000000000027uLL;
LABEL_16:
        v15 = sub_1409DB470(a1: v14);
        if ( v15 == 0 )
          __fastfail(5u);
        v2 = (__int128 *)((v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v2 - 1) = v15;
        *(_QWORD *)&v38 = v2;
LABEL_28:
        v39 = v9 + 7;
        v40 = v13;
        sub_140E82100(a1: v2, a2: v11, a3: v9);
        *(_DWORD *)((char *)v2 + v9) = 1969516397;
        *(_WORD *)((char *)v2 + v9 + 4) = 25964;
        *((_BYTE *)v2 + v9 + 6) = 115;
        *((_BYTE *)v2 + v12) = 0;
        v20 = &v38;
        if ( v40 > 0xF )
          LODWORD(v20) = v38;
        v21 = qword_1413143A8;
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413143A8) < 7 )
          sub_14001B680(a1: v17, a2: v16);
        v22 = aScriptbinary;
        if ( (unsigned __int64)qword_1413143B0 > 0xF )
          v22 = *(char **)aScriptbinary;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        v23 = qword_1413143A8 + 7;
        if ( (unsigned __int64)(qword_1413143A8 + 7) <= 0xF )
        {
          v10 = 15;
          v27 = &v35;
        }
        else
        {
          if ( (v23 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
          {
            v24 = 0x8000000000000027uLL;
LABEL_37:
            v25 = sub_1409DB470(a1: v24);
            if ( v25 == 0 )
              __fastfail(5u);
            v27 = (__int128 *)((v25 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
            *((_QWORD *)v27 - 1) = v25;
            *(_QWORD *)&v35 = v27;
            goto LABEL_49;
          }
          v10 = v23 | 0xF;
          if ( (v23 | 0xFuLL) < 0x16 )
            v10 = 22;
          v26 = v10 + 1;
          if ( v10 == -1 )
          {
            v27 = nullptr;
            *(_QWORD *)&v35 = 0;
          }
          else
          {
            if ( v26 >= 0x1000 )
            {
              v24 = v10 + 40;
              if ( v10 + 40 < (unsigned __int64)(v10 + 1) )
              {
                sub_14001B170(a1: v26, a2: 0, a3: v18, a4: v19);
                __debugbreak();
              }
              goto LABEL_37;
            }
            v27 = (__int128 *)sub_1409DB470(a1: v26);
            *(_QWORD *)&v35 = v27;
          }
        }
LABEL_49:
        v36 = v21 + 7;
        v37 = v10;
        sub_140E82100(a1: v27, a2: v22, a3: v21);
        *(_DWORD *)((char *)v27 + v21) = 1969516397;
        *(_WORD *)((char *)v27 + v21 + 4) = 25964;
        *((_BYTE *)v27 + v21 + 6) = 115;
        *((_BYTE *)v27 + v23) = 0;
        v28 = &v35;
        if ( v37 > 0xF )
          v28 = (__int128 *)v35;
        v29 = sub_140062160(a1: v28);
        sub_140062D10(
          a1: (unsigned int)&dword_1413AB74C,
          a2: v29,
          a3: (_DWORD)v20,
          a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\"
                        "include\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
          a5: 148);
        if ( v37 > 0xF )
        {
          v30 = (void *)v35;
          if ( v37 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v35 - *(_QWORD *)(v35 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v30 = *(void **)(v35 - 8);
          }
          sub_1409DB4C0(lpMem: v30);
        }
        *(_QWORD *)&v35 = 19937;
        v36 = 0;
        v37 = 31;
        if ( v40 > 0xF )
        {
          v31 = (void *)v38;
          if ( v40 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v38 - *(_QWORD *)(v38 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v31 = *(void **)(v38 - 8);
          }
          sub_1409DB4C0(lpMem: v31);
        }
        sub_1409DBB40(a1: &dword_1413AB750);
        goto LABEL_3;
      }
      if ( v13 < 0x16 )
        v13 = 22;
      if ( v13 != -1 )
      {
        if ( v13 + 1 >= 0x1000 )
        {
          v14 = v13 + 40;
          if ( v13 + 40 < v13 + 1 )
          {
            sub_14001B170(a1: v14, a2: v5, a3: v7, a4: v8);
            __debugbreak();
          }
          goto LABEL_16;
        }
        v2 = (__int128 *)sub_1409DB470(a1: v13 + 1);
      }
      *(_QWORD *)&v38 = v2;
      goto LABEL_28;
    }
  }
LABEL_3:
  v32 = dword_1413AB74C;
  return sub_1408734C0(a1: v34, a2: &v32, a3: v33 + 8);
}