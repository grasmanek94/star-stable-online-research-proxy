__int64 __fastcall sub_1407AEE70(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 i; // rdi

  sub_140016F80(a1: a2, a2: a3);
  result = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[6] = 0;
  v6 = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  if ( (unsigned __int64)v6 >= 0x20 )
  {
    if ( (unsigned __int64)(v6 >> 5) > 0x7FFFFFFFFFFFFFFLL )
      sub_14001B6A0();
    result = sub_14004BCD0(a1: a2 + 4);
    v7 = a2[4];
    v8 = *(_QWORD *)(a3 + 40);
    for ( i = *(_QWORD *)(a3 + 32); i != v8; i += 32 )
    {
      result = sub_140016F80(a1: v7, a2: i);
      v7 += 32;
    }
    a2[5] = v7;
  }
  return result;
}