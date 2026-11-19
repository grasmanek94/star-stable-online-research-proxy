__int64 __fastcall sub_140203D80(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rdx
  _QWORD v7[7]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+58h] [rbp-A8h]
  _QWORD v9[7]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v10; // [rsp+98h] [rbp-68h]
  _BYTE v11[64]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v12[96]; // [rsp+E0h] [rbp-20h] BYREF

  sub_1401FF770(a1, a2: "PlayerLookManager");
  *(_QWORD *)a1 = &PXEngine::PlayerLookManager::`vftable';
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = -1;
  *(_QWORD *)(a1 + 392) = -1;
  *(_QWORD *)(a1 + 400) = -1;
  *(_DWORD *)(a1 + 408) = -1;
  *(_WORD *)(a1 + 412) = 0;
  *(_BYTE *)(a1 + 414) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  *(_BYTE *)(a1 + 544) = 0;
  v9[0] = &std::_Func_impl_no_alloc<void (*)(enum PX_NETWORK_MESSAGES,PXEngine::ByteStreamWriter &),void,enum PX_NETWORK_MESSAGES,PXEngine::ByteStreamWriter &>::`vftable';
  v9[1] = sub_140209B20;
  v10 = v9;
  v7[0] = &std::_Func_impl_no_alloc<bool (*)(enum PX_NETWORK_MESSAGES,PXEngine::ByteStreamWriter &),void,enum PX_NETWORK_MESSAGES,PXEngine::ByteStreamWriter &>::`vftable';
  v7[1] = sub_140209C00;
  v8 = (__int64)v7;
  v2 = sub_140099FF0(a1: v11, a2: v9);
  v3 = sub_140099FF0(a1: v12, a2: v7);
  sub_1407F3B00(a1: a1 + 552, a2: v3, a3: v2);
  *(_QWORD *)(a1 + 552) = &PXEngine::NetPlayerLookManager::`vftable';
  *(_BYTE *)(a1 + 712) = 0;
  if ( v8 != 0 )
  {
    v4 = v7;
    LOBYTE(v4) = v8 != (_QWORD)v7;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 32LL))(a1: v8, a2: v4);
  }
  v8 = 19937;
  if ( v10 != nullptr )
  {
    v5 = v9;
    LOBYTE(v5) = v10 != v9;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v10 + 32LL))(a1: v10, a2: v5);
  }
  *(_QWORD *)(a1 + 720) = 0;
  *(_DWORD *)(a1 + 728) = 0;
  *(_DWORD *)(a1 + 732) = 0;
  *(_DWORD *)(a1 + 744) = 0;
  *(_DWORD *)(a1 + 748) = 195948557;
  *(_QWORD *)(a1 + 736) = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
  return a1;
}