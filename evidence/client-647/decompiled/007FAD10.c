__int64 __fastcall sub_1407FAD10(__int64 a1, int a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int16 v6; // si
  unsigned int v7; // edx
  __int64 *v8; // r8
  __int64 *v9; // rax
  __int64 *i; // rcx
  __int64 v11; // rax
  int v12; // r14d
  _QWORD v14[3]; // [rsp+30h] [rbp-59h] BYREF
  int v15; // [rsp+48h] [rbp-41h]
  __int16 v16; // [rsp+50h] [rbp-39h]
  _BYTE v17[32]; // [rsp+58h] [rbp-31h] BYREF
  __int16 v18; // [rsp+78h] [rbp-11h] BYREF
  char v19[32]; // [rsp+80h] [rbp-9h] BYREF
  char v20; // [rsp+A0h] [rbp+17h]
  int v21; // [rsp+F0h] [rbp+67h] BYREF
  int v22; // [rsp+100h] [rbp+77h] BYREF

  v4 = *(_QWORD **)(a1 + 248);
  v5 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    v6 = word_14131412C;
    do
    {
      if ( v5[3] != v5[4] )
      {
        v7 = *((_DWORD *)v5 + 4);
        v8 = *(__int64 **)(a1 + 8);
        v9 = (__int64 *)v8[1];
        for ( i = v8; *((_BYTE *)v9 + 25) == 0; v9 = (__int64 *)*v9 )
        {
          if ( *((_DWORD *)v9 + 8) >= v7 )
            i = v9;
          else
            v9 += 2;
        }
        if ( *((_BYTE *)i + 25) != 0
          || v7 < *((_DWORD *)i + 8)
          || i == v8
          || (v11 = sub_1409DEA50(
                      a1: i[5],
                      a2: 0,
                      a3: (unsigned int)&PXEngine::NetManagerObject `RTTI Type Descriptor',
                      a4: (unsigned int)&PXEngine::NetActivity `RTTI Type Descriptor',
                      a5: 0)) == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_14101A1B8) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        if ( *(_BYTE *)(v11 + 124) != 0 )
        {
          v12 = *(_DWORD *)(v11 + 104);
          v14[1] = 0;
          v14[2] = 0;
          v15 = 0;
          v14[0] = &PXEngine::ByteStreamWriter::`vftable';
          v21 = a2;
          if ( sub_1401D0820(a1: v14, a2: &v21) != 0
            && (a2 = v21, v22 = v12, sub_1401D0820(a1: v14, a2: &v22) != 0)
            && (unsigned __int8)sub_1407F94C0(a1: v14, a2: v5 + 3) != 0 )
          {
            v16 = v6;
            sub_140A255B0(a1: v17, a2: v14);
            v18 = v16;
            sub_140A255B0(a1: v19, a2: v17);
            v20 = 1;
            sub_140A25690(a1: v17);
          }
          else
          {
            v20 = 0;
          }
          sub_140A25690(a1: v14);
          sub_1407F4180(a1, a2: &v18);
        }
      }
      v5 = (_QWORD *)*v5;
    }
    while ( v5 != v4 );
  }
  return sub_1407FC430(a1: a1 + 240);
}