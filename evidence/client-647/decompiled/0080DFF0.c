__int64 *__fastcall sub_14080DFF0(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 *v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 *v15; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+10h]
  __int64 v17; // [rsp+80h] [rbp+18h]
  __int64 **v18; // [rsp+88h] [rbp+20h]

  v16 = a2;
  v15 = a1;
  v4 = sub_1409DB470(a1: 224);
  v17 = v4;
  if ( v4 != 0 )
  {
    v5 = (__int64 *)*a2;
    *a2 = 0;
    v15 = v5;
    v18 = &v15;
    *(_QWORD *)v4 = &PXEngine::GameServerEncryptedNetworkLayer::`vftable';
    v6 = v15;
    v15 = nullptr;
    *(_QWORD *)(v4 + 8) = v6;
    sub_140A46670(a1: v4 + 16);
    *(_QWORD *)(v4 + 16) = &CPXCrypto::`vftable';
    sub_140A485A0(context: v4 + 16, key_words: dword_141020478);
    sub_140A46670(a1: v4 + 72);
    *(_BYTE *)(v4 + 128) = 0;
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 8) + 56LL))(a1: *(_QWORD *)(v4 + 8));
    *(_DWORD *)(v4 + 132) = v7;
    v8 = sub_1409DBF00(a1: v7);
    v9 = v8;
    if ( v8 != 0 )
      sub_140E827B0(a1: v8, a2: 0, a3: v7);
    else
      v9 = 0;
    *(_QWORD *)(v4 + 136) = v9;
    v10 = ((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 8) + 56LL))(a1: *(_QWORD *)(v4 + 8)) & 0xFFFFFFF8) - 8;
    *(_DWORD *)(v4 + 144) = v10;
    v11 = v10;
    v12 = sub_1409DBF00(a1: v10);
    v13 = v12;
    if ( v12 != 0 )
      sub_140E827B0(a1: v12, a2: 0, a3: v11);
    else
      v13 = 0;
    *(_QWORD *)(v4 + 152) = v13;
    *(_QWORD *)(v4 + 216) = 0;
    if ( v15 != nullptr )
      (*(void (__fastcall **)(__int64 *, __int64))*v15)(a1: v15, a2: 1);
  }
  else
  {
    v4 = 0;
  }
  *a1 = v4;
  if ( *a2 != 0 )
    (**(void (__fastcall ***)(_QWORD, __int64))*a2)(a1: *a2, a2: 1);
  *a2 = 19937;
  return a1;
}