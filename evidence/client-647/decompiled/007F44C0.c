__int64 __fastcall sub_1407F44C0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _BYTE v5[56]; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+60h] [rbp+8h] BYREF
  __int16 v7; // [rsp+64h] [rbp+Ch]

  v2 = sub_1407F3DD0(a1, a2: *(unsigned int *)(a1 + 24));
  if ( v2 == 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_1410197F8,
                            a2: "NetPlayerLookManager::BuyAppearanceChange: GetNetObject failed to retrieve PlayerLook! Maste"
                            "r Player is invalid!") != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v6 = 0;
  v7 = 0;
  LOBYTE(v6) = *(_BYTE *)(v2 + 33);
  BYTE1(v6) = *(_BYTE *)(v2 + 35);
  v7 = *(_WORD *)(v2 + 38);
  HIBYTE(v6) = *(_BYTE *)(v2 + 37);
  BYTE2(v6) = *(_BYTE *)(v2 + 34);
  v3 = sub_1407F4340(a1: &unk_141313E08, a2: v5, a3: &v6);
  return sub_1407F41E0(a1, a2: v3);
}