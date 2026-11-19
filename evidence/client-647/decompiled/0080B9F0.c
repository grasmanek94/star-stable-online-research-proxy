void __fastcall sub_14080B9F0(__int64 a1, char a2, __int64 a3)
{
  char v5; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+48h] [rbp+20h] BYREF
  __int16 v7; // [rsp+4Ch] [rbp+24h] BYREF

  if ( a2 == 10 )
  {
    v5 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a3 + 16LL))(a1: a3, a2: &v5, a3: 1) != 0 )
    {
      *(_BYTE *)(a1 + 36) = v5;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(a1: *(_QWORD *)(a1 + 24));
      return;
    }
    if ( (unsigned __int8)sub_140059D90(a1: off_14101BFA8, a2: "NetSerialize ApplyMakeUpPush!") == 0 )
      return;
LABEL_14:
    __debugbreak();
  }
  if ( a2 != 11 )
    return;
  v6 = 0;
  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 16LL))(a1: a3, a2: &v6) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a3 + 16LL))(
         a1: a3,
         a2: (char *)&v6 + 1,
         a3: 1) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a3 + 16LL))(
         a1: a3,
         a2: (char *)&v6 + 2,
         a3: 1) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a3 + 16LL))(
         a1: a3,
         a2: (char *)&v6 + 3,
         a3: 1) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, __int16 *, __int64))(*(_QWORD *)a3 + 16LL))(a1: a3, a2: &v7, a3: 1) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a3 + 16LL))(
         a1: a3,
         a2: (char *)&v7 + 1,
         a3: 1) != 0 )
  {
    *(_BYTE *)(a1 + 33) = v6;
    *(_BYTE *)(a1 + 35) = BYTE1(v6);
    *(_BYTE *)(a1 + 34) = BYTE2(v6);
    *(_BYTE *)(a1 + 37) = HIBYTE(v6);
    *(_WORD *)(a1 + 38) = v7;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 40LL))(a1: *(_QWORD *)(a1 + 24));
    return;
  }
  if ( (unsigned __int8)sub_140059D90(a1: off_14101BFF8, a2: "NetSerialize AppearanceChangePush!") != 0 )
    goto LABEL_14;
}