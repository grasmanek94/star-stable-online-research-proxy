__int64 __fastcall sub_1407F3BF0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax
  _BYTE *v4; // rcx
  __int64 *i; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)a1 = &PXEngine::NetManager::`vftable';
  v3 = **(__int64 ***)(a1 + 8);
  if ( *((_BYTE *)v3 + 25) == 0 )
  {
    a2 = 0;
    do
    {
      *(_QWORD *)(v3[5] + 8) = 0;
      *(_DWORD *)(v3[5] + 16) = 0;
      v4 = (_BYTE *)v3[2];
      if ( v4[25] != 0 )
      {
        for ( i = (__int64 *)v3[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)i[1] )
        {
          if ( v3 != (__int64 *)i[2] )
            break;
          v3 = i;
        }
        v3 = i;
      }
      else
      {
        v3 = (__int64 *)v3[2];
        if ( *(_BYTE *)(*(_QWORD *)v4 + 25LL) == 0 )
        {
          do
            v3 = (__int64 *)*v3;
          while ( *(_BYTE *)(*v3 + 25) == 0 );
        }
      }
    }
    while ( *((_BYTE *)v3 + 25) == 0 );
  }
  v6 = *(_QWORD *)(a1 + 152);
  if ( v6 != 0 )
  {
    LOBYTE(a2) = v6 != a1 + 96;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(a1: v6, a2);
  }
  *(_QWORD *)(a1 + 152) = 19937;
  v7 = *(_QWORD *)(a1 + 88);
  if ( v7 != 0 )
  {
    LOBYTE(a2) = v7 != a1 + 32;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 32LL))(a1: v7, a2);
  }
  *(_QWORD *)(a1 + 88) = 19937;
  return sub_14005BBF0(a1: a1 + 8);
}