__int64 __fastcall sub_14078A000(__int64 a1, __int64 *a2, char a3)
{
  __int64 v6; // rdi
  _QWORD *v7; // rax
  char v8; // al
  unsigned int v9; // r8d
  __int64 v10; // rdx
  _QWORD *v12; // [rsp+68h] [rbp+20h] BYREF

  v6 = sub_140205610();
  if ( v6 == 0 )
  {
    if ( (unsigned __int8)sub_140059D90(a1: off_14100EAC0, a2: "No playerLookManager found!") != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v7 = (_QWORD *)sub_1409DB470(a1: 16);
  v12 = v7;
  if ( v7 != nullptr )
  {
    *v7 = &CPXPlayerTPNet::LookHandler::`vftable';
    v7[1] = a1;
  }
  v12 = v7;
  sub_14080B920(a1: a1 + 2016, a2, a3: &v12);
  v8 = sub_1400AE640(a1);
  v9 = *(_DWORD *)(a1 + 1720);
  v10 = a1 + 2016;
  if ( v8 != 0 )
    return sub_140209800(a1: v6, a2: v10, a3, a4: v9);
  else
    return sub_140209820(manager: v6, object: v10, player_id: v9);
}