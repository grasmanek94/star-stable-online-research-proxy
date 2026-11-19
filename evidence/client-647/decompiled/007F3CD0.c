_QWORD **__fastcall sub_1407F3CD0(_QWORD **lpMem, __int64 a2)
{
  char v2; // si
  __int64 *v4; // rax
  _BYTE *v5; // rcx
  __int64 *i; // rcx
  _QWORD **v7; // rcx
  _QWORD **v8; // rcx

  v2 = a2;
  *lpMem = &PXEngine::NetManager::`vftable';
  v4 = (__int64 *)*lpMem[1];
  if ( *((_BYTE *)v4 + 25) == 0 )
  {
    a2 = 0;
    do
    {
      *(_QWORD *)(v4[5] + 8) = 0;
      *(_DWORD *)(v4[5] + 16) = 0;
      v5 = (_BYTE *)v4[2];
      if ( v5[25] != 0 )
      {
        for ( i = (__int64 *)v4[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)i[1] )
        {
          if ( v4 != (__int64 *)i[2] )
            break;
          v4 = i;
        }
        v4 = i;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        if ( *(_BYTE *)(*(_QWORD *)v5 + 25LL) == 0 )
        {
          do
            v4 = (__int64 *)*v4;
          while ( *(_BYTE *)(*v4 + 25) == 0 );
        }
      }
    }
    while ( *((_BYTE *)v4 + 25) == 0 );
  }
  v7 = (_QWORD **)lpMem[19];
  if ( v7 != nullptr )
  {
    LOBYTE(a2) = v7 != lpMem + 12;
    ((void (__fastcall *)(_QWORD **, __int64))(*v7)[4])(a1: v7, a2);
  }
  lpMem[19] = (_QWORD *)19937;
  v8 = (_QWORD **)lpMem[11];
  if ( v8 != nullptr )
  {
    LOBYTE(a2) = v8 != lpMem + 4;
    ((void (__fastcall *)(_QWORD **, __int64))(*v8)[4])(a1: v8, a2);
  }
  lpMem[11] = (_QWORD *)19937;
  sub_14005BBF0(a1: lpMem + 1);
  if ( (v2 & 1) != 0 )
    sub_1409DB4C0(lpMem);
  return lpMem;
}