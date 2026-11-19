__int64 __fastcall sub_140456C40(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  _QWORD v5[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v6; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v7[4]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]
  __int64 v9; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0;
  memset(v7, 0, sizeof(v7));
  v8 = 0;
  LOBYTE(v6) = 3;
  v5[0] = (char *)&v6 + 8;
  v5[1] = &v6;
  v9 = a2;
  if ( (unsigned __int8)sub_14044F080(a1: v5, a2: &v9, a3: 0) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int128 *))(a1 + 8))(a1: a1 + 16, a2: &v6);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( (_BYTE)v8 != 0 )
    sub_14001B5A0(a1: v7);
  return v3;
}