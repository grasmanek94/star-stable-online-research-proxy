__int64 __fastcall sub_1407F3EC0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v6; // r15
  __int64 *v7; // r9
  __int64 *v8; // rax
  __int64 *v9; // r8
  __int64 result; // rax
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  int v17; // [rsp+28h] [rbp-50h]
  int v18; // [rsp+2Ch] [rbp-4Ch]

  v6 = (__int64 *)(a1 + 8);
  v7 = *(__int64 **)(a1 + 8);
  v8 = (__int64 *)v7[1];
  v9 = v7;
  while ( *((_BYTE *)v8 + 25) == 0 )
  {
    if ( *((_DWORD *)v8 + 8) >= a3 )
    {
      v9 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( *((_BYTE *)v9 + 25) != 0 || a3 < *((_DWORD *)v9 + 8) || v9 == v7 )
  {
    *(_DWORD *)(a2 + 16) = a3;
    *(_QWORD *)(a2 + 8) = a1;
    v11 = *v6;
    result = *(_QWORD *)(*v6 + 8);
    v12 = *v6;
    if ( *(_BYTE *)(result + 25) != 0 )
    {
      v14 = 0;
      v13 = *(_QWORD *)(*v6 + 8);
    }
    else
    {
      do
      {
        v13 = result;
        if ( *(_DWORD *)(result + 32) >= a3 )
        {
          v14 = 1;
          v12 = result;
          result = *(_QWORD *)result;
        }
        else
        {
          v14 = 0;
          result = *(_QWORD *)(result + 16);
        }
      }
      while ( *(_BYTE *)(result + 25) == 0 );
    }
    if ( *(_BYTE *)(v12 + 25) != 0 || a3 < *(_DWORD *)(v12 + 32) )
    {
      if ( *(_QWORD *)(a1 + 16) == 0x555555555555555LL )
        sub_14005A5D0(a1: v12, a2: a1, a3: v9, a4: v7);
      v18 = 0;
      v15 = sub_1409DB470(a1: 48);
      *(_DWORD *)(v15 + 32) = a3;
      *(_QWORD *)(v15 + 40) = 0;
      *(_QWORD *)v15 = v11;
      *(_QWORD *)(v15 + 8) = v11;
      *(_QWORD *)(v15 + 16) = v11;
      *(_WORD *)(v15 + 24) = 0;
      v16 = v13;
      v17 = v14;
      result = sub_14005A200(a1: v6, a2: &v16, a3: v15);
      v12 = result;
    }
    *(_QWORD *)(v12 + 40) = a2;
  }
  else
  {
    result = sub_140059D90(a1: off_141019508, a2: "Id already registered!");
    if ( (_BYTE)result != 0 )
      __debugbreak();
  }
  return result;
}