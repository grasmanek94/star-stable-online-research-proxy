__int64 sub_140205610()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  void **v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+2Ch] [rbp-1Ch]
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  v0 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v1 = sub_1405FD2E0(a1: (_QWORD *)qword_14138A6F0, a2: (__int64)v6, a3: (__int64)"PlayerLookManager");
  if ( (unsigned __int8)sub_1406006A0(a1: v0, a2: v1, a3: 291) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v3, a2: *(_DWORD *)(v1 + 12), a3: *(_DWORD *)(v1 + 8));
  }
  else
  {
    v4 = 0;
    v5 = 195948557;
  }
  v3 = &PXEngine::SafeActorPtrAs<PXEngine::PlayerLookManager>::`vftable';
  return sub_1405F1EE0(a1: (__int64)&v3);
}