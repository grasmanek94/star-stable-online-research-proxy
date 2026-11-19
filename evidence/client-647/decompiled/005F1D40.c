__int64 __fastcall sub_1405F1D40(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &PXEngine::SafeActorPtr::`vftable';
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  return a1;
}