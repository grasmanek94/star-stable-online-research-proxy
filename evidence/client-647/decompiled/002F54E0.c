void __fastcall sub_1402F54E0(__int64 *a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rax
  _DWORD *v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rax
  _DWORD *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // rax
  int v26; // eax
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh]
  char v29[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+5Ch] [rbp-A4h]
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD v33[3]; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+88h] [rbp-78h]
  void **v35; // [rsp+90h] [rbp-70h] BYREF
  int v36; // [rsp+98h] [rbp-68h]
  int v37; // [rsp+9Ch] [rbp-64h]
  void **v38; // [rsp+A0h] [rbp-60h] BYREF
  int v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+ACh] [rbp-54h]
  void **v41; // [rsp+B0h] [rbp-50h] BYREF
  int v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+BCh] [rbp-44h]
  __int16 v44; // [rsp+C0h] [rbp-40h]
  _BYTE v45[32]; // [rsp+C8h] [rbp-38h] BYREF
  __int16 v46; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v47[32]; // [rsp+F0h] [rbp-10h] BYREF
  char v48; // [rsp+110h] [rbp+10h]
  int v49; // [rsp+170h] [rbp+70h] BYREF
  _QWORD *v50; // [rsp+178h] [rbp+78h] BYREF

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v4 = sub_1401E0840();
    v6 = v4;
    if ( v4 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F6C660) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    LOBYTE(v5) = 15;
    if ( (unsigned __int8)sub_14025F400(a1: v4, a2: v5) != 0 )
    {
      v8 = sub_140205610();
      if ( v8 != 0 )
      {
        v9 = sub_1402F0010(a1, a2: v6);
        sub_140204FA0(a1: v8, a2: v9);
      }
    }
    else
    {
      LOBYTE(v7) = 16;
      if ( (unsigned __int8)sub_14025F400(a1: v6, a2: v7) == 0 )
        return;
      v10 = qword_14138A6F0;
      if ( qword_14138A6F0 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        JUMPOUT(0x1402F58E3LL);
      }
      v38 = &PXEngine::SafeActorPtr::`vftable';
      v39 = 0;
      v40 = 195948557;
      sub_1405F1D40(a1: v33, a2: a1 + 15);
      v41 = &PXEngine::SafeActorPtr::`vftable';
      v42 = 0;
      v43 = 195948557;
      v11 = sub_1405FD6C0(
              a1: v10,
              a2: (unsigned int)&v27,
              a3: (unsigned int)v33,
              a4: (unsigned int)"global/Player/Items/Hair",
              a5: (__int64)&v41,
              a6: (__int64)&v38,
              a7: 0,
              a8: 0,
              a9: 0);
      if ( (unsigned __int8)sub_1406006A0(a1: v10, a2: v11, a3: 1) != 0 )
      {
        sub_1405F1D60(a1: &v35, a2: *(unsigned int *)(v11 + 12), a3: *(unsigned int *)(v11 + 8));
      }
      else
      {
        v36 = 0;
        v37 = 195948557;
      }
      v35 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
      v13 = sub_1405F1EE0(a1: (__int64)&v35);
      if ( v13 != 0 )
      {
        v14 = sub_14005D330();
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 256LL))(a1: v13, a2: 0);
        v16 = (_DWORD *)v15;
        if ( v15 != 0 && (unsigned __int8)sub_140645790(a1: v15, a2: 101, a3: v14) != 0 )
        {
          if ( v16[4] == a2 )
            return;
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 872LL))(a1: v16);
        }
        sub_1406453B0(a1: v13);
        v17 = sub_14005D330();
        v18 = sub_1400AC1A0(a1: v6, a2: v13, a3: 0, a4: 0, a5: 0, a6: -1, a7: 0);
        v19 = (_DWORD *)v18;
        if ( v18 == 0 || (unsigned __int8)sub_140645790(a1: v18, a2: 101, a3: v17) == 0 )
        {
          v26 = sub_1400ADE90(a1: v6);
          if ( (unsigned __int8)sub_140059D90(a1: off_140F6C6D0, a2: "New style item copied from %u is nullptr", v26) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v21 = *(_QWORD *)v19;
        v22 = sub_1400FBAF0(a1: v20);
        (*(void (__fastcall **)(_DWORD *, __int64))(v21 + 104))(a1: v19, a2: v22);
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 864LL))(a1: v19);
        v23 = v19[4];
        v28 = 0;
        v30 = 0;
        v32 = 0;
        v27 = v23;
        v31 = 6;
        v29[0] = 1;
        v33[1] = 0;
        v33[2] = 0;
        v34 = 0;
        v33[0] = &PXEngine::ByteStreamWriter::`vftable';
        v50 = v33;
        v49 = v23;
        if ( sub_1401D0820(a1: v33, a2: &v49) != 0
          && (v27 = v49, v49 = v28, sub_1401D0820(a1: v33, a2: &v49) != 0)
          && (v28 = v49, (unsigned __int8)sub_1402B8840(a1: v33, a2: v29) != 0)
          && (v49 = v30, sub_1401D0820(a1: v33, a2: &v49) != 0)
          && (v30 = v49, (unsigned __int8)sub_1402B7CD0(a1: &v50, a2: &v31) != 0)
          && (unsigned __int8)sub_1402B7CD0(a1: &v50, a2: &v32) != 0
          && (unsigned __int8)sub_1402B7CD0(a1: &v50, a2: (char *)&v32 + 4) != 0 )
        {
          v44 = word_141313DA0;
          sub_140A255B0(a1: v45, a2: v33);
          v46 = v44;
          sub_140A255B0(a1: v47, a2: v45);
          v48 = 1;
          sub_140A25690(a1: v45);
        }
        else
        {
          v48 = 0;
        }
        sub_140A25690(a1: v33);
        sub_1407EE6B0(a1: &v46);
      }
      v24 = *a1;
      v25 = sub_1400FBAF0(a1: v12);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v24 + 776))(a1, a2: 163033, a3: 0, a4: v25);
    }
  }
}