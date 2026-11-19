__int64 __fastcall sub_1403B7770(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  char **v18; // rcx
  void **v19; // [rsp+50h] [rbp-29h] BYREF
  int v20; // [rsp+58h] [rbp-21h]
  int v21; // [rsp+5Ch] [rbp-1Dh]
  void **v22; // [rsp+60h] [rbp-19h] BYREF
  int v23; // [rsp+68h] [rbp-11h]
  int v24; // [rsp+6Ch] [rbp-Dh]
  void **v25; // [rsp+70h] [rbp-9h] BYREF
  int v26; // [rsp+78h] [rbp-1h]
  int v27; // [rsp+7Ch] [rbp+3h]
  _BYTE v28[16]; // [rsp+80h] [rbp+7h] BYREF
  _BYTE v29[16]; // [rsp+90h] [rbp+17h] BYREF
  char v30[48]; // [rsp+A0h] [rbp+27h] BYREF

  if ( *(_QWORD *)&nExitCode == 0 )
    return 0;
  v9 = (__int64 *)qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v23 = 0;
  v22 = &PXEngine::SafeActorPtr::`vftable';
  v24 = 195948557;
  sub_1405F1D40(a1: (__int64)v28, a2: *(_QWORD *)&nExitCode + 120LL);
  v25 = &PXEngine::SafeActorPtr::`vftable';
  v26 = 0;
  v27 = 195948557;
  v10 = sub_1405FD6C0(
          a1: v9,
          a2: (__int64)v30,
          a3: (__int64)v28,
          a4: "global/NetworkObjects/MovingPets/PetSlave",
          a5: (__int64)&v25,
          a6: (__int64)&v22,
          a7: nullptr,
          a8: 0,
          a9: 0);
  if ( (unsigned __int8)sub_1406006A0(a1: v9, a2: v10, a3: 230) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v19, a2: *(_DWORD *)(v10 + 12), a3: *(_DWORD *)(v10 + 8));
  }
  else
  {
    v20 = 0;
    v21 = 195948557;
  }
  v19 = &PXEngine::SafeActorPtrAs<CPXPet>::`vftable';
  v11 = sub_1405F1EE0(a1: (__int64)&v19);
  if ( v11 == 0 || a2 == 0 )
  {
    v18 = off_140F85B48;
LABEL_21:
    if ( (unsigned __int8)sub_140059CA0(a1: v18) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v12 = sub_14005D330();
  v13 = sub_1400AC1A0(a1: v11, a2, a3: 0, a4: 0, a5: 0, a6: -1, a7: 0);
  v14 = v13;
  if ( v13 == 0 || (unsigned __int8)sub_140645790(a1: v13, a2: 230, a3: v12) == 0 )
  {
    v18 = off_140F85B88;
    goto LABEL_21;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 168LL))(a1: v14, a2: a3);
  if ( a1 != 0
    && (v15 = qword_14138A6F0,
        sub_1405F1D40(a1: (__int64)&v25, a2: a1 + 120),
        (unsigned __int8)sub_1406006A0(a1: v15, a2: &v25, a3: 226) != 0) )
  {
    sub_1405F1D60(a1: (__int64)&v19, a2: v27, a3: v26);
  }
  else
  {
    v20 = 0;
    v21 = 195948557;
  }
  v19 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
  sub_1405F1D80(a1: v14 + 584, a2: &v19);
  if ( qword_14138AA70 == 0 )
  {
    v18 = off_140F38D30;
    goto LABEL_21;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 104LL))(a1: v14);
  if ( qword_14138A6F0 == 0 )
  {
    v18 = off_140F35058;
    goto LABEL_21;
  }
  sub_1403C9C40(a1: v29);
  if ( (unsigned __int8)sub_1405F1E20(a1: v29) == 0 )
    return 0;
  sub_1403BCC50(a1: v14, a2: a4);
  v17 = sub_1400FBAF0(a1: v16);
  sub_1400B0190(a1: v14, a2: v17);
  return v14;
}