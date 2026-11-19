char __fastcall sub_140349DC0(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rsi
  _DWORD *v5; // rcx
  _DWORD *v6; // rsi
  _DWORD *v7; // rcx
  _QWORD v9[24]; // [rsp+20h] [rbp-99h] BYREF
  __int64 v10; // [rsp+E0h] [rbp+27h]
  __int64 v11; // [rsp+120h] [rbp+67h] BYREF

  v10 = a1[11];
  v9[0] = v10 + 193;
  v9[1] = v10 + 192;
  v9[2] = v10 + 191;
  v9[3] = v10 + 190;
  v9[4] = v10 + 189;
  v9[5] = v10 + 188;
  v9[6] = v10 + 187;
  v9[7] = v10 + 186;
  v9[8] = v10 + 185;
  v9[9] = v10 + 184;
  v9[10] = v10 + 180;
  v9[11] = v10 + 176;
  v9[12] = v10 + 172;
  v9[13] = v10 + 168;
  v9[14] = v10 + 164;
  v9[15] = v10 + 160;
  v9[16] = v10 + 96;
  v9[17] = v10 + 80;
  v9[18] = v10 + 64;
  v9[19] = v10 + 52;
  v9[20] = v10 + 48;
  v9[21] = v10 + 44;
  v9[22] = v10 + 40;
  v9[23] = v10 + 8;
  v11 = *a2;
  if ( (unsigned __int8)sub_140349AF0(a1: v9, a2: &v11, a3: 0) == 0 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(a1: *a2, a2: a1[10], a3: 16) == 0 )
    return 0;
  v4 = (_DWORD *)a1[9];
  v5 = (_DWORD *)*a2;
  LODWORD(v11) = *v4;
  if ( sub_1401D0820(a1: v5, a2: &v11) == 0 )
    return 0;
  *v4 = v11;
  v6 = (_DWORD *)a1[8];
  v7 = (_DWORD *)*a2;
  LODWORD(v11) = *v6;
  if ( sub_1401D0820(a1: v7, a2: &v11) != 0
    && (*v6 = v11,
        (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(a1: *a2, a2: a1[7], a3: 1) != 0)
    && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(a1: *a2, a2: a1[6], a3: 1) != 0
    && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(a1: *a2, a2: a1[5], a3: 1) != 0
    && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(a1: *a2, a2: a1[4], a3: 1) != 0
    && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(a1: *a2, a2: a1[3], a3: 1) != 0
    && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(a1: *a2, a2: a1[2], a3: 1) != 0
    && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(a1: *a2, a2: a1[1], a3: 1) != 0
    && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(a1: *a2, a2: *a1, a3: 1) != 0 )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}