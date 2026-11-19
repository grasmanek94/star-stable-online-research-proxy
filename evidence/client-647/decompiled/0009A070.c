__int64 __fastcall sub_14009A070(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax

  *(_QWORD *)a1 = &PXEngine::Http::RequestHandler::`vftable';
  *(_QWORD *)(a1 + 8) = sub_140954990();
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  v4 = (_QWORD *)sub_1409DB470(a1: 32);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 7;
  *(_QWORD *)(a1 + 72) = 8;
  *(_DWORD *)(a1 + 16) = 1065353216;
  sub_14004B820(a1: a1 + 40, a2: 16, a3: *(_QWORD *)(a1 + 24));
  sub_14009A140(a1: (_QWORD *)(a1 + 80), a2);
  if ( *(_QWORD *)(a1 + 8) == 0 && (unsigned __int8)sub_140059CA0(a1: off_140F30300) != 0 )
    __debugbreak();
  return a1;
}