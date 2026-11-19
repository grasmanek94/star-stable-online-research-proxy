__int64 __fastcall sub_14037EB30(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  void *v6; // rcx

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  a2[2] = 0;
  a2[3] = 15;
  *(_BYTE *)a2 = 0;
  *(_WORD *)(a1 + 32) = 0;
  v4 = a2[3];
  if ( v4 > 0xF )
  {
    v5 = *a2;
    if ( v4 + 1 < 0x1000 )
    {
      v6 = (void *)*a2;
    }
    else
    {
      v6 = *(void **)(v5 - 8);
      if ( (unsigned __int64)(v5 - (_QWORD)v6 - 8) > 0x1F )
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v6);
  }
  a2[2] = 0;
  *a2 = 19937;
  a2[3] = 31;
  return a1;
}