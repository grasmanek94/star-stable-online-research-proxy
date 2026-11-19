__int64 __fastcall sub_1401D0A70(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_1405FD2E0(a1, a2: v6, a3: "HorseForSaleManager");
  if ( (unsigned __int8)sub_1406006A0(a1, a2: v4, a3: 165) != 0 )
  {
    sub_1405F1D60(a1: a2, a2: *(unsigned int *)(v4 + 12), a3: *(unsigned int *)(v4 + 8));
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 195948557;
  }
  *(_QWORD *)a2 = &PXEngine::SafeActorPtrAs<CPXHorseManager>::`vftable';
  return a2;
}