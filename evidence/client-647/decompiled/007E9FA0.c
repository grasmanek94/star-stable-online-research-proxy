char __fastcall sub_1407E9FA0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // rax
  char **v40; // rcx
  __int64 v41; // [rsp+38h] [rbp-59h]
  void **v42; // [rsp+50h] [rbp-41h] BYREF
  int v43; // [rsp+58h] [rbp-39h]
  int v44; // [rsp+5Ch] [rbp-35h]
  void **v45; // [rsp+60h] [rbp-31h] BYREF
  int v46; // [rsp+68h] [rbp-29h]
  int v47; // [rsp+6Ch] [rbp-25h]
  int v48; // [rsp+70h] [rbp-21h] BYREF
  char v49; // [rsp+74h] [rbp-1Dh]
  void **v50; // [rsp+78h] [rbp-19h] BYREF
  int v51; // [rsp+80h] [rbp-11h]
  int v52; // [rsp+84h] [rbp-Dh]
  _BYTE v53[16]; // [rsp+88h] [rbp-9h] BYREF
  _BYTE v54[72]; // [rsp+98h] [rbp+7h] BYREF
  int v55; // [rsp+F8h] [rbp+67h] BYREF

  if ( a2 == 42026 )
  {
    v6 = sub_1405F1EE0(a1: a1 + 120);
    v7 = a5;
    if ( a5 == v6 )
    {
      v8 = sub_1405F1EE0(a1: a1 + 152);
      if ( v8 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F5D7E8) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 1104LL))(a1: v8, a2: &qword_140EFD640, a3: 0);
      return 1;
    }
    if ( v7 == sub_1405F1EE0(a1: a1 + 200) )
    {
      v9 = qword_14138A6F0;
      if ( qword_14138A6F0 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v10 = sub_1405FD2E0(a1: qword_14138A6F0, a2: &v50, a3: "PlayerMoney");
      if ( (unsigned __int8)sub_1406006A0(a1: v9, a2: v10, a3: 91) != 0 )
      {
        sub_1405F1D60(a1: &v42, a2: *(unsigned int *)(v10 + 12), a3: *(unsigned int *)(v10 + 8));
      }
      else
      {
        v43 = 0;
        v44 = 195948557;
      }
      v42 = &PXEngine::SafeActorPtrAs<CPXData>::`vftable';
      v11 = (_QWORD *)sub_1405F1EE0(a1: (__int64)&v42);
      v13 = v11;
      if ( v11 == nullptr )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_1410184E0) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v55 = 0;
      v14 = *v11;
      v15 = sub_1400FBAF0(a1: v12);
      (*(void (__fastcall **)(_QWORD *, __int64, int *, _QWORD, __int64))(v14 + 24))(
        a1: v13,
        a2: 91020,
        a3: &v55,
        a4: 0,
        a5: v15);
      v16 = *(_QWORD *)(a1 + 360);
      v17 = *(unsigned int *)(a1 + 432);
      if ( v17 >= (*(_QWORD *)(a1 + 368) - v16) >> 3 )
        __fastfail(5u);
      v18 = *(_QWORD *)(v16 + 8 * v17);
      if ( v55 + *(_DWORD *)(v18 + 176) <= 10000 )
      {
        *(_BYTE *)(v18 + 189) = 1;
        v30 = sub_140453410(a1: a1 + 232);
        LOBYTE(v31) = 1;
        sub_140148000(a1: v30, a2: v31);
        v32 = sub_1405F1EE0(a1: a1 + 200);
        v33 = sub_1405F1EE0(a1: a1 + 168);
        v34 = sub_1405F1EE0(a1: a1 + 184);
        v35 = v34;
        if ( v32 != 0 && v33 != 0 && v34 != 0 )
        {
          sub_140148000(a1: v32, a2: 0);
          sub_140147900(a1: v32);
          sub_140147900(a1: v33);
          sub_1401487D0(a1: v35);
        }
        v36 = *(_QWORD *)(a1 + 360);
        v37 = *(unsigned int *)(a1 + 432);
        if ( (*(_QWORD *)(a1 + 368) - v36) >> 3 <= v37 )
          sub_1402964A0();
        v48 = *(_DWORD *)(*(_QWORD *)(v36 + 8 * v37) + 160LL);
        v49 = *(_BYTE *)(*(_QWORD *)(v36 + 8 * v37) + 164LL);
        v38 = sub_140298110(a1: a1 + 344);
        v39 = sub_1407E9A90(a1: &unk_141313CA4, a2: v54, a3: &v48);
        sub_1407D6C20(a1: v38, a2: v39);
        return 1;
      }
      if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 344) != 0 )
      {
        v21 = sub_1400AF100(a1: v20, a2: v19);
        v45 = &PXEngine::SafeActorPtr::`vftable';
        v50 = &PXEngine::SafeActorPtr::`vftable';
        v46 = 0;
        v47 = 195948557;
        v51 = 0;
        v52 = 195948557;
        v22 = sub_1405FD6C0(
                a1: v21,
                a2: (unsigned int)v53,
                a3: (int)a1 + 344,
                a4: (unsigned int)"global/GenericRequestWindow",
                a5: (__int64)&v50,
                a6: (__int64)&v45,
                a7: 0,
                a8: 0,
                a9: 0);
        if ( (unsigned __int8)sub_1406006A0(a1: v21, a2: v22, a3: 40) != 0 )
        {
          sub_1405F1D60(a1: &v42, a2: *(unsigned int *)(v22 + 12), a3: *(unsigned int *)(v22 + 8));
        }
        else
        {
          v43 = 0;
          v44 = 195948557;
        }
        v42 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
        if ( sub_1405F1EE0(a1: (__int64)&v42) == 0 )
          return 1;
        v25 = sub_1400AF100(a1: v24, a2: v23);
        LOBYTE(v41) = 1;
        v26 = sub_1405FADF0(
                a1: v25,
                a2: (unsigned int)v53,
                a3: (unsigned int)&v42,
                a4: (unsigned int)"Message",
                a5: -1,
                a6: -1,
                a7: -1,
                v41);
        if ( (unsigned __int8)sub_1405F1F70(a1: v26, a2: 40) != 0 )
        {
          sub_1405F1D60(a1: &v45, a2: *(unsigned int *)(v26 + 12), a3: *(unsigned int *)(v26 + 8));
        }
        else
        {
          v46 = 0;
          v47 = 195948557;
        }
        v45 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
        v27 = sub_1405F1EE0(a1: (__int64)&v45);
        if ( v27 == 0 )
          return 1;
        sub_1401486E0(a1: v27, a2: "MAX_MONEY_CAP", a3: 1);
        v28 = sub_1405F1EE0(a1: (__int64)&v42);
        if ( v28 != 0 )
        {
          sub_1400C29E0(a1: v28);
          return 1;
        }
        v40 = off_140F40348;
      }
      else
      {
        v40 = off_141018538;
      }
      if ( (unsigned __int8)sub_140059CA0(a1: v40) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      JUMPOUT(0x1407EA42ELL);
    }
  }
  return 0;
}