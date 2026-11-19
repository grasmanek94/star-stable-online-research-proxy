__int64 __fastcall sub_140521D40(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-A8h] BYREF
  int v11; // [rsp+38h] [rbp-90h]
  __int16 v12; // [rsp+48h] [rbp-80h]
  _BYTE v13[32]; // [rsp+50h] [rbp-78h] BYREF
  __int16 v14; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v15[80]; // [rsp+78h] [rbp-50h] BYREF

  if ( a2 == 1301 )
  {
    sub_140519A50(a1);
    sub_140519C30(a1);
    sub_140519E10(a1);
    sub_140519FF0(a1);
    v8 = sub_140619120(a1: a4);
    sub_140521490(a1, a2: v8);
    if ( qword_14138AA40 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F38D90) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    if ( (unsigned __int8)sub_140608610(a1: qword_14138AA40, a2: 6) != 0
      && *(_BYTE *)(a1 + 656) == 0
      && *(_QWORD *)&nExitCode != 0
      && (unsigned __int8)sub_140623740() != 0 )
    {
      *(_BYTE *)(a1 + 657) = 1;
      v10[1] = 0;
      v10[2] = 0;
      v11 = 0;
      v10[0] = &PXEngine::ByteStreamWriter::`vftable';
      v12 = word_141313E0C;
      sub_140A255B0(a1: v13, a2: v10);
      v14 = v12;
      sub_140A255B0(a1: v15, a2: v13);
      v15[32] = 1;
      sub_140A25690(a1: v13);
      sub_140A25690(a1: v10);
      sub_1407EE6B0(a1: &v14);
    }
  }
  return sub_1400CC5C0(a1, a2, a3, a4);
}