__int64 __fastcall sub_140809050(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char v8; // al
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  void *v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  _BYTE v17[88]; // [rsp+28h] [rbp-100h] BYREF
  LPVOID lpMem; // [rsp+80h] [rbp-A8h]
  _BYTE v19[104]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v20; // [rsp+F8h] [rbp-30h]

  v20 = a4;
  v8 = *(_BYTE *)(a4 + 40);
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 4) != 0 )
    {
      v11 = *(_QWORD *)a1;
      v12 = sub_140736840(a1: v17, a2: a4);
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v11 + 48))(a1, a2, a3: v12);
    }
    else
    {
      v9 = sub_140736840(a1: v17, a2: a4);
      result = sub_1408097F0(a1, a2, a3, a4: v9);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 8LL))(a1: *(_QWORD *)(a1 + 272));
    v13 = sub_140736840(a1: v19, a2: a4);
    sub_140736840(a1: v17, a2: v13);
    v14 = *(void **)(v13 + 88);
    if ( v14 != nullptr )
      sub_1409DB4C0(lpMem: v14);
    *(_QWORD *)(v13 + 88) = 19937;
    v15 = *(_QWORD *)(a1 + 128);
    if ( v15 == 0 )
    {
      sub_1409D2AC0(a1: 0);
      JUMPOUT(0x140809195LL);
    }
    result = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v15 + 16LL))(a1: v15, a2, a3: v17);
    if ( lpMem != nullptr )
      result = sub_1409DB4C0(lpMem);
  }
  v16 = *(void **)(a4 + 88);
  if ( v16 != nullptr )
    result = sub_1409DB4C0(lpMem: v16);
  *(_QWORD *)(a4 + 88) = 19937;
  return result;
}