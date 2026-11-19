__int64 __fastcall sub_1400644B0(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // r9
  unsigned int v6; // edi
  unsigned int v7; // ebx

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  LOBYTE(v5) = 2;
  v6 = v4;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2, a3: 0, a4: v5);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, a2);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, a2, a3: v6, a4: 0);
  return v7;
}