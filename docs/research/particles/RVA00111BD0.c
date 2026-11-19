// Read-only Hex-Rays export, client 645.348067.
void __fastcall sub_140111BD0(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // r8
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // r8
  volatile signed __int32 *v10; // rbx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]

  if ( *(_BYTE *)(a1 + 924) != 0 )
  {
    v4 = a1 + 840;
    if ( *(_BYTE *)(a1 + 776) != 0 )
    {
      v5 = sub_1406FBE10(a1: a2, a2: &v11, a3: a1 + 736);
      sub_14010A930(a1: a1 + 872, a2: v5);
      *(_DWORD *)(a1 + 888) = *(_DWORD *)(v5 + 16);
      *(_DWORD *)(a1 + 892) = *(_DWORD *)(v5 + 20);
      sub_140029550(a1: &v11);
    }
    else
    {
      v12 = -1;
      v11 = 0;
      sub_14010A930(a1: a1 + 872, a2: &v11);
      v7 = *((volatile signed __int32 **)&v11 + 1);
      *(_QWORD *)(a1 + 888) = v12;
      if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(a1: v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(a1: v7);
      }
    }
    LOBYTE(v6) = 0;
    sub_1406FC780(a1: a2, a2: v4, a3: v6);
    sub_1406FAB30(a1: a2, a2: v4, a3: a1 + 872, a4: 0);
    if ( *(_BYTE *)(a1 + 832) != 0 )
    {
      v8 = sub_1406FC060(a1: a2, a2: &v11, a3: a1 + 784);
      sub_14010A930(a1: a1 + 896, a2: v8);
      *(_DWORD *)(a1 + 912) = *(_DWORD *)(v8 + 16);
      *(_DWORD *)(a1 + 916) = *(_DWORD *)(v8 + 20);
      sub_140029550(a1: &v11);
    }
    else
    {
      v12 = -1;
      v11 = 0;
      sub_14010A930(a1: a1 + 896, a2: &v11);
      v10 = *((volatile signed __int32 **)&v11 + 1);
      *(_QWORD *)(a1 + 912) = v12;
      if ( v10 != nullptr && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(a1: v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(a1: v10);
      }
    }
    LOBYTE(v9) = 0;
    sub_1406FC7F0(a1: a2, a2: v4, a3: v9);
    sub_1406FABB0(a1: a2, a2: v4, a3: a1 + 896, a4: 0);
    *(_BYTE *)(a1 + 924) = 0;
  }
}