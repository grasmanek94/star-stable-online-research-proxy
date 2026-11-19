__int64 __fastcall sub_140522100(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  _QWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  memset(v6, 0, sizeof(v6));
  v7 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v7) != 0
    && (LODWORD(v6[0]) = v7, (unsigned __int8)sub_14051AC20(a1: a2, a2: &v6[1]) != 0) )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 8))(a1: a1 + 16, a2: v6);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  sub_14051FFC0(a1: &v6[1]);
  return v4;
}