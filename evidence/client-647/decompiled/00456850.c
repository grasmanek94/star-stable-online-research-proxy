__int64 __fastcall sub_140456850(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bl
  __int64 v5; // rdx
  _BYTE v7[16]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v8[8]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v9[376]; // [rsp+38h] [rbp-C8h] BYREF
  char v10; // [rsp+1B0h] [rbp+B0h]
  _BYTE v11[384]; // [rsp+1C0h] [rbp+C0h] BYREF

  sub_140E827B0(a1: v8, a2: 0, a3: 392);
  v8[0] = 0;
  v10 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
  {
    v7[0] = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v7, a3: 1) == 0 )
      goto LABEL_18;
    v8[0] = v7[0];
  }
  else
  {
    v7[0] = v8[0];
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v7, a3: 1) == 0 )
      goto LABEL_18;
  }
  v7[0] = v10;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v7, a3: 1) != 0 )
  {
    if ( v7[0] == 0 )
    {
      if ( v10 != 0 )
      {
        sub_1404505B0(a1: v9);
        v10 = 0;
        (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 8))(a1: a1 + 16, a2: v8);
        v4 = 1;
        goto LABEL_19;
      }
      goto LABEL_17;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
    {
      sub_140E827B0(a1: v11, a2: 0, a3: 376);
      v5 = sub_14044F530(a1: v11);
      if ( v10 != 0 )
      {
        sub_140450820(a1: v9, a2: v5);
      }
      else
      {
        sub_14044F420(a1: v9, a2: v5);
        v10 = 1;
      }
      sub_1404505B0(a1: v11);
    }
    if ( v10 == 0 )
      __fastfail(5u);
    if ( (unsigned __int8)sub_14044C980(a1: a2, a2: v9) != 0 )
    {
LABEL_17:
      (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 8))(a1: a1 + 16, a2: v8);
      v4 = 1;
      goto LABEL_19;
    }
  }
LABEL_18:
  v4 = 0;
LABEL_19:
  if ( v10 != 0 )
    sub_1404505B0(a1: v9);
  return v4;
}