__int64 __fastcall sub_1407D62B0(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  int v8; // [rsp+20h] [rbp-58h] BYREF
  __int16 v9; // [rsp+24h] [rbp-54h]
  int v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+2Ch] [rbp-4Ch]
  __int128 v12; // [rsp+30h] [rbp-48h]
  _BYTE v13[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+48h] [rbp-30h]
  __int64 v15; // [rsp+50h] [rbp-28h]

  v3 = *(__int64 **)(a1 + 2640);
  if ( v3 == nullptr )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_1410140F8) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v5 = *v3;
  v8 = 0;
  v11 = 0;
  v9 = a2;
  v10 = -1;
  v12 = 0;
  sub_1409CB2E0(a1: v13);
  v14 = 0;
  v15 = 0;
  v6 = sub_140801580(a1: (__int64)&v8, a2: a3);
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 16))(a1: v3, a2: v6);
}