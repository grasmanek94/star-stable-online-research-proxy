__int64 __fastcall sub_1402B67E0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // si
  __int64 v4; // rdx
  LPVOID v5; // rcx
  LPVOID v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // r8
  _BYTE *v12; // rcx
  LPVOID lpMem[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  _QWORD v16[8]; // [rsp+38h] [rbp-40h] BYREF

  *(_OWORD *)lpMem = 0;
  v15 = 0;
  if ( (unsigned __int8)sub_1402B4880(a1: a2, a2: lpMem) != 0 )
  {
    v4 = v15;
    v15 = 0;
    v5 = lpMem[1];
    lpMem[1] = nullptr;
    v6 = lpMem[0];
    lpMem[0] = nullptr;
    v16[0] = v6;
    v16[1] = v5;
    v16[2] = v4;
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 8))(a1: a1 + 16, a2: v16);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  v7 = lpMem[0];
  if ( lpMem[0] != nullptr )
  {
    v8 = lpMem[1];
    if ( lpMem[0] != lpMem[1] )
    {
      do
      {
        v9 = v7[6];
        if ( v9 > 0xF )
        {
          v10 = v7[3];
          if ( v9 + 1 < 0x1000 )
          {
            v11 = (void *)v7[3];
          }
          else
          {
            v11 = *(void **)(v10 - 8);
            if ( (unsigned __int64)(v10 - (_QWORD)v11 - 8) > 0x1F )
              goto LABEL_16;
          }
          sub_1409DB4C0(lpMem: v11);
        }
        *((_BYTE *)v7 + 24) = 0;
        v7[3] = 19937;
        v7[5] = 0;
        v7[6] = 31;
        v7 += 7;
      }
      while ( v7 != v8 );
      v7 = lpMem[0];
    }
    if ( (unsigned __int64)(56 * ((v15 - (__int64)v7) / 56)) < 0x1000 )
    {
      v12 = v7;
    }
    else
    {
      v12 = (_BYTE *)*(v7 - 1);
      if ( (unsigned __int64)((char *)v7 - v12 - 8) > 0x1F )
LABEL_16:
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v12);
  }
  return v3;
}