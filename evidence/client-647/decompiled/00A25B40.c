char __fastcall sub_140A25B40(__int64 a1, float *a2)
{
  char result; // al
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v12 = 0;
    result = sub_140A25A20(a1, a2: &v12);
    if ( result != 0 )
    {
      *(_OWORD *)a2 = v12;
      return 1;
    }
  }
  else
  {
    v5 = -1.0;
    if ( *a2 >= -1.0 )
      v6 = fminf(1.0, *a2);
    else
      v6 = -1.0;
    v7 = a2[1];
    *(float *)&v12 = v6;
    if ( v7 >= -1.0 )
      v8 = fminf(1.0, v7);
    else
      v8 = -1.0;
    v9 = a2[2];
    *((float *)&v12 + 1) = v8;
    if ( v9 >= -1.0 )
      v10 = fminf(1.0, v9);
    else
      v10 = -1.0;
    v11 = a2[3];
    *((float *)&v12 + 2) = v10;
    if ( v11 >= -1.0 )
      v5 = fminf(1.0, v11);
    *((float *)&v12 + 3) = v5;
    return sub_140A25A20(a1, a2: &v12);
  }
  return result;
}