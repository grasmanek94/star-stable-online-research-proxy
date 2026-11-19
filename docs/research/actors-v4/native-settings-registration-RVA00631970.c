// IDA Hex-Rays export, SSOClient.exe 645.348067.
// Preference load/save function RVA 0x00631970.
char __fastcall sub_140631970(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // xmm0_4
  float *v11; // rcx
  int v12; // xmm1_4
  __int64 v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // r8
  int *v22; // rax
  float *v23; // rcx
  int *v24; // rax
  _BYTE v26[24]; // [rsp+20h] [rbp-18h] BYREF
  int v27; // [rsp+40h] [rbp+8h] BYREF
  int v28; // [rsp+48h] [rbp+10h] BYREF
  int v29; // [rsp+50h] [rbp+18h]

  if ( (unsigned __int8)sub_140717A50(
                          a1: *(_QWORD *)(a1 + 432),
                          a2: "GraphicsVerticalSync",
                          a3: *(_QWORD *)(a1 + 696) + 48LL,
                          a4: a2) != 0 )
    *(_BYTE *)(a1 + 488) = 1;
  v28 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 696) + 5LL);
  if ( (unsigned __int8)sub_140717540(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsFullscreen", a3: &v28, a4: a2) != 0 )
    *(_BYTE *)(a1 + 488) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 696) + 5LL) = v28;
  if ( (unsigned __int8)sub_140717A50(
                          a1: *(_QWORD *)(a1 + 432),
                          a2: "GraphicsAnisotropic",
                          a3: *(_QWORD *)(a1 + 696) + 50LL,
                          a4: a2) != 0 )
    *(_BYTE *)(a1 + 488) = 1;
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsAntiAliasing", a3: *(_QWORD *)(a1 + 696) + 51LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsReflections", a3: *(_QWORD *)(a1 + 696) + 53LL, a4: a2);
  sub_1407175C0(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsBrightnessNew", a3: *(_QWORD *)(a1 + 696) + 72LL, a4: a2);
  sub_1407175C0(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsContrast", a3: *(_QWORD *)(a1 + 696) + 76LL, a4: a2);
  sub_1407175C0(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsSaturation", a3: *(_QWORD *)(a1 + 696) + 80LL, a4: a2);
  sub_1407175C0(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsQuality", a3: *(_QWORD *)(a1 + 696) + 60LL, a4: a2);
  if ( (unsigned __int8)sub_1407175C0(
                          a1: *(_QWORD *)(a1 + 432),
                          a2: "UiScaling",
                          a3: *(_QWORD *)(a1 + 696) + 64LL,
                          a4: a2) != 0 )
  {
    sub_14071D2E0(a1: *(_QWORD *)(a1 + 1152));
    *(_BYTE *)(a1 + 488) = 1;
  }
  v4 = *(_QWORD *)(a1 + 696);
  if ( *(float *)(v4 + 60) <= 0.40000001 )
    *(_BYTE *)(v4 + 53) = 0;
  v5 = *(_QWORD *)(a1 + 432);
  v6 = *(_QWORD *)(a1 + 696);
  if ( a2 != 0 )
  {
    sub_140717540(a1: v5, a2: "GraphicsDisplaySettingWidth", a3: v6 + 24, a4: a2);
    sub_140717540(
      a1: *(_QWORD *)(a1 + 432),
      a2: "GraphicsDisplaySettingHeight",
      a3: *(_QWORD *)(a1 + 696) + 28LL,
      a4: a2);
    sub_140717540(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsDisplaySettingFreq", a3: *(_QWORD *)(a1 + 696) + 32LL, a4: a2);
    if ( (unsigned __int8)sub_140717420(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsDisplayMode") != 0 )
      sub_140717540(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsDisplayMode", a3: *(_QWORD *)(a1 + 696) + 44LL, a4: a2);
  }
  else if ( (unsigned __int8)sub_140717540(a1: v5, a2: "GraphicsDisplayMode", a3: v6 + 44, a4: 0) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 464);
    v14 = *(_QWORD *)(a1 + 696);
    v15 = *(unsigned int *)(v14 + 44);
    if ( v15 < (*(_QWORD *)(a1 + 472) - v13) / 40 )
    {
      *(_DWORD *)(v14 + 24) = *(_DWORD *)(v13 + 40 * v15 + 16);
      v16 = *(_QWORD *)(a1 + 464);
      v17 = *(_QWORD *)(a1 + 696);
      v18 = *(unsigned int *)(v17 + 44);
      if ( v18 >= (*(_QWORD *)(a1 + 472) - v16) / 40
        || (*(_DWORD *)(v17 + 28) = *(_DWORD *)(v16 + 40 * v18 + 20),
            v19 = *(_QWORD *)(a1 + 464),
            v20 = *(_QWORD *)(a1 + 696),
            (v21 = *(unsigned int *)(v20 + 44)) >= (unsigned __int64)((*(_QWORD *)(a1 + 472) - v19) / 40)) )
      {
        __fastfail(5u);
      }
      *(_DWORD *)(v20 + 32) = *(_DWORD *)(v19 + 40 * v21 + 24);
      sub_140717AF0(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsDisplaySettingWidth", a3: *(_QWORD *)(a1 + 696) + 24LL);
      sub_140717AF0(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsDisplaySettingHeight", a3: *(_QWORD *)(a1 + 696) + 28LL);
      sub_140717AF0(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsDisplaySettingFreq", a3: *(_QWORD *)(a1 + 696) + 32LL);
      *(_BYTE *)(a1 + 488) = 1;
    }
  }
  if ( (unsigned __int8)sub_140717A50(
                          a1: *(_QWORD *)(a1 + 432),
                          a2: "GraphicsEnableShadow",
                          a3: *(_QWORD *)(a1 + 696) + 84LL,
                          a4: a2) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 720);
    *(_BYTE *)(a1 + 488) = 1;
    if ( v7 != 0 )
      sub_1406DD810(a1: v7, a2: 0);
  }
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "GameMapType", a3: *(_QWORD *)(a1 + 696) + 129LL, a4: a2);
  v8 = sub_1403EA280(a1: v26, a2: *(_QWORD *)(a1 + 1224));
  v9 = sub_1405F8CF0(a1: v8);
  if ( v9 != 0 )
    sub_1403EA8C0(a1: v9, a2: *(_QWORD *)(a1 + 432), a3: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "GameShowIntroVideo", a3: *(_QWORD *)(a1 + 696) + 130LL, a4: a2);
  sub_1407175C0(a1: *(_QWORD *)(a1 + 432), a2: "GameCameraDistancePlayer", a3: *(_QWORD *)(a1 + 696) + 132LL, a4: a2);
  sub_1407175C0(a1: *(_QWORD *)(a1 + 432), a2: "GameCameraDistanceHorse", a3: *(_QWORD *)(a1 + 696) + 136LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "InputMouseInvert", a3: *(_QWORD *)(a1 + 696) + 184LL, a4: a2);
  sub_1407175C0(a1: *(_QWORD *)(a1 + 432), a2: "InputMouseSensitivityVert", a3: *(_QWORD *)(a1 + 696) + 176LL, a4: a2);
  sub_1407175C0(a1: *(_QWORD *)(a1 + 432), a2: "InputMouseSensitivityHorz", a3: *(_QWORD *)(a1 + 696) + 180LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "GameCameraJumpMode", a3: *(_QWORD *)(a1 + 696) + 140LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "GameHideStarReins", a3: *(_QWORD *)(a1 + 696) + 141LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "GameInteractionUI", a3: *(_QWORD *)(a1 + 696) + 142LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "GameLegacyControls", a3: *(_QWORD *)(a1 + 696) + 200LL, a4: a2);
  sub_140717A50(
    a1: *(_QWORD *)(a1 + 432),
    a2: "InputInvertTouchControlsHorse",
    a3: *(_QWORD *)(a1 + 696) + 197LL,
    a4: a2);
  sub_140717A50(
    a1: *(_QWORD *)(a1 + 432),
    a2: "InputInvertTouchControlsWalking",
    a3: *(_QWORD *)(a1 + 696) + 198LL,
    a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "InputAllowHapticFeedback", a3: *(_QWORD *)(a1 + 696) + 199LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "CameraRealignFoot", a3: *(_QWORD *)(a1 + 696) + 151LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "CameraRealignHorse", a3: *(_QWORD *)(a1 + 696) + 152LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "SnowToggle", a3: *(_QWORD *)(a1 + 696) + 153LL, a4: a2);
  sub_1407175C0(a1: *(_QWORD *)(a1 + 432), a2: "CameraDistanceFOV", a3: *(_QWORD *)(a1 + 696) + 156LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "GameHideHUDGaitIndicator", a3: *(_QWORD *)(a1 + 696) + 144LL, a4: a2);
  sub_140717A50(
    a1: *(_QWORD *)(a1 + 432),
    a2: "GameHideMaxLevelStableNameplate",
    a3: *(_QWORD *)(a1 + 696) + 145LL,
    a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "GameRestrictGlobalChat", a3: *(_QWORD *)(a1 + 696) + 146LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "MuteChat", a3: *(_QWORD *)(a1 + 696) + 147LL, a4: a2);
  sub_140717A50(
    a1: *(_QWORD *)(a1 + 432),
    a2: "GameBlockTrailblazerPointsNotifications",
    a3: *(_QWORD *)(a1 + 696) + 148LL,
    a4: a2);
  sub_140717A50(
    a1: *(_QWORD *)(a1 + 432),
    a2: "GameBlockTrailblazerLevelUpNotifications",
    a3: *(_QWORD *)(a1 + 696) + 149LL,
    a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "AllowCameraShake", a3: *(_QWORD *)(a1 + 696) + 150LL, a4: a2);
  v10 = 1069547520;
  v11 = (float *)(*(_QWORD *)(a1 + 696) + 132LL);
  v27 = 1084227584;
  v29 = 1069547520;
  if ( *v11 >= 1.5 )
  {
    v22 = &v27;
    if ( *v11 <= 5.0 )
      v22 = (int *)v11;
    v12 = *v22;
  }
  else
  {
    v12 = 1069547520;
  }
  *(_DWORD *)v11 = v12;
  v23 = (float *)(*(_QWORD *)(a1 + 696) + 136LL);
  v27 = 1084227584;
  v29 = 1069547520;
  if ( *v23 >= 1.5 )
  {
    v24 = &v27;
    if ( *v23 <= 5.0 )
      v24 = (int *)v23;
    v10 = *v24;
  }
  *(_DWORD *)v23 = v10;
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "BecomeAWildHorse", a3: *(_QWORD *)(a1 + 696) + 161LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "HidePlayerNames", a3: *(_QWORD *)(a1 + 696) + 162LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "ShowOtherWildHorses", a3: *(_QWORD *)(a1 + 696) + 163LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "HideHat", a3: *(_QWORD *)(a1 + 696) + 164LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "MuteRequestsGroup", a3: *(_QWORD *)(a1 + 696) + 165LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "MuteRequestsFriend", a3: *(_QWORD *)(a1 + 696) + 166LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "MuteRequestsStableInvites", a3: *(_QWORD *)(a1 + 696) + 167LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "MuteRequestsClub", a3: *(_QWORD *)(a1 + 696) + 168LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "MuteAreaNotifications", a3: *(_QWORD *)(a1 + 696) + 169LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "HideMountedHorseAndPlayer", a3: *(_QWORD *)(a1 + 696) + 170LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "HideUnmountedHorse", a3: *(_QWORD *)(a1 + 696) + 171LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "HideUnmountedPlayer", a3: *(_QWORD *)(a1 + 696) + 172LL, a4: a2);
  sub_140717A50(a1: *(_QWORD *)(a1 + 432), a2: "GraphicsHidePlayers", a3: *(_QWORD *)(a1 + 696) + 173LL, a4: a2);
  dword_1412FF68C = *(_DWORD *)(*(_QWORD *)(a1 + 696) + 60LL);
  if ( a2 != 0 )
    *(_BYTE *)(a1 + 488) = 0;
  else
    sub_14068E8E0(a1: *(_QWORD *)(a1 + 1008), a2: 0, a3: 0, a4: 0);
  return 1;
}
