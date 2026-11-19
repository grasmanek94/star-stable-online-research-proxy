char __fastcall sub_140808D50(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx

  v4 = a2[9];
  v6 = a2[10];
  if ( v4 == v6 )
  {
LABEL_5:
    v8 = a2[12];
    v9 = a3;
    v10 = a2[13];
    if ( v8 == v10 )
      return 0;
    while ( 1 )
    {
      v11 = a4 + *(unsigned int *)(v8 + 104);
      if ( v9 != v11 && v9 >= v11 )
        break;
      v8 += 112;
      if ( v8 == v10 )
        return 0;
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = a4 + *(unsigned int *)(v4 + 104);
      if ( a3 != v7 && a3 >= v7 )
        break;
      v4 += 112;
      if ( v4 == v6 )
        goto LABEL_5;
    }
  }
  return 1;
}