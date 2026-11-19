__int64 __fastcall sub_140A4BE90(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 > *(_DWORD *)(a1 + 16) - *(_DWORD *)(a1 + 20) && (unsigned __int8)sub_140059CA0(a1: off_1410A04A0) != 0 )
    __debugbreak();
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 20);
  *(_QWORD *)(a2 + 20) = 0;
  *(_QWORD *)a2 = &PXEngine::ByteStreamReader::`vftable';
  *(_DWORD *)(a2 + 16) = a3;
  return a2;
}