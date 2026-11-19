__int64 __fastcall sub_140A255B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r9d
  int v4; // r8d

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 20);
  v4 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)a1 = &PXEngine::ByteStreamWriter::`vftable';
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 16) = v4;
  *(_DWORD *)(a1 + 20) = v3;
  LODWORD(v2) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a1 + 24) = v2;
  return a1;
}