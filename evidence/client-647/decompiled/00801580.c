__int64 __fastcall sub_140801580(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 52) += *(_DWORD *)(a2 + 24);
  return a1;
}