__int64 __fastcall sub_140380770(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rbx
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  __int64 *v18; // rax
  void *v19; // rcx
  void *v20; // rcx
  char **v22; // rcx
  __int128 v23; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v24[3]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h]
  _BYTE v27[24]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v28[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID v30; // [rsp+B8h] [rbp-48h]
  _BYTE v31[24]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v32[16]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v33[32]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v34; // [rsp+108h] [rbp+8h] BYREF
  __int64 v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  _QWORD v37[3]; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v38; // [rsp+138h] [rbp+38h]
  _QWORD v39[3]; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v40; // [rsp+158h] [rbp+58h]
  _BYTE v41[40]; // [rsp+160h] [rbp+60h] BYREF

  if ( *(_QWORD *)&nExitCode == 0 )
  {
    v22 = off_140F34FA8;
    goto LABEL_34;
  }
  v3 = *(__int64 **)(*(_QWORD *)&nExitCode + 1160LL);
  if ( v3 == nullptr )
  {
    v22 = off_140F7CDA8;
LABEL_34:
    if ( (unsigned __int8)sub_140059CA0(a1: v22) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v4 = *v3;
  v24[2] = v28;
  v28[0] = &std::_Func_impl_no_alloc<std::_Front_binder<void (CPXPlayerSetup::*)(PXEngine::StudioInitialize &,tl::expected<PXEngine::Http::Response,PXEngine::Http::Error>),CPXPlayerSetup *,std::reference_wrapper<PXEngine::StudioInitialize>>,void,tl::expected<PXEngine::Http::Response,PXEngine::Http::Error>>::`vftable';
  v28[1] = sub_14037FB10;
  v28[2] = a2;
  v28[3] = a1;
  v28[7] = v28;
  v5 = sub_140016F80(a1: v33, a2: a1 + 20);
  v6 = (_QWORD *)sub_14037EB30(a1: v41, a2: v5);
  v8 = v6;
  v9 = v6[2];
  if ( v9 != 0 )
  {
    if ( v6[3] > 0xFu )
      v6 = (_QWORD *)*v6;
    if ( *((_BYTE *)v6 + v9 - 1) != 47 )
    {
      LOBYTE(v7) = 47;
      sub_140055BC0(a1: v8, a2: v7);
    }
  }
  sub_14004E5C0(a1: v8, a2: "api-gateway/1.0/game-server/ticket", a3: 34);
  v10 = sub_140099710(a1: &v29, a2: v8);
  v23 = *(_OWORD *)sub_140099630(a1: v32);
  v11 = sub_140099AB0(a1: v10, a2: &v23);
  v35 = sub_1409CB830(a1: v13, a2: v12);
  v34 = 0xB000000000000000uLL;
  v24[0] = "SSOCLIENT/{}";
  v24[1] = 12;
  *(_QWORD *)&v23 = 1;
  *((_QWORD *)&v23 + 1) = &v34;
  sub_140058310(a1: v39, a2: v24, a3: &v23);
  v14 = v39;
  if ( v40 > 0xF )
    v14 = (_QWORD *)v39[0];
  v15 = sub_140099B50(a1: v11, a2: v14);
  v16 = a1 + 24;
  v34 = 0;
  if ( a1[27] > 0xFu )
    v16 = (_QWORD *)*v16;
  v35 = (__int64)v16;
  v36 = a1[26];
  v34 = 0xC000000000000000uLL;
  *(_QWORD *)&v23 = "Authorization: Bearer {}";
  *((_QWORD *)&v23 + 1) = 24;
  v24[0] = 1;
  v24[1] = &v34;
  sub_140058310(a1: v37, a2: &v23, a3: v24);
  v17 = v37;
  if ( v38 > 0xF )
    v17 = (_QWORD *)v37[0];
  v18 = (__int64 *)sub_140099B20(a1: v15, a2: v17);
  v25 = 0;
  v25 = *v18;
  *v18 = 0;
  v26 = 0;
  v26 = v18[1];
  v18[1] = 0;
  sub_140099250(a1: v27, a2: v18 + 2);
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD *))(v4 + 8))(a1: v3, a2: &v25, a3: v28);
  if ( v38 > 0xF )
  {
    v19 = (void *)v37[0];
    if ( v38 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v37[0] - *(_QWORD *)(v37[0] - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v19 = *(void **)(v37[0] - 8LL);
    }
    sub_1409DB4C0(lpMem: v19);
  }
  v37[0] = 19937;
  v37[2] = 0;
  v38 = 31;
  if ( v40 > 0xF )
  {
    v20 = (void *)v39[0];
    if ( v40 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v39[0] - *(_QWORD *)(v39[0] - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v20 = *(void **)(v39[0] - 8LL);
    }
    sub_1409DB4C0(lpMem: v20);
  }
  v39[0] = 19937;
  v39[2] = 0;
  v40 = 31;
  sub_140099290(a1: v31);
  if ( v30 != nullptr )
    sub_1400995D0(lpMem: v30);
  if ( v29 != 0 )
    sub_1400995C0();
  return sub_14001B5A0(a1: v41);
}