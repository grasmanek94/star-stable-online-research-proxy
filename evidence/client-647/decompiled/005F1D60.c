__int64 __fastcall sub_1405F1D60(__int64 a1, int a2, int a3)
{
  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)a1 = &PXEngine::SafeActorPtr::`vftable';
  *(_DWORD *)(a1 + 8) = a3;
  return a1;
}