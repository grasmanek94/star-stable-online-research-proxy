__int64 __fastcall sub_140786AC0(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  volatile signed __int32 *v15; // rdx
  __int64 v16; // rbp
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  volatile signed __int32 *v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rax
  _QWORD v22[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-68h] BYREF
  int v24; // [rsp+50h] [rbp-58h]

  sub_1405F1D40(a1: (__int64)v22, a2: a1 + 32);
  v22[0] = &PXEngine::SafeActorPtrAs<CPXSpace>::`vftable';
  v6 = sub_1405F1EE0(a1: (__int64)v22);
  v9 = sub_1400AF100(a1: v8, a2: v7);
  v10 = sub_1400AEDB0(a1, a2: v9);
  result = sub_140164770(a1: v10, a2: v6, a3: a2);
  if ( result != 0 )
    v6 = result;
  if ( v6 != 0 )
  {
    v12 = sub_1405F1EE0(a1: a1 + 1608);
    if ( v12 != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 1048LL))(a1: v12, a2: 25);
    v13 = sub_1405F1EE0(a1: a1 + 416);
    v14 = 0;
    if ( v13 != 0 )
    {
      v15 = *(volatile signed __int32 **)(v13 + 648);
      if ( v15 != nullptr && *((_DWORD *)v15 + 2) != 0 )
      {
        v16 = *(_QWORD *)(v13 + 640);
        _InterlockedIncrement(v15 + 3);
        v17 = *((_DWORD *)v15 + 2);
        if ( v17 != 0 )
        {
          while ( 1 )
          {
            v18 = v17;
            v17 = _InterlockedCompareExchange(v15 + 2, v17 + 1, v17);
            if ( v18 == v17 )
              break;
            if ( v17 == 0 )
              goto LABEL_12;
          }
          v19 = v15;
        }
        else
        {
LABEL_12:
          v19 = nullptr;
          v16 = 0;
        }
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(a1: v15);
          v14 = 0;
        }
        if ( v16 != 0 )
        {
          v23[1] = 0;
          v23[0] = -1;
          v24 = 0;
          v20 = sub_1406C2940(a1: v16, a2: 0, a3: v23);
          if ( v20 != 0 )
            sub_1406C6A80(a1: v16, a2: v20);
        }
        if ( v19 != nullptr && _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *, volatile signed __int32 *, __int64))v19)(
            a1: v19,
            a2: v15,
            a3: v14);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(a1: v19);
        }
      }
    }
    sub_14079C2C0(a1, a2: v6, a3: a2, a4: a3);
    v21 = sub_1405F1EE0(a1: a1 + 416);
    if ( v21 != 0 )
    {
      sub_1400ED490(a1: v21);
      *(_DWORD *)(a1 + 1380) = 0;
    }
    *(_DWORD *)(a1 + 1992) = 1056964608;
    *(_OWORD *)(a1 + 1996) = *a3;
    *(_DWORD *)(a1 + 1976) = 1056964608;
    *(_QWORD *)(a1 + 1980) = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 1988) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 260) = 1036831949;
    result = sub_1400AE640(a1);
    if ( (_BYTE)result != 0 )
      return sub_140786610(a1);
  }
  return result;
}