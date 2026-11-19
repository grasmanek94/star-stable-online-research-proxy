_OWORD *__fastcall sub_14063DC80(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _OWORD *result; // rax
  char v6; // bl
  void *v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+30h] [rbp-58h]
  unsigned __int64 v12; // [rsp+38h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+50h] [rbp-38h]
  unsigned __int64 v15; // [rsp+58h] [rbp-30h]

  v10 = 0;
  v11 = 0;
  v12 = 0;
  v4 = sub_140E82CD0(a1: a2);
  sub_14000D7F0(a1: &v10, a2, a3: v4);
  result = (_OWORD *)sub_140A440C0(a1: &v10);
  v6 = (char)result;
  if ( v12 > 0xF )
  {
    v7 = (void *)v10;
    if ( v12 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v10 - *(_QWORD *)(v10 - 8) - 8) > 0x1F )
        goto LABEL_13;
      v7 = *(void **)(v10 - 8);
    }
    result = (_OWORD *)sub_1409DB4C0(lpMem: v7);
  }
  if ( v6 != 0 )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v8 = sub_140E82CD0(a1: a2);
    sub_14000D7F0(a1: &v13, a2, a3: v8);
    result = (_OWORD *)sub_140A441D0(a1: &v10, a2: &v13);
    *(_OWORD *)(a1 + 944) = *result;
    if ( v15 > 0xF )
    {
      v9 = (void *)v13;
      if ( v15 + 1 < 0x1000 )
        return (_OWORD *)sub_1409DB4C0(lpMem: v9);
      if ( (unsigned __int64)(v13 - *(_QWORD *)(v13 - 8) - 8) <= 0x1F )
      {
        v9 = *(void **)(v13 - 8);
        return (_OWORD *)sub_1409DB4C0(lpMem: v9);
      }
LABEL_13:
      __fastfail(5u);
    }
  }
  return result;
}