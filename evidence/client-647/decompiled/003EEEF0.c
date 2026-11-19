void __fastcall sub_1403EEEF0(__int64 *a1)
{
  __int64 *v2; // r14
  __int64 *v3; // rbp
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  char *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  void *v17; // rcx
  __int64 v18; // rax
  __int128 v19; // xmm6
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rbx
  _BYTE v23[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v24[24]; // [rsp+38h] [rbp-B0h] BYREF
  char v25; // [rsp+50h] [rbp-98h] BYREF
  __int128 v26; // [rsp+80h] [rbp-68h] BYREF
  __int64 v27; // [rsp+90h] [rbp-58h]
  unsigned __int64 v28; // [rsp+98h] [rbp-50h]
  _BYTE v29[16]; // [rsp+A0h] [rbp-48h] BYREF

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    if ( a1[36] == 0 || *((_DWORD *)a1 + 66) >= 7u )
    {
      v6 = *a1;
      goto LABEL_26;
    }
    v2 = a1 + 40;
    v3 = a1 + 34;
    v4 = *(_QWORD *)(sub_14006ED40(a1: a1 + 40, a2: v24, a3: a1 + 34) + 16);
    if ( *(_BYTE *)(v4 + 25) == 0 && (unsigned __int8)sub_14005C290(a1: v2, a2: v3, a3: v4 + 32) == 0 )
    {
      v6 = *a1;
      v7 = sub_1400FBAF0(a1: v5);
      v8 = 271012;
LABEL_27:
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v6 + 776))(a1, a2: v8, a3: 0, a4: v7);
      return;
    }
    v9 = sub_1400AF100();
    v10 = sub_1400D83A0(a1: v9, a2: v24);
    v11 = sub_1405F1EE0(a1: v10);
    if ( v11 == 0 )
    {
      v6 = *a1;
LABEL_26:
      v7 = sub_1400FBAF0(a1);
      v8 = 271011;
      goto LABEL_27;
    }
    sub_140A44060(a1: v29, a2: v3);
    v12 = a1[32];
    if ( v12 != 0 )
      sub_14007E430(a1: v12, a2: 65001);
    v23[0] = *((_BYTE *)a1 + 264);
    v13 = a1[32];
    if ( v13 != 0 )
      v14 = (char *)sub_140081CC0(a1: v13, a2: 0);
    else
      v14 = &byte_140EEC5C5;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v15 = sub_140E82CD0(a1: v14);
    sub_14000D7F0(a1: &v26, a2: v14, a3: v15);
    v16 = sub_1403EDE40(
            a1: (unsigned int)&unk_141314110,
            a2: (unsigned int)&v25,
            a3: (unsigned int)v29,
            a4: (unsigned int)&v26,
            a5: (__int64)v23);
    sub_1407D6BC0(a1: v11, a2: v16);
    if ( v28 > 0xF )
    {
      v17 = (void *)v26;
      if ( v28 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v26 - *(_QWORD *)(v26 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v17 = *(void **)(v26 - 8);
      }
      sub_1409DB4C0(lpMem: v17);
    }
    v18 = sub_14006ED40(a1: v2, a2: v24, a3: v3);
    v19 = *(_OWORD *)v18;
    v20 = *(_QWORD *)(v18 + 16);
    if ( *(_BYTE *)(v20 + 25) != 0 || (unsigned __int8)sub_14005C290(a1: v2, a2: v3, a3: v20 + 32) != 0 )
    {
      if ( a1[41] == 0x3FFFFFFFFFFFFFFLL )
        sub_14005A5D0();
      v21 = *v2;
      v26 = (unsigned __int64)v2;
      v22 = sub_1409DB470(a1: 64);
      *((_QWORD *)&v26 + 1) = v22;
      sub_140016F80(a1: v22 + 32, a2: v3);
      *(_QWORD *)v22 = v21;
      *(_QWORD *)(v22 + 8) = v21;
      *(_QWORD *)(v22 + 16) = v21;
      *(_WORD *)(v22 + 24) = 0;
      v26 = v19;
      sub_14005A200(a1: v2, a2: &v26, a3: v22);
    }
    sub_1403EE130(a1: a1 + 23);
  }
}