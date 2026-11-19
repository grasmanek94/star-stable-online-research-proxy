__int64 __fastcall sub_1407F3B00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)a1 = &PXEngine::NetManager::`vftable';
  v6 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v7 = sub_1409DB470(a1: 48);
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  *v6 = v7;
  *(_DWORD *)(a1 + 24) = 0;
  sub_140099FF0(a1: a1 + 32, a2);
  sub_140099FF0(a1: a1 + 96, a2: a3);
  v9 = *(_QWORD *)(a2 + 56);
  if ( v9 != 0 )
  {
    LOBYTE(v8) = v9 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(a1: v9, a2: v8);
  }
  *(_QWORD *)(a2 + 56) = 19937;
  v10 = *(_QWORD *)(a3 + 56);
  if ( v10 != 0 )
  {
    LOBYTE(v8) = v10 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(a1: v10, a2: v8);
  }
  *(_QWORD *)(a3 + 56) = 19937;
  return a1;
}