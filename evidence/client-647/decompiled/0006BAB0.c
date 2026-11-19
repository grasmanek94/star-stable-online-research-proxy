__int64 __fastcall sub_14006BAB0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax

  *(_QWORD *)a1 = &CPXFile::`vftable';
  *(_QWORD *)(a1 + 8) = &CPXIOInterfaceMem::`vftable';
  v4 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v5 = (_QWORD *)sub_1409DB470(a1: 88);
  *v5 = v5;
  v5[1] = v5;
  *v4 = v5;
  *(_BYTE *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 7;
  *(_WORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 15;
  *(_BYTE *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 140) = 0;
  if ( a2 == 0 )
    a2 = sub_140066560();
  *(_QWORD *)(a1 + 128) = a2;
  return a1;
}