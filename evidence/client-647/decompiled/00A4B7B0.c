__int64 __fastcall sub_140A4B7B0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  int v6; // eax
  _QWORD v8[8]; // [rsp+28h] [rbp-40h] BYREF

  memset(v8, 0, 48);
  v5 = a2 - 1;
  if ( v5 != 0 )
  {
    if ( v5 == 1 )
      v6 = 23;
    else
      v6 = 0;
  }
  else
  {
    v6 = 2;
  }
  HIDWORD(v8[0]) = v6;
  LODWORD(v8[1]) = 2;
  sub_140A4B540(a1, a2: a3, a3: a4, a4: v8);
  return a1;
}