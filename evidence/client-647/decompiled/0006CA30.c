__int64 __fastcall sub_14006CA30(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned int i; // eax
  _BYTE v7[1024]; // [rsp+30h] [rbp-418h] BYREF

  v4 = sub_1409CB860(a1: 0, a2: 0, a3: 0);
  sub_140E827B0(a1: v7, a2: 0, a3: 1024);
  for ( i = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(
              a1,
              a2: v7,
              a3: 1,
              a4: 1024,
              a5: a2);
        i != 0;
        i = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(
              a1,
              a2: v7,
              a3: 1,
              a4: 1024,
              a5: a2) )
  {
    v4 = sub_1409CB860(a1: v4, a2: v7, a3: i);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, a2) != 0 )
      break;
  }
  return v4;
}