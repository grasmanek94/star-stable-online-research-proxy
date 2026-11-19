char __fastcall sub_14051A660(_DWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // r15
  __int64 v5; // r9
  _QWORD *v6; // rbx
  unsigned __int64 v7; // r8
  _QWORD *v8; // rbp
  _QWORD *i; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  _QWORD v14[4]; // [rsp+20h] [rbp-58h] BYREF
  char v15; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 40) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140FBD6E8) != 0 )
    __debugbreak();
  v16 = (a2[1] - *a2) / 40;
  if ( sub_1401D0820(a1, a2: &v16) == 0 )
    return 0;
  v4 = v16;
  if ( v16 > 0x3E80 )
    return 0;
  v5 = *a2;
  v6 = (_QWORD *)a2[1];
  v7 = ((__int64)v6 - *a2) / 40;
  if ( v16 >= v7 )
  {
    if ( v16 > v7 )
    {
      if ( v16 <= (unsigned __int64)((a2[2] - v5) / 40) )
      {
        v10 = v16 - v7;
        if ( v16 != v7 )
        {
          do
          {
            v6[1] = 1;
            *v6 = 0;
            v6[2] = 0;
            v6[3] = 0;
            v6[4] = 0;
            v6 += 5;
            --v10;
          }
          while ( v10 != 0 );
        }
        a2[1] = (__int64)v6;
      }
      else
      {
        sub_14051D330(a1: a2, a2: v16, a3: &v15);
      }
    }
  }
  else
  {
    v8 = (_QWORD *)(v5 + 40LL * v16);
    for ( i = v8; i != v6; i += 5 )
      sub_14002AE40(a1: i + 2);
    a2[1] = (__int64)v8;
  }
  v11 = *a2;
  v12 = 0;
  if ( (_DWORD)v4 == 0 )
    return 1;
  while ( 1 )
  {
    v14[0] = v11 + 16 + 40 * v12;
    v14[1] = v11 + 8 + 40 * v12;
    v14[2] = v11 + 4 + 40 * v12;
    v14[3] = v11 + 40 * v12;
    if ( (unsigned __int8)sub_14051B250(a1, a2: v14) == 0 )
      break;
    if ( ++v12 >= v4 )
      return 1;
  }
  return 0;
}