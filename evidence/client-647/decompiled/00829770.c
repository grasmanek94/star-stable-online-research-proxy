__int64 __fastcall sub_140829770(__int64 a1, _QWORD *a2)
{
  __int64 v3; // [rsp+8h] [rbp+8h]

  LODWORD(v3) = 0;
  BYTE4(v3) = 2;
  *a2 = v3;
  return (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2, a3: 4);
}