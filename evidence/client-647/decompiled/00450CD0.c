__int64 __fastcall sub_140450CD0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-E0h] BYREF
  int v21; // [rsp+38h] [rbp-C8h]
  __int16 v22; // [rsp+48h] [rbp-B8h]
  _BYTE v23[32]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v24; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[32]; // [rsp+78h] [rbp-88h] BYREF
  char v26; // [rsp+98h] [rbp-68h]
  __int128 v27; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v29; // [rsp+B8h] [rbp-48h]
  __int128 v30; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v32; // [rsp+D8h] [rbp-28h]
  __int128 v33; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v34; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v35; // [rsp+F8h] [rbp-8h]
  __int128 v36; // [rsp+100h] [rbp+0h] BYREF
  __int64 v37; // [rsp+110h] [rbp+10h]
  unsigned __int64 v38; // [rsp+118h] [rbp+18h]

  v2 = sub_1405F1EE0(a1: a1 + 936);
  v3 = sub_1405F1EE0(a1: a1 + 952);
  v4 = sub_1405F1EE0(a1: a1 + 968);
  v5 = sub_1405F1EE0(a1: a1 + 984);
  result = sub_1405F1E20(a1: a1 + 920);
  if ( (_BYTE)result != 0 && v2 != 0 && v3 != 0 && v4 != 0 && v5 != 0 )
  {
    v7 = sub_1405F1EE0(a1: a1 + 1016);
    if ( v7 != 0 )
      sub_140148000(a1: v7, a2: 0);
    v8 = sub_140139D60(a1: v2, a2: 65001);
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v9 = sub_140E82CD0(a1: v8);
    sub_14000D7F0(a1: &v27, a2: v8, a3: v9);
    v10 = sub_140139D60(a1: v3, a2: 65001);
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v11 = sub_140E82CD0(a1: v10);
    sub_14000D7F0(a1: &v30, a2: v10, a3: v11);
    v12 = sub_140139D60(a1: v4, a2: 65001);
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v13 = sub_140E82CD0(a1: v12);
    sub_14000D7F0(a1: &v33, a2: v12, a3: v13);
    v14 = sub_140139D60(a1: v5, a2: 65001);
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v15 = sub_140E82CD0(a1: v14);
    sub_14000D7F0(a1: &v36, a2: v14, a3: v15);
    v20[1] = 0;
    v20[2] = 0;
    v21 = 0;
    v20[0] = &PXEngine::ByteStreamWriter::`vftable';
    if ( sub_1402B4D00(a1: v20, a2: (__int64 *)&v27) != 0
      && sub_1402B4D00(a1: v20, a2: (__int64 *)&v30) != 0
      && sub_1402B4D00(a1: v20, a2: (__int64 *)&v33) != 0
      && sub_1402B4D00(a1: v20, a2: (__int64 *)&v36) != 0 )
    {
      v22 = word_141313CB0;
      sub_140A255B0(a1: v23, a2: v20);
      v24 = v22;
      sub_140A255B0(a1: v25, a2: v23);
      v26 = 1;
      sub_140A25690(a1: v23);
    }
    else
    {
      v26 = 0;
    }
    sub_140A25690(a1: v20);
    result = sub_1407EE6B0(a1: &v24);
    if ( v38 > 0xF )
    {
      v16 = (void *)v36;
      if ( v38 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v36 - *(_QWORD *)(v36 - 8) - 8) > 0x1F )
          goto LABEL_35;
        v16 = *(void **)(v36 - 8);
      }
      result = sub_1409DB4C0(lpMem: v16);
    }
    *(_QWORD *)&v36 = 19937;
    v37 = 0;
    v38 = 31;
    if ( v35 > 0xF )
    {
      v17 = (void *)v33;
      if ( v35 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v33 - *(_QWORD *)(v33 - 8) - 8) > 0x1F )
          goto LABEL_35;
        v17 = *(void **)(v33 - 8);
      }
      result = sub_1409DB4C0(lpMem: v17);
    }
    *(_QWORD *)&v33 = 19937;
    v34 = 0;
    v35 = 31;
    if ( v32 > 0xF )
    {
      v18 = (void *)v30;
      if ( v32 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v30 - *(_QWORD *)(v30 - 8) - 8) > 0x1F )
          goto LABEL_35;
        v18 = *(void **)(v30 - 8);
      }
      result = sub_1409DB4C0(lpMem: v18);
    }
    *(_QWORD *)&v30 = 19937;
    v31 = 0;
    v32 = 31;
    if ( v29 <= 0xF )
      return result;
    v19 = (void *)v27;
    if ( v29 + 1 < 0x1000 )
      return sub_1409DB4C0(lpMem: v19);
    if ( (unsigned __int64)(v27 - *(_QWORD *)(v27 - 8) - 8) <= 0x1F )
    {
      v19 = *(void **)(v27 - 8);
      return sub_1409DB4C0(lpMem: v19);
    }
LABEL_35:
    __fastfail(5u);
  }
  return result;
}