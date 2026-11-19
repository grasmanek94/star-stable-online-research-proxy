char __fastcall sub_1407F7890(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rax
  char *v11; // rbx
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = *(_DWORD *)a2;
  if ( sub_1401D0820(a1, a2: &v13) != 0 )
  {
    *(_DWORD *)a2 = v13;
    if ( *(_QWORD *)(a2 + 24) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
      __debugbreak();
    v13 = *(_DWORD *)(a2 + 24);
    if ( sub_1401D0820(a1, a2: &v13) != 0 && v13 <= 0x1FA0 )
    {
      v4 = v13;
      v5 = *(_QWORD *)(a2 + 24);
      v6 = (_QWORD *)(a2 + 8);
      if ( v13 > v5 )
      {
        v8 = *(_QWORD *)(a2 + 32);
        v9 = v13 - v5;
        if ( v9 > v8 - v5 )
        {
          sub_140057960(a1: a2 + 8, a2: v13 - v5, a3: (unsigned __int8)v13, a4: v13 - v5, a5: 0);
        }
        else
        {
          v10 = (_QWORD *)(a2 + 8);
          *(_QWORD *)(a2 + 24) = v13;
          if ( v8 > 0xF )
            v10 = (_QWORD *)*v6;
          v11 = (char *)v10 + v5;
          sub_140E827B0(a1: (char *)v10 + v5, a2: 0, a3: v4 - v5);
          v11[v9] = 0;
        }
      }
      else
      {
        *(_QWORD *)(a2 + 24) = v13;
        v7 = (_QWORD *)(a2 + 8);
        if ( *(_QWORD *)(a2 + 32) > 0xFu )
          v7 = (_QWORD *)*v6;
        *((_BYTE *)v7 + v4) = 0;
      }
      if ( *(_QWORD *)(a2 + 32) > 0xFu )
        v6 = (_QWORD *)*v6;
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD *, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, a2: v6, a3: v13) != 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
        {
          v13 = 0;
          if ( sub_1401D0820(a1, a2: &v13) != 0 )
          {
            *(_DWORD *)(a2 + 40) = v13;
            return 1;
          }
        }
        else
        {
          v13 = *(_DWORD *)(a2 + 40);
          if ( sub_1401D0820(a1, a2: &v13) != 0 )
            return 1;
        }
      }
    }
  }
  return 0;
}