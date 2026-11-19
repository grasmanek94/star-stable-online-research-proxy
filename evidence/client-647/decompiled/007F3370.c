__int64 __fastcall sub_1407F3370(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int128 v5; // xmm0

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 15;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = -1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = -1;
  *(_QWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 80) = 1065353216;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 100) = 0;
  *(_QWORD *)(a1 + 108) = 0;
  *(_QWORD *)(a1 + 116) = 0;
  *(_QWORD *)(a1 + 124) = 0;
  *(_QWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  v2 = a1 + 152;
  *(_DWORD *)(a1 + 152) = 0;
  v3 = (_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  v4 = (_QWORD *)sub_1409DB470(a1: 24);
  *v4 = v4;
  v4[1] = v4;
  *v3 = v4;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = 7;
  *(_QWORD *)(v2 + 56) = 8;
  *(_DWORD *)v2 = 1065353216;
  sub_14004B820(a1: v2 + 24, a2: 16, a3: *v3);
  *(_BYTE *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  v5 = xmmword_1413105E0;
  *(_OWORD *)(a1 + 244) = xmmword_1413105E0;
  *(_OWORD *)(a1 + 260) = v5;
  *(_QWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 288) = -1;
  *(_BYTE *)(a1 + 292) = 0;
  *(_BYTE *)(a1 + 293) &= ~1u;
  *(_WORD *)(a1 + 294) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = -1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = -1;
  *(_DWORD *)(a1 + 68) = 0;
  return a1;
}