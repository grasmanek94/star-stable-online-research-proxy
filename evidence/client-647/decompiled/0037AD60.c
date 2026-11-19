void __fastcall sub_14037AD60(__int64 a1, char a2)
{
  __int64 v3; // rax
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rax
  void **v28; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-60h]
  unsigned int v30; // [rsp+3Ch] [rbp-5Ch]
  _BYTE v31[8]; // [rsp+40h] [rbp-58h] BYREF
  int v32; // [rsp+48h] [rbp-50h]
  int v33; // [rsp+4Ch] [rbp-4Ch]
  _BYTE v34[48]; // [rsp+50h] [rbp-48h] BYREF

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    if ( a2 == 0 )
    {
LABEL_7:
      sub_14037A580(a1);
      return;
    }
    v3 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
    v4 = (__int64 *)v3;
    if ( v3 != 0 && *(_BYTE *)(v3 + 252) != 19 )
    {
      v5 = sub_1400AF100();
      v6 = sub_1405FD2E0(a1: v5, a2: v31, a3: "QuestMustBeOnHorseDialog");
      v7 = sub_1405F1EE0(a1: v6);
      if ( v7 != 0 )
        sub_1400C29E0(a1: v7);
      goto LABEL_7;
    }
    v8 = sub_1401D5630(a1: &unk_141314168, a2: v34, a3: a1 + 460);
    sub_1407EE6B0(a1: v8);
    v9 = sub_1405F1EE0(a1: a1 + 256);
    v10 = (__int64 *)v9;
    if ( v9 != 0 )
    {
      sub_1400C29E0(a1: v9);
      v11 = *v10;
      v13 = sub_1400FBAF0(a1: v12);
      (*(void (__fastcall **)(__int64 *, __int64, int *, __int64, __int64))(v11 + 24))(
        a1: v10,
        a2: 58004,
        a3: &dword_141310688,
        a4: a1,
        a5: v13);
      sub_1405F1D40(a1: &v28, a2: a1 + 120);
      sub_1400C2720(a1: v10, a2: &v28, a3: 1);
    }
    v14 = sub_1405F1EE0(a1: a1 + 272);
    v15 = (__int64 *)v14;
    if ( v14 != 0 )
    {
      *(_DWORD *)(a1 + 452) = 0;
      sub_1400C29E0(a1: v14);
      v16 = *v15;
      v18 = sub_1400FBAF0(a1: v17);
      (*(void (__fastcall **)(__int64 *, __int64, int *, __int64, __int64))(v16 + 24))(
        a1: v15,
        a2: 58004,
        a3: &dword_141310688,
        a4: a1,
        a5: v18);
      sub_1405F1D40(a1: &v28, a2: a1 + 120);
      sub_1400C2720(a1: v15, a2: &v28, a3: 1);
    }
    v20 = sub_1405F1EE0(a1: (__int64)&off_141311DE0);
    if ( v20 != 0 )
    {
      v21 = sub_1405F1EE0(a1: (__int64)&off_141311DF0);
      v22 = v21;
      if ( v21 != 0 )
      {
        sub_14017EF10(a1: v21);
        sub_14017EE60(a1: v22);
      }
      sub_1400C29E0(a1: v20);
    }
    if ( v4 != nullptr )
    {
      v23 = *v4;
      v24 = sub_1400FBAF0(a1: v19);
      (*(void (__fastcall **)(__int64 *, __int64, void *, __int64, __int64))(v23 + 24))(
        a1: v4,
        a2: 226094,
        a3: &unk_14138A64C,
        a4: a1,
        a5: v24);
      v25 = sub_1400AF100();
      v26 = sub_1405FD2E0(a1: v25, a2: v31, a3: "DismountButton");
      if ( (unsigned __int8)sub_1406006A0(a1: v25, a2: v26, a3: 40) != 0 )
      {
        sub_1405F1D60(a1: &v28, a2: *(unsigned int *)(v26 + 12), a3: *(unsigned int *)(v26 + 8));
      }
      else
      {
        v29 = 0;
        v30 = 195948557;
      }
      v28 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
      v27 = sub_1405F1EE0(a1: (__int64)&v28);
      if ( v27 != 0 )
        sub_140148000(a1: v27, a2: 0);
    }
    sub_1405F1D40(a1: &v28, a2: a1 + 120);
    sub_1405F1D60(a1: v31, a2: v30, a3: v29);
    dword_141311D88 = v32;
    dword_141311D8C = v33;
  }
}