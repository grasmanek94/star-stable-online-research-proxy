_QWORD *__fastcall sub_1401E09C0(float *a1, char a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // r13
  unsigned __int8 v19; // bl
  __int64 v20; // rbx
  char v21; // al
  char v22; // cl
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  void **v30; // [rsp+20h] [rbp-88h] BYREF
  int v31; // [rsp+28h] [rbp-80h]
  int v32; // [rsp+2Ch] [rbp-7Ch]
  _BYTE v33[16]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v34; // [rsp+40h] [rbp-68h] BYREF
  __int64 v35; // [rsp+48h] [rbp-60h]

  v4 = a1 + 56;
  if ( a1 == nullptr )
    v4 = nullptr;
  v5 = (__int64)(a1 + 84);
  if ( a1 == nullptr )
    v5 = 112;
  *(_DWORD *)v5 = (int)a1[429];
  v6 = (__int64)(a1 + 85);
  if ( a1 == nullptr )
    v6 = 116;
  *(_DWORD *)v6 = (int)a1[437];
  v7 = (__int64)(a1 + 86);
  if ( a1 == nullptr )
    v7 = 120;
  *(_DWORD *)v7 = (int)a1[445];
  v8 = (__int64)(a1 + 87);
  if ( a1 == nullptr )
    v8 = 124;
  *(_DWORD *)v8 = (int)a1[461];
  v9 = (__int64)(a1 + 88);
  if ( a1 == nullptr )
    v9 = 128;
  *(_DWORD *)v9 = (int)a1[453];
  v10 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v11 = sub_1405FD2E0(a1: (_QWORD *)qword_14138A6F0, a2: (__int64)v33, a3: (__int64)"EquipmentManager");
  if ( (unsigned __int8)sub_1406006A0(a1: v10, a2: v11, a3: 342) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v30, a2: *(_DWORD *)(v11 + 12), a3: *(_DWORD *)(v11 + 8));
  }
  else
  {
    v31 = 0;
    v32 = 195948557;
  }
  v30 = &PXEngine::SafeActorPtrAs<PXEngine::EquipmentManager>::`vftable';
  v12 = sub_1405F1EE0(a1: (__int64)&v30);
  v14 = v12;
  if ( v12 != 0 )
  {
    LOBYTE(v13) = 2;
    sub_140488180(a1: v12, a2: &v34, a3: v13);
    v15 = v34;
    v16 = v35;
    if ( v34 != v35 )
    {
      v17 = (__int64)(a1 + 30);
      v18 = (__int64)(a1 + 67);
      if ( a1 == nullptr )
        v18 = 44;
      while ( 1 )
      {
        v19 = *(_BYTE *)(v15 + 8);
        sub_1405F1D40(a1: (__int64)v33, a2: v17);
        v20 = sub_1404882D0(a1: v14, a2: (__int64)v33, a3: v19);
        v21 = *(_BYTE *)v18;
        v22 = *(_BYTE *)(v15 + 8);
        if ( v22 == 12 )
          break;
        if ( v22 == 11 )
        {
          if ( a2 != 0 || (v25 = (__int64)(a1 + 808), v21 != 1) )
            v25 = (__int64)(a1 + 800);
          goto LABEL_30;
        }
LABEL_31:
        v26 = *(unsigned __int8 *)(v15 + 8);
        if ( v20 != 0 )
        {
          sub_1407F3520(a1: v4, a2: v26, a3: *(unsigned int *)(v20 + 16));
          v27 = *(unsigned __int8 *)(v15 + 8);
          if ( (unsigned __int8)v27 >= 0xDu )
            goto LABEL_39;
          *((_BYTE *)v4 + v27 + 132) = (*(_BYTE *)(v20 + 1225) & 0x18) == 24;
        }
        else
        {
          sub_1407F3A00(a1: v4, a2: v26);
          v28 = *(unsigned __int8 *)(v15 + 8);
          if ( (unsigned __int8)v28 >= 0xDu )
LABEL_39:
            __fastfail(5u);
          *((_BYTE *)v4 + v28 + 132) = 0;
        }
        v15 += 72;
        v17 = (__int64)(a1 + 30);
        if ( v15 == v16 )
          goto LABEL_37;
      }
      if ( a2 != 0 || (v23 = v21 == 1, v24 = 804, !v23) )
        v24 = 796;
      v25 = (__int64)&a1[v24];
LABEL_30:
      v20 = sub_1405F1EE0(a1: v25);
      goto LABEL_31;
    }
LABEL_37:
    sub_1401D4910(a1: &v34);
  }
  return v4;
}