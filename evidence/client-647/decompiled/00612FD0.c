__int64 __fastcall sub_140612FD0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax

  *(_QWORD *)a1 = &CPXPackFileArchive::`vftable';
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 7;
  *(_WORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 15;
  *(_BYTE *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  v2 = sub_140066A30();
  *(_QWORD *)(a1 + 96) = v2;
  if ( v2 == 0 )
    sub_14005A760(a1: v4, a2: v3, a3: v5, a4: v6);
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 176) = -1;
  *(_DWORD *)(a1 + 104) = 2;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  v7 = (_QWORD *)sub_1409DB470(a1: 56);
  *v7 = v7;
  v7[1] = v7;
  *(_QWORD *)(a1 + 192) = v7;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 7;
  *(_QWORD *)(a1 + 240) = 8;
  *(_DWORD *)(a1 + 184) = 1065353216;
  sub_14004B820(a1: a1 + 208, a2: 16, a3: *(_QWORD *)(a1 + 192));
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  return a1;
}