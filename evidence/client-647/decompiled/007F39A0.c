__int64 __fastcall sub_1407F39A0(char *a1)
{
  char *v1; // r9
  unsigned __int64 v2; // r8
  unsigned int i; // eax
  unsigned int v4; // ecx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8

  if ( *((_QWORD *)a1 + 2) == 0 )
    return 0;
  v1 = a1;
  v2 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) > 0xFu )
    v1 = *(char **)a1;
  for ( i = (-962287725 * v2) ^ 0x80D40B5E; v2 >= 4; i = (-962287725 * v4) ^ ((-962287725 * v4) >> 16) )
  {
    v2 -= 4LL;
    v4 = i + *(_DWORD *)v1;
    v1 += 4;
  }
  v5 = v2 - 1;
  if ( v5 == 0 )
    goto LABEL_12;
  v6 = v5 - 1;
  if ( v6 == 0 )
  {
LABEL_11:
    i += v1[1] << 8;
LABEL_12:
    i = (-962287725 * (i + *v1)) ^ ((-962287725 * (i + *v1)) >> 16);
    return (-962287725 * ((-962287725 * i) ^ ((-962287725 * i) >> 10)))
         ^ ((-962287725 * ((-962287725 * i) ^ ((-962287725 * i) >> 10))) >> 17);
  }
  if ( v6 == 1 )
  {
    i += v1[2] << 16;
    goto LABEL_11;
  }
  return (-962287725 * ((-962287725 * i) ^ ((-962287725 * i) >> 10)))
       ^ ((-962287725 * ((-962287725 * i) ^ ((-962287725 * i) >> 10))) >> 17);
}