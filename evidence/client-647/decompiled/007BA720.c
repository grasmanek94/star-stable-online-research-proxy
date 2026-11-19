__int64 __fastcall sub_1407BA720(__int64 a1)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rdi
  int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  void **v13; // [rsp+40h] [rbp-49h] BYREF
  int v14; // [rsp+48h] [rbp-41h]
  int v15; // [rsp+4Ch] [rbp-3Dh]
  _QWORD v16[3]; // [rsp+50h] [rbp-39h] BYREF
  int v17; // [rsp+68h] [rbp-21h]
  __int16 v18; // [rsp+70h] [rbp-19h]
  _BYTE v19[32]; // [rsp+78h] [rbp-11h] BYREF
  __int16 v20; // [rsp+98h] [rbp+Fh] BYREF
  _BYTE v21[48]; // [rsp+A0h] [rbp+17h] BYREF

  if ( (unsigned __int8)sub_1402C9DC0() != 0 )
    return sub_1407BAE00(a1, a2: 0);
  v3 = sub_1405F1EE0(a1: (__int64)&off_141311F20);
  if ( v3 == 0 )
    goto LABEL_11;
  v4 = sub_14038F040(a1: v3);
  v5 = qword_14138A6F0;
  v6 = v4;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v7 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v16, a3: "NotificationManager");
  if ( (unsigned __int8)sub_1406006A0(a1: v5, a2: v7, a3: 160) != 0 )
  {
    sub_1405F1D60(a1: &v13, a2: *(unsigned int *)(v7 + 12), a3: *(unsigned int *)(v7 + 8));
  }
  else
  {
    v14 = 0;
    v15 = 195948557;
  }
  v13 = &PXEngine::SafeActorPtrAs<CPXNotificationManager>::`vftable';
  v8 = sub_1405F1EE0(a1: (__int64)&v13);
  v9 = v8;
  if ( v6 == 1 && v8 != 0 )
  {
    sub_1405F1D40(a1: v16, a2: a1 + 120);
    return sub_1402DB8A0(
             a1: v9,
             a2: 4,
             a3: (unsigned int)L"GROUP_CHALLANGE_YOU_ARE_TO_FAR",
             a4: 1,
             a5: (__int64)v16,
             a6: 0,
             a7: 0);
  }
  else
  {
LABEL_11:
    sub_1405F1D40(a1: v16, a2: a1 + 120);
    v10 = sub_1405F1D40(a1: &v13, a2: v16);
    v11 = sub_1407B8CF0(a1: v10, a2: "GroupChallengeJoinView");
    v12 = v11;
    if ( v11 != 0 && sub_1400C8AD0(a1: v11) )
      sub_1400C2A20(a1: v12);
    v16[1] = 0;
    v16[0] = &PXEngine::ByteStreamWriter::`vftable';
    v18 = word_141313C60;
    v16[2] = 0;
    v17 = 0;
    sub_140A255B0(a1: v19, a2: v16);
    v20 = v18;
    sub_140A255B0(a1: v21, a2: v19);
    v21[32] = 1;
    sub_140A25690(a1: v19);
    sub_140A25690(a1: v16);
    return sub_1407D6C20(a1, a2: &v20);
  }
}