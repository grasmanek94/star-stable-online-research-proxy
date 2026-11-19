char __fastcall sub_140828F60(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 24) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_141025AB8) != 0 )
    __debugbreak();
  v14 = (a2[1] - *a2) / 24;
  if ( sub_1401D0820(a1, a2: &v14) == 0 || v14 > 0x3E80 )
    return 0;
  v4 = a2[1];
  v5 = *a2;
  v6 = v14;
  v7 = (v4 - *a2) / 24;
  if ( v14 >= v7 )
  {
    if ( v14 > v7 )
    {
      if ( v14 <= (unsigned __int64)((a2[2] - v5) / 24) )
      {
        v8 = v14 - v7;
        if ( v14 != v7 )
        {
          do
          {
            *(_OWORD *)v4 = 0;
            *(_QWORD *)(v4 + 16) = 0;
            v4 += 24;
            --v8;
          }
          while ( v8 != 0 );
        }
        a2[1] = v4;
      }
      else
      {
        sub_1403F4220(a1: a2, a2: v14, a3: &v13);
      }
    }
  }
  else
  {
    a2[1] = v5 + 24LL * v14;
  }
  v9 = *a2;
  v10 = 0;
  if ( v14 == 0 )
    return 1;
  while ( 1 )
  {
    v12[0] = v9 + 16 + 24 * v10;
    v12[1] = v9 + 12 + 24 * v10;
    v12[2] = v9 + 8 + 24 * v10;
    v12[3] = v9 + 24 * v10;
    if ( !sub_140829550(a1, a2: v12) )
      break;
    if ( ++v10 >= v6 )
      return 1;
  }
  return 0;
}