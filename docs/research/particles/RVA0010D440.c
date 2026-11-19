// Read-only Hex-Rays export, client 645.348067.
__int64 __fastcall sub_14010D440(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rsi
  volatile signed __int32 *v6; // rsi
  volatile signed __int32 *v7; // rsi
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  result = sub_1406FB200(a1: a2, a2: a1 + 840);
  if ( (_BYTE)result != 0 )
  {
    v9 = -1;
    v10 = -1;
    v8 = 0;
    sub_14010A930(a1: a1 + 840, a2: &v8);
    v5 = *((volatile signed __int32 **)&v8 + 1);
    *(_QWORD *)(a1 + 856) = v9;
    *(_DWORD *)(a1 + 864) = v10;
    result = HIDWORD(v10);
    *(_DWORD *)(a1 + 868) = HIDWORD(v10);
    if ( v5 != nullptr )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(a1: v5);
        result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(a1: v5);
      }
    }
    *(_WORD *)(a1 + 924) = 256;
  }
  if ( *(_BYTE *)(a1 + 925) != 0 )
  {
    v9 = -1;
    v8 = 0;
    sub_14010A930(a1: a1 + 872, a2: &v8);
    v6 = *((volatile signed __int32 **)&v8 + 1);
    *(_QWORD *)(a1 + 888) = v9;
    if ( v6 != nullptr && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(a1: v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(a1: v6);
    }
    sub_1406FC780(a1: a2, a2: a1 + 840, a3: 0);
    v9 = -1;
    v8 = 0;
    sub_14010A930(a1: a1 + 896, a2: &v8);
    v7 = *((volatile signed __int32 **)&v8 + 1);
    *(_QWORD *)(a1 + 912) = v9;
    if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(a1: v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(a1: v7);
    }
    result = sub_1406FC7F0(a1: a2, a2: a1 + 840, a3: 0);
    *(_BYTE *)(a1 + 925) = 0;
  }
  return result;
}