__int64 __fastcall sub_1407CB1D0(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v7; // ebp
  unsigned int v8; // r8d
  unsigned int v9; // edx
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r10
  __int64 v13; // rcx
  _QWORD *v14; // r8
  void **v16; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+3Ch] [rbp-2Ch]
  _BYTE v19[40]; // [rsp+40h] [rbp-28h] BYREF
  char v20; // [rsp+70h] [rbp+8h] BYREF

  v7 = sub_14008A0B0() - a3;
  *(_DWORD *)(a1 + 632) = v7;
  v8 = v7;
  v9 = v7;
  if ( *(_DWORD *)(a1 + 636) < v7 )
    v8 = *(_DWORD *)(a1 + 636);
  *(_DWORD *)(a1 + 636) = v8;
  if ( *(_DWORD *)(a1 + 640) > v7 )
    v9 = *(_DWORD *)(a1 + 640);
  *(_DWORD *)(a1 + 640) = v9;
  v10 = (_QWORD *)sub_140619130(a1: a2);
  v11 = sub_1405FD2E0(a1: v10, a2: (__int64)v19, a3: (__int64)"MetricsManager");
  if ( (unsigned __int8)sub_1406006A0(a1: v10, a2: v11, a3: 238) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v16, a2: *(_DWORD *)(v11 + 12), a3: *(_DWORD *)(v11 + 8));
  }
  else
  {
    v17 = 0;
    v18 = 195948557;
  }
  v16 = &PXEngine::SafeActorPtrAs<CPXMetricsManager>::`vftable';
  v12 = sub_1405F1EE0(a1: (__int64)&v16);
  if ( v12 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_141015C78) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v13 = *(_QWORD *)(*(_QWORD *)&nExitCode + 688LL);
  v14 = (_QWORD *)(v13 + 240);
  if ( *(_QWORD *)(v13 + 264) > 0xFu )
    v14 = (_QWORD *)*v14;
  sub_14060F030(a1: v12, a2: "ClientServerLatency", a3: v14, a4: "old_server", a5: v7);
  *(_DWORD *)(a1 + 572) = a4;
  *(_QWORD *)(a1 + 592) = *(_QWORD *)sub_14009B080(a1: &v20);
  return sub_1407DA070(a1);
}