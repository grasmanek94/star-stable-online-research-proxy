// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_140106E00(__int64 a1)
{
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  char v7[8]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-10h]
  unsigned int v9; // [rsp+2Ch] [rbp-Ch]
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+50h] [rbp+18h]

  v2 = sub_1405F8CF0(a1: a1 + 616);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 640LL))(a1);
  if ( (_BYTE)result != 0 && *(_BYTE *)(a1 + 169) == 0 && v2 != 0 )
  {
    *(_QWORD *)(a1 + 692) = 0;
    *(_DWORD *)(a1 + 700) = 0;
    v10 = nullptr;
    v5 = (_QWORD *)sub_1409E0850(a1: 32);
    v11 = v5;
    if ( v5 != nullptr )
    {
      *v5 = &PXEngine::Delegate<void,float>::CallbackActor<CPXReinsSimulator,void (CPXReinsSimulator::*)(float)>::`vftable';
      sub_1405F8B50(a1: v7, a2: a1 + 120);
      sub_1405F8B70(a1: v5 + 1, a2: v9, a3: v8);
      v5[1] = &PXEngine::SafeActorPtrAs<CPXReinsSimulator>::`vftable';
      v5[3] = sub_1401072C0;
    }
    else
    {
      v5 = nullptr;
    }
    v6 = v10;
    v10 = (void (__fastcall ***)(_QWORD, __int64))v5;
    if ( v6 != nullptr )
      (**v6)(a1: v6, a2: 1);
    LOBYTE(v4) = 4;
    result = sub_1400E6550(a1: v2, a2: v4, a3: &v10);
    if ( v10 != nullptr )
      return ((__int64 (__fastcall *)(_QWORD, __int64))**v10)(a1: v10, a2: 1);
  }
  return result;
}