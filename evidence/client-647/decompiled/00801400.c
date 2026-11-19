char __fastcall sub_140801400(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a2 + 32) != 0 )
    *(_BYTE *)a2 |= 8u;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 8))(a1) == 0 )
  {
    LOBYTE(v6) = *(_BYTE *)a2;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, int *, __int64))(*a1 + 16))(a1, a2: &v6, a3: 1) != 0 )
      goto LABEL_7;
    return 0;
  }
  v4 = *a1;
  LOBYTE(v6) = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, int *, __int64))(v4 + 16))(a1, a2: &v6, a3: 1) == 0 )
    return 0;
  *(_BYTE *)a2 = v6;
LABEL_7:
  LOWORD(v6) = *(_WORD *)(a2 + 2);
  if ( (unsigned __int8)sub_1402D2B10(a1, a2: &v6) == 0 )
    return 0;
  *(_WORD *)(a2 + 2) = v6;
  v6 = *(_DWORD *)(a2 + 4);
  if ( (unsigned __int8)sub_1401D0820(a1, a2: &v6) == 0 )
    return 0;
  *(_DWORD *)(a2 + 4) = v6;
  v6 = *(_DWORD *)(a2 + 8);
  if ( (unsigned __int8)sub_1401D0820(a1, a2: &v6) == 0 )
    return 0;
  *(_DWORD *)(a2 + 8) = v6;
  if ( (unsigned __int8)sub_140A44740(a1, a2: a2 + 12) == 0
    || (*(_BYTE *)a2 & 8) != 0 && (unsigned __int8)sub_1409CB310(a1, a2: a2 + 32) == 0 )
  {
    return 0;
  }
  if ( (*(_BYTE *)a2 & 3) == 3 )
    return (unsigned __int8)sub_1401D0C80(a1, a2: a2 + 40) != 0
        && (unsigned __int8)sub_1402D2D70(a1, a2: a2 + 44) != 0
        && (unsigned __int8)sub_1402D2D70(a1, a2: a2 + 46) != 0;
  if ( (*(_BYTE *)a2 & 1) == 0 )
    return 1;
  return sub_1401D0C80(a1, a2: a2 + 40);
}