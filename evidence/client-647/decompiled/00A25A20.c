char __fastcall sub_140A25A20(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  float v5; // xmm0_4
  unsigned __int16 v7; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  while ( 1 )
  {
    v7 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int16 *, __int64))(*(_QWORD *)a1 + 16LL))(
           a1,
           a2: &v7,
           a3: 2) == 0 )
      return 0;
    v5 = (float)((float)((float)v7 / 65535.0) + (float)((float)v7 / 65535.0)) - 1.0;
    if ( v5 >= -1.0 )
      *(float *)(a2 + 4 * v4) = fminf(1.0, v5);
    else
      *(_DWORD *)(a2 + 4 * v4) = -1082130432;
LABEL_8:
    if ( (unsigned __int64)++v4 >= 4 )
      return 1;
  }
  v7 = (int)(float)((float)((float)(*(float *)(a2 + 4 * v4) - -1.0) * 0.5) * 65535.0);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int16 *, __int64))(*(_QWORD *)a1 + 16LL))(
         a1,
         a2: &v7,
         a3: 2) != 0 )
    goto LABEL_8;
  return 0;
}