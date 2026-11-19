__int64 __fastcall sub_1403D0500(__int64 a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r12
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // r9
  _QWORD v15[2]; // [rsp+20h] [rbp-69h] BYREF
  __int64 v16; // [rsp+30h] [rbp-59h]
  int v17; // [rsp+38h] [rbp-51h]
  __int16 v18; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-39h] BYREF
  __int16 v20; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v21[104]; // [rsp+78h] [rbp-11h] BYREF

  if ( a2 == 1301 )
  {
    sub_1403CDDB0(a1);
    sub_1403CDF90(a1);
    sub_1403CDBD0(a1);
    if ( *(_QWORD *)&nExitCode != 0 )
    {
      v15[1] = 0;
      v16 = 0;
      v17 = 0;
      v15[0] = &PXEngine::ByteStreamWriter::`vftable';
      v18 = word_141313D2C;
      sub_140A255B0(a1: v19, a2: v15);
      v20 = v18;
      sub_140A255B0(a1: v21, a2: v19);
      v21[32] = 1;
      sub_140A25690(a1: v19);
      sub_140A25690(a1: v15);
      sub_1407EE6B0(a1: &v20);
    }
    return sub_1400CC5C0(a1, a2, a3, a4);
  }
  if ( a2 == 160020 )
  {
    sub_1405F1D40(a1: v15, a2: a3);
    v15[0] = &PXEngine::SafeActorPtrAs<CPXCollection>::`vftable';
    LODWORD(v16) = a3[4];
    v9 = sub_1405F1EE0(a1: (__int64)v15);
    if ( v9 != 0 )
    {
      v10 = sub_1405F1EE0(a1: a1 + 216);
      sub_140366C10(a1: v9, a2: (unsigned int)v16);
      if ( v10 != 0 )
      {
        v11 = v9 + 376;
        if ( (unsigned __int8)sub_14058C730(a1: v10, a2: v9 + 376) != 0 )
        {
          *(_BYTE *)(a1 + 232) = 1;
          v12 = *(_DWORD *)(v9 + 152);
          v13 = sub_140016F80(a1: &v18, a2: v11);
          LOBYTE(v14) = 1;
          sub_14058D350(a1: v10, a2: v13, a3: v12, a4: v14);
        }
      }
    }
    return sub_1400CC5C0(a1, a2, a3, a4);
  }
  if ( a2 != 160021 )
    return sub_1400CC5C0(a1, a2, a3, a4);
  if ( a3 != nullptr )
    sub_1409DB4C0(lpMem: a3);
  return 1;
}