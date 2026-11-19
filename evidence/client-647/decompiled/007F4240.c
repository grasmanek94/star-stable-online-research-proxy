__int64 __fastcall sub_1407F4240(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ecx
  __int64 *v5; // rdx
  __int64 *v6; // rax
  void *v7; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = a1 + 8;
  v4 = *(_DWORD *)(a2 + 16);
  v5 = (__int64 *)v2;
  v6 = *(__int64 **)(v2 + 8);
  while ( *((_BYTE *)v6 + 25) == 0 )
  {
    if ( *((_DWORD *)v6 + 8) >= v4 )
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  if ( *((_BYTE *)v5 + 25) != 0 || v4 < *((_DWORD *)v5 + 8) || v5 == (__int64 *)v2 )
  {
    result = sub_140059D90(a1: off_1410195F0, a2: "Net Object never registered!", v2, v3);
    if ( (_BYTE)result != 0 )
      __debugbreak();
  }
  else
  {
    *(_QWORD *)(v5[5] + 8) = 0;
    v7 = (void *)sub_1400A4F40(a1: v3);
    return sub_1409DB4C0(lpMem: v7);
  }
  return result;
}