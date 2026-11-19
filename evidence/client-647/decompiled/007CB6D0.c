__int64 __fastcall sub_1407CB6D0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r14
  char v8; // si
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rax
  void **v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+48h] [rbp-B8h]
  int v41; // [rsp+4Ch] [rbp-B4h]
  _QWORD v42[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v43[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v44[2]; // [rsp+70h] [rbp-90h] BYREF
  int v45; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v46[64]; // [rsp+88h] [rbp-78h] BYREF
  int v47; // [rsp+C8h] [rbp-38h]
  _BYTE v48[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v49[24]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v50; // [rsp+148h] [rbp+48h]
  __int64 v51; // [rsp+150h] [rbp+50h]

  sub_1407F3370(a1: &v45);
  sub_1407F3630(a1: &v45, a2);
  v4 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
  v5 = v4;
  if ( v4 != 0 && *(_DWORD *)(v4 + 1720) == v47 )
  {
    v6 = sub_1405F1EE0(a1: (__int64)&off_141310F50);
    v7 = (_DWORD *)v6;
    if ( v6 != 0 && (unsigned __int8)sub_1406456B0(a1: v6, a2: 120) != 0 && v7[4] != v45 )
    {
      v8 = sub_14078A4B0(a1: v5);
      v9 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 176LL))(a1: v7);
      sub_1405F1D40(a1: (__int64)v44, a2: (__int64)(v7 + 8));
      v44[0] = &PXEngine::SafeActorPtrAs<CPXSpace>::`vftable';
      v10 = sub_1405F1EE0(a1: (__int64)v44);
      sub_1405F1D40(a1: (__int64)v42, a2: (__int64)&off_141313B68);
      v42[0] = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
      v12 = sub_1401DAB30(a1: 1, a2: (unsigned int)&v45, a3: (unsigned int)v42, a4: v10, a5: v9, a6: v8, a7: 0);
      if ( v12 != 0 )
      {
        v13 = *a1;
        v14 = sub_1400FBAF0(a1: v11);
        (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(v13 + 776))(a1, a2: 122134, a3: v5, a4: v14);
        v17 = (_QWORD *)sub_1400AF100(a1: v16, a2: v15);
        v18 = sub_1405FD2E0(a1: v17, a2: (__int64)v43, a3: (__int64)"EquipmentManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v17, a2: v18, a3: 342) != 0 )
        {
          sub_1405F1D60(a1: (__int64)&v39, a2: *(_DWORD *)(v18 + 12), a3: *(_DWORD *)(v18 + 8));
        }
        else
        {
          v40 = 0;
          v41 = 195948557;
        }
        v39 = &PXEngine::SafeActorPtrAs<PXEngine::EquipmentManager>::`vftable';
        v19 = sub_1405F1EE0(a1: (__int64)&v39);
        if ( v19 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F40268) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        sub_1405F1D40(a1: (__int64)v43, a2: (__int64)(v7 + 30));
        LOBYTE(v20) = 10;
        v21 = sub_1404882D0(a1: v19, a2: v43, a3: v20);
        if ( v21 != 0 && (*(_BYTE *)(v21 + 1225) & 8) != 0 )
        {
          LOBYTE(v22) = 1;
          sub_1402699C0(a1: v21, a2: 0, a3: 1, a4: v22);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 928LL))(a1: v12);
        v23 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
        if ( v23 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EF78) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 968LL))(a1: v23, a2: v12);
        v24 = *(_QWORD *)v12;
        v25 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 176LL))(a1: v7);
        (*(void (__fastcall **)(__int64, __int64))(v24 + 168))(a1: v12, a2: v25);
        sub_1400C6B30(a1: v12, a2: v7);
        v28 = sub_1400AF100(a1: v27, a2: v26);
        v29 = sub_140112C70(a1: v28, a2: v43);
        if ( sub_1405F1EE0(a1: v29) != 0 )
        {
          v31 = sub_1400AF140();
          v32 = sub_140620830(a1: v31);
          sub_1405CC350(a1: v32);
        }
        v33 = *(_QWORD *)v7;
        v34 = sub_1400FBAF0(a1: v30);
        (*(void (__fastcall **)(_DWORD *, __int64, __int64, __int64))(v33 + 776))(a1: v7, a2: 1339, a3: v12, a4: v34);
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 232LL))(a1: v7);
        v35 = *a1;
        v37 = sub_1400FBAF0(a1: v36);
        (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v35 + 776))(a1, a2: 122136, a3: 0, a4: v37);
      }
    }
  }
  else
  {
    sub_1407D9AD0(a1, a2: &v45);
  }
  v50 = 7;
  v51 = 8;
  sub_140017A10(a1: v49);
  sub_140082DD0(a1: v48);
  return sub_14001B5A0(a1: v46);
}