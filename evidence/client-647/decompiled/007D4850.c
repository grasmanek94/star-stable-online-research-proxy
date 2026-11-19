void __fastcall sub_1407D4850(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax

  if ( *((_BYTE *)a1 + 3024) == 0 && (unsigned __int8)sub_1400CCAD0(a1, a2: 122140) != 0 )
  {
    v3 = *a1;
    *((_BYTE *)a1 + 3024) = 1;
    v4 = sub_1400FBAF0(a1: v2);
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v3 + 776))(a1, a2: 122140, a3: 0, a4: v4);
  }
}