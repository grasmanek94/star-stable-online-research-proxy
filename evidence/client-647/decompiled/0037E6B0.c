__int64 __fastcall sub_14037E6B0(__int64 a1, __int64 a2)
{
  char **v4; // rbx
  char **i; // rbp
  unsigned __int64 v6; // rcx
  char *v7; // rax
  char *v8; // r8
  __int64 v9; // rax
  void *v10; // rcx
  char v12; // [rsp+60h] [rbp+18h] BYREF

  if ( *(_BYTE *)(a2 + 64) != 0 )
  {
    sub_14037E9E0(a1, a2: &v12, a3: a2);
  }
  else
  {
    sub_140099300(a1, a2);
    *(_BYTE *)(a1 + 64) = 0;
  }
  if ( *(_BYTE *)(a2 + 64) != 0 )
  {
    sub_140099290(a1: a2 + 32);
    v4 = *(char ***)(a2 + 8);
    if ( v4 != nullptr )
    {
      for ( i = *(char ***)(a2 + 16); v4 != i; v4 += 4 )
      {
        v6 = (unsigned __int64)v4[3];
        if ( v6 > 0xF )
        {
          v7 = *v4;
          if ( v6 + 1 < 0x1000 )
          {
            v8 = *v4;
          }
          else
          {
            v8 = *((char **)v7 - 1);
            if ( (unsigned __int64)(v7 - v8 - 8) > 0x1F )
              goto LABEL_16;
          }
          sub_1409DB4C0(lpMem: v8);
        }
        *v4 = (char *)19937;
        v4[2] = nullptr;
        v4[3] = (char *)31;
      }
      v9 = *(_QWORD *)(a2 + 8);
      if ( ((*(_QWORD *)(a2 + 24) - v9) & 0xFFFFFFFFFFFFFFE0uLL) < 0x1000 )
      {
        v10 = *(void **)(a2 + 8);
      }
      else
      {
        v10 = *(void **)(v9 - 8);
        if ( (unsigned __int64)(v9 - (_QWORD)v10 - 8) > 0x1F )
LABEL_16:
          __fastfail(5u);
      }
      sub_1409DB4C0(lpMem: v10);
    }
    *(_QWORD *)(a2 + 8) = 19937;
    *(_QWORD *)(a2 + 16) = 19937;
    *(_QWORD *)(a2 + 24) = 19937;
  }
  else
  {
    sub_140099450(a1: a2);
  }
  return a1;
}