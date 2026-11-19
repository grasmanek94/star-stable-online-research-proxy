char __fastcall sub_1404FEAE0(__int64 *a1, char *a2)
{
  char result; // al
  char v5; // al
  unsigned __int8 (__fastcall *v6)(__int64 *, char *, __int64); // r9
  char v7; // si
  __int64 v8; // rax
  unsigned __int8 *v9; // rax
  __int64 v10; // rax
  _QWORD v11[4]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2[16];
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64))(*a1 + 16))(a1, a2: &v12, a3: 1) == 0 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 8))(a1) != 0 )
  {
    if ( v12 != 0 )
    {
      LOBYTE(v11[0]) = 8;
      *(_QWORD *)((char *)v11 + 4) = 0;
      BYTE4(v11[1]) = 0;
      if ( (unsigned __int8)sub_1404FE9D0(a1, a2: v11) != 0 )
      {
        *(_OWORD *)a2 = *(_OWORD *)v11;
        if ( a2[16] == 0 )
          a2[16] = 1;
        return 1;
      }
      return 0;
    }
    v5 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 8))(a1);
    v6 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64))(*a1 + 16);
    if ( v5 != 0 )
    {
      v13 = 0;
      if ( v6(a1, a2: &v13, a3: 1) != 0 )
      {
        v7 = v13;
        goto LABEL_12;
      }
    }
    else
    {
      v7 = 0;
      v13 = 0;
      if ( v6(a1, a2: &v13, a3: 1) != 0 )
      {
LABEL_12:
        *a2 = v7;
        if ( a2[16] != 0 )
        {
          a2[16] = 0;
          return 1;
        }
        return 1;
      }
    }
    return 0;
  }
  if ( v12 != 0 )
  {
    if ( a2[16] == 0 )
    {
      v8 = sub_14001D730(a1: a2);
      v9 = (unsigned __int8 *)sub_14001D730(a1: v8);
      v10 = sub_140501090(a1: v11, a2: *v9);
      sub_140500C50(a1: v10);
    }
    return (unsigned __int8)sub_1404FE9D0(a1, a2) != 0;
  }
  result = sub_1402B8840(a1, a2);
  if ( result != 0 )
    return 1;
  return result;
}