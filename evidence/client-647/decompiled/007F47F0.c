__int64 __fastcall sub_1407F47F0(__int64 a1)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-88h] BYREF
  int v5; // [rsp+38h] [rbp-70h]
  __int16 v6; // [rsp+40h] [rbp-68h]
  _BYTE v7[32]; // [rsp+48h] [rbp-60h] BYREF
  __int16 v8; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v9[56]; // [rsp+70h] [rbp-38h] BYREF
  char v10; // [rsp+B0h] [rbp+8h] BYREF

  v2 = sub_1407F3DD0(a1, a2: *(unsigned int *)(a1 + 24));
  if ( v2 == 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_141019660,
                            a2: "NetPlayerLookManager::SendApplyFullMakeUp: GetNetObject failed to retrieve PlayerLook! Maste"
                            "r Player is invalid!") != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v10 = *(_BYTE *)(v2 + 36);
  v4[1] = 0;
  v4[2] = 0;
  v5 = 0;
  v4[0] = &PXEngine::ByteStreamWriter::`vftable';
  sub_140A25890(a1: v4, a2: &v10, a3: 1);
  v6 = word_141313E00;
  sub_140A255B0(a1: v7, a2: v4);
  v8 = v6;
  sub_140A255B0(a1: v9, a2: v7);
  v9[32] = 1;
  sub_140A25690(a1: v7);
  sub_140A25690(a1: v4);
  return sub_1407F41E0(a1, a2: &v8);
}