char __fastcall sub_140481B60(_DWORD *a1, int *a2)
{
  int v2; // eax
  unsigned __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rdi
  int v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = *a2;
  v11 = a1;
  v9 = v2;
  if ( sub_1401D0820(a1, a2: &v9) != 0 )
  {
    *a2 = v9;
    if ( sub_1402B4D00(a1, a2: (__int64 *)a2 + 1) != 0 )
    {
      if ( (unsigned __int64)((*((_QWORD *)a2 + 6) - *((_QWORD *)a2 + 5)) / 28LL) >= 0xFFFFFFFF
        && (unsigned __int8)sub_140059CA0(a1: off_140FA4DD0) != 0 )
      {
        __debugbreak();
      }
      v10 = (*((_QWORD *)a2 + 6) - *((_QWORD *)a2 + 5)) / 28LL;
      if ( sub_1401D0820(a1, a2: &v10) != 0 && v10 <= 0x3E80 )
      {
        v5 = v10;
        sub_140482C30(a1: a2 + 10, a2: v10, a3: &v9);
        v6 = *((_QWORD *)a2 + 5);
        v7 = 0;
        if ( v10 != 0 )
        {
          while ( sub_1402EA470(a1, a2: (int *)(v6 + 28 * v7)) )
          {
            if ( ++v7 >= v5 )
              goto LABEL_11;
          }
        }
        else
        {
LABEL_11:
          if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a1 + 16LL))(
                 a1,
                 a2: a2 + 16,
                 a3: 8) != 0
            && sub_1402B7CD0(a1: &v11, a2: a2 + 18) != 0
            && sub_1402B7CD0(a1: &v11, a2: a2 + 19) != 0 )
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}