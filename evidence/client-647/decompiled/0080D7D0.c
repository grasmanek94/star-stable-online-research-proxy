char __fastcall sub_14080D7D0(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  char v5; // al
  char v6; // bl
  __int64 v8; // r14
  int v9; // ebx
  int v10; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+38h] [rbp-38h] BYREF
  char v12; // [rsp+3Ch] [rbp-34h]
  _BYTE v13[32]; // [rsp+40h] [rbp-30h] BYREF
  char v14; // [rsp+60h] [rbp-10h]
  unsigned int v15; // [rsp+A0h] [rbp+30h] BYREF
  __int16 v16; // [rsp+A5h] [rbp+35h]
  char v17; // [rsp+A7h] [rbp+37h]
  unsigned int v18; // [rsp+B0h] [rbp+40h] BYREF
  int v19; // [rsp+B8h] [rbp+48h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v15 = 0;
    if ( sub_140A4BF00(a1, a2: (__int64)&v15, a3: 4u) != 0 )
    {
      v4 = *(_DWORD *)(a1 + 20);
      if ( *(_DWORD *)(a1 + 16) - v4 >= v15 )
      {
        sub_14080E3B0(output: (__int64)v13, source: *(_QWORD *)(a1 + 8) + v4, source_size: v15);
        sub_140A4BF60(a1, a2: v15);
        v5 = v14;
        if ( v14 != 0 )
        {
          sub_140A256B0(a1: a2, a2: v13);
          *(_DWORD *)(a2 + 32) = v15;
          *(_BYTE *)(a2 + 36) = 1;
          *(_WORD *)(a2 + 37) = v16;
          *(_BYTE *)(a2 + 39) = v17;
          v6 = 1;
          v5 = v14;
        }
        else
        {
          v6 = 0;
        }
        if ( v5 != 0 )
          sub_140A25690(a1: (__int64)v13);
        return v6;
      }
    }
    return 0;
  }
  v8 = *(unsigned int *)(a1 + 20);
  v10 = 0;
  sub_140A25890(a1, a2: (__int64)&v10, a3: 4u);
  v18 = *(_DWORD *)(a2 + 20);
  sub_140A25890(a1, a2: (__int64)&v18, a3: 4u);
  v9 = sub_140A4C620(a1: v18);
  sub_140A257D0(a1, a2: v9);
  sub_140A4C590(
    a1: (__int64)&v11,
    a2: *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 20),
    a3: v9,
    a4: *(_QWORD *)(a2 + 8),
    a5: v18);
  if ( v12 == 0 )
  {
    sub_140A25850(a1, a2: v8);
    return 0;
  }
  sub_140A25780(a1, a2: v11);
  if ( v12 == 0 )
    __fastfail(5u);
  v19 = v11 + 4;
  sub_140083990(a1: *(_QWORD *)(a1 + 8) + v8, a2: &v19, a3: 4);
  *(_DWORD *)(a1 + 24) += *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 32) = v19;
  *(_BYTE *)(a2 + 36) = 1;
  *(_WORD *)(a2 + 37) = v16;
  *(_BYTE *)(a2 + 39) = v17;
  return 1;
}