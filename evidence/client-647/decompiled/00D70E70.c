char __fastcall sub_140D70E70(__int64 a1, _BYTE *a2, __int64 a3)
{
  int v6; // r15d
  int v7; // edi
  int v8; // esi
  unsigned int v9; // eax
  __int64 v10; // rax
  char v11; // r13
  int v12; // eax
  char result; // al
  int v14; // eax
  int v15; // eax
  __int64 *v16; // rcx
  __int64 v17; // rdx
  const char *v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // al
  char v23; // al
  _BYTE *v24; // rdx
  __int64 v25; // rcx
  int v26; // r9d
  int v27; // [rsp+28h] [rbp-D8h]
  int v28; // [rsp+28h] [rbp-D8h]
  int v29; // [rsp+28h] [rbp-D8h]
  int v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+28h] [rbp-D8h]
  int v32; // [rsp+30h] [rbp-D0h]
  int v33; // [rsp+30h] [rbp-D0h]
  char v34; // [rsp+40h] [rbp-C0h]
  int v35; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v37[48]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v38[24]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v39[8]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v40; // [rsp+A0h] [rbp-60h]
  char v41; // [rsp+A6h] [rbp-5Ah]
  __int64 v42; // [rsp+F0h] [rbp-10h]
  _BYTE v43[32]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v44; // [rsp+150h] [rbp+50h]
  char v45; // [rsp+156h] [rbp+56h]

  v6 = 2 * ((*(_DWORD *)(*(_QWORD *)(a1 + 328) + 144LL) & 0x800) == 0) + 7;
  v7 = 2 * ((*(_DWORD *)(*(_QWORD *)(a1 + 328) + 144LL) & 0x800) != 0) + 1;
  v8 = 2 * ((*(_DWORD *)(*(_QWORD *)(a1 + 328) + 144LL) & 0x800) == 0) + 6;
  if ( *(_BYTE *)(a1 + 344) != 0 )
  {
    v9 = sub_140E66D20(a1);
    v10 = sub_140D73970(a1, a2: v9);
    if ( v10 != 0 )
    {
      sub_140BDA1B0(a1: v37, a2: v10);
      if ( sub_140C21310(a1: *(_QWORD *)(*(_QWORD *)(a1 + 328) + 168LL), a2: (unsigned int)v37, a3: 0, a4: 0, a5: 0) != 0 )
        return 0;
    }
  }
  v34 = 0;
  v11 = 0;
  v12 = sub_140E66D20(a1) - 3;
  if ( v12 != 0 )
  {
    if ( v12 != 1 )
      goto LABEL_9;
    v34 = 1;
  }
  else
  {
    v11 = 1;
  }
  sub_140E66C00(a1);
LABEL_9:
  switch ( (unsigned int)sub_140E66D20(a1) )
  {
    case 0x1Eu:
    case 0x1Fu:
    case 0x20u:
      v35 = 0;
      v14 = sub_140E66D20(a1) - 30;
      if ( v14 != 0 )
      {
        v15 = v14 - 1;
        if ( v15 != 0 )
        {
          if ( v15 != 1 )
            return 0;
          v35 = 7;
        }
        else
        {
          v35 = 4;
        }
      }
      else
      {
        v35 = 1;
      }
      sub_140E66C00(a1);
      if ( (unsigned __int8)sub_140E66AB0(a1, a2: 373) == 0 )
        return 0;
      v36 = 0;
      if ( (unsigned __int8)sub_140D70E70(a1, a2, a3: &v36) == 0 )
      {
        v16 = *(__int64 **)(a1 + 328);
        v17 = a1 + 8;
        v18 = "stream output type";
        v19 = *v16;
        goto LABEL_21;
      }
      v20 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 80LL))(a1: a2);
      *(_DWORD *)(v20 + 8) &= 0xFFFFFFD1;
      *(_DWORD *)(v20 + 8) |= 0x11u;
      v21 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 80LL))(a1: a2);
      *(_DWORD *)(v21 + 8) &= 0xFFFFA37F;
      *(_DWORD *)(v21 + 8) |= 0x2340u;
      v22 = sub_140E66AB0(a1, a2: 374);
      v16 = *(__int64 **)(a1 + 328);
      v17 = a1 + 8;
      if ( v22 == 0 )
        goto LABEL_24;
      v23 = sub_140C94CB0(a1: v16, a2: v17, a3: &v35);
      return v23 != 0;
    case 0x21u:
    case 0x22u:
      v23 = sub_140D705B0(a1, a2);
      return v23 != 0;
    case 0x23u:
    case 0x119u:
    case 0x11Au:
    case 0x11Bu:
    case 0x11Cu:
    case 0x11Du:
    case 0x11Eu:
    case 0x11Fu:
    case 0x120u:
    case 0x121u:
    case 0x122u:
    case 0x123u:
    case 0x124u:
    case 0x125u:
    case 0x126u:
    case 0x127u:
      return sub_140D70780(a1, a2);
    case 0x24u:
      return sub_140D737A0(a1, a2);
    case 0x25u:
      return sub_140D6CB10(a1, a2);
    case 0x26u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 0, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x27u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 23, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x28u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x29u:
    case 0x2Cu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x2Au:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x2Bu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 11, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x2Du:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x2Eu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x2Fu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x30u:
    case 0x31u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 1, a6: 0, a7: 0, a8: 0);
      goto LABEL_441;
    case 0x32u:
    case 0x33u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 1, a6: 0, a7: 0, a8: 0);
      goto LABEL_441;
    case 0x34u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 1, a6: 0, a7: 0, a8: 0);
      goto LABEL_441;
    case 0x35u:
      if ( a2 == nullptr )
        goto LABEL_56;
      sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      a2[12] |= 1u;
      goto LABEL_441;
    case 0x36u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 2, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x37u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 3, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x38u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 4, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x39u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      goto LABEL_56;
    case 0x3Au:
      if ( a2 == nullptr )
        goto LABEL_441;
      v26 = 2;
      goto LABEL_59;
    case 0x3Bu:
      if ( a2 == nullptr )
        goto LABEL_441;
      v26 = 3;
      goto LABEL_59;
    case 0x3Cu:
      if ( a2 == nullptr )
        goto LABEL_441;
      v26 = 4;
LABEL_59:
      sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: v26, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x3Du:
      if ( a2 == nullptr )
        goto LABEL_56;
      sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      a2[12] |= 1u;
      goto LABEL_441;
    case 0x3Eu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 2, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x3Fu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 3, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x40u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 4, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x41u:
      if ( a2 == nullptr )
        goto LABEL_56;
      sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      a2[12] |= 1u;
      goto LABEL_441;
    case 0x42u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 2, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x43u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 3, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x44u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 4, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x45u:
      if ( a2 == nullptr )
        goto LABEL_56;
      sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      a2[12] |= 1u;
      goto LABEL_441;
    case 0x46u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 2, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x47u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 3, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x48u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 4, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x49u:
      if ( a2 == nullptr )
        goto LABEL_56;
      sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      a2[12] |= 1u;
      goto LABEL_441;
    case 0x4Au:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x4Bu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 3, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x4Cu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 4, a5: 0, a6: 0, a7: 0);
      goto LABEL_441;
    case 0x4Du:
    case 0x51u:
      if ( a2 == nullptr )
        goto LABEL_56;
      sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 1, a6: 0, a7: 0, a8: 0);
      a2[12] |= 1u;
      goto LABEL_441;
    case 0x4Eu:
    case 0x52u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 2, a6: 0, a7: 0, a8: 0);
      goto LABEL_441;
    case 0x4Fu:
    case 0x53u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 3, a6: 0, a7: 0, a8: 0);
      goto LABEL_441;
    case 0x50u:
    case 0x54u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 4, a6: 0, a7: 0, a8: 0);
      goto LABEL_441;
    case 0x55u:
    case 0x59u:
      if ( a2 == nullptr )
        goto LABEL_56;
      sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 1, a6: 0, a7: 0, a8: 0);
      a2[12] |= 1u;
      goto LABEL_441;
    case 0x56u:
    case 0x5Au:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 2, a6: 0, a7: 0, a8: 0);
      goto LABEL_441;
    case 0x57u:
    case 0x5Bu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 3, a6: 0, a7: 0, a8: 0);
      goto LABEL_441;
    case 0x58u:
    case 0x5Cu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 4, a6: 0, a7: 0, a8: 0);
      goto LABEL_441;
    case 0x5Du:
      if ( a2 != nullptr )
      {
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 1, a6: 0, a7: 0, a8: 0);
        a2[12] |= 1u;
      }
      else
      {
LABEL_56:
        a2[12] |= 1u;
      }
      goto LABEL_441;
    case 0x5Eu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 2, a6: 0, a7: 0, a8: 0);
      goto LABEL_441;
    case 0x5Fu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 3, a6: 0, a7: 0, a8: 0);
      goto LABEL_441;
    case 0x60u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 4, a6: 0, a7: 0, a8: 0);
      goto LABEL_441;
    case 0x61u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v27 = 1;
      goto LABEL_148;
    case 0x62u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v27 = 2;
      goto LABEL_148;
    case 0x63u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v27 = 3;
      goto LABEL_148;
    case 0x64u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v27 = 4;
LABEL_148:
      sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 0, a5: 1, a6: v27, a7: 0);
      goto LABEL_441;
    case 0x65u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 0, a5: 2, a6: 1, a7: 0);
      goto LABEL_441;
    case 0x66u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 0, a5: 2, a6: 2, a7: 0);
      goto LABEL_441;
    case 0x67u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 0, a5: 2, a6: 3, a7: 0);
      goto LABEL_441;
    case 0x68u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 0, a5: 2, a6: 4, a7: 0);
      goto LABEL_441;
    case 0x69u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 0, a5: 3, a6: 1, a7: 0);
      goto LABEL_441;
    case 0x6Au:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 0, a5: 3, a6: 2, a7: 0);
      goto LABEL_441;
    case 0x6Bu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 0, a5: 3, a6: 3, a7: 0);
      goto LABEL_441;
    case 0x6Cu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 0, a5: 3, a6: 4, a7: 0);
      goto LABEL_441;
    case 0x6Du:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 0, a5: 4, a6: 1, a7: 0);
      goto LABEL_441;
    case 0x6Eu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 0, a5: 4, a6: 2, a7: 0);
      goto LABEL_441;
    case 0x6Fu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 0, a5: 4, a6: 3, a7: 0);
      goto LABEL_441;
    case 0x70u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 8, a3: 0, a4: 0, a5: 4, a6: 4, a7: 0);
      goto LABEL_441;
    case 0x71u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v28 = 1;
      goto LABEL_181;
    case 0x72u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v28 = 2;
      goto LABEL_181;
    case 0x73u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v28 = 3;
      goto LABEL_181;
    case 0x74u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v28 = 4;
LABEL_181:
      sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 0, a5: 1, a6: v28, a7: 0);
      goto LABEL_441;
    case 0x75u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 0, a5: 2, a6: 1, a7: 0);
      goto LABEL_441;
    case 0x76u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 0, a5: 2, a6: 2, a7: 0);
      goto LABEL_441;
    case 0x77u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 0, a5: 2, a6: 3, a7: 0);
      goto LABEL_441;
    case 0x78u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 0, a5: 2, a6: 4, a7: 0);
      goto LABEL_441;
    case 0x79u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 0, a5: 3, a6: 1, a7: 0);
      goto LABEL_441;
    case 0x7Au:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 0, a5: 3, a6: 2, a7: 0);
      goto LABEL_441;
    case 0x7Bu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 0, a5: 3, a6: 3, a7: 0);
      goto LABEL_441;
    case 0x7Cu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 0, a5: 3, a6: 4, a7: 0);
      goto LABEL_441;
    case 0x7Du:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 0, a5: 4, a6: 1, a7: 0);
      goto LABEL_441;
    case 0x7Eu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 0, a5: 4, a6: 2, a7: 0);
      goto LABEL_441;
    case 0x7Fu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 0, a5: 4, a6: 3, a7: 0);
      goto LABEL_441;
    case 0x80u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 9, a3: 0, a4: 0, a5: 4, a6: 4, a7: 0);
      goto LABEL_441;
    case 0x81u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v29 = 1;
      goto LABEL_214;
    case 0x82u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v29 = 2;
      goto LABEL_214;
    case 0x83u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v29 = 3;
      goto LABEL_214;
    case 0x84u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v29 = 4;
LABEL_214:
      sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 0, a5: 1, a6: v29, a7: 0);
      goto LABEL_441;
    case 0x85u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 0, a5: 2, a6: 1, a7: 0);
      goto LABEL_441;
    case 0x86u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 0, a5: 2, a6: 2, a7: 0);
      goto LABEL_441;
    case 0x87u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 0, a5: 2, a6: 3, a7: 0);
      goto LABEL_441;
    case 0x88u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 0, a5: 2, a6: 4, a7: 0);
      goto LABEL_441;
    case 0x89u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 0, a5: 3, a6: 1, a7: 0);
      goto LABEL_441;
    case 0x8Au:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 0, a5: 3, a6: 2, a7: 0);
      goto LABEL_441;
    case 0x8Bu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 0, a5: 3, a6: 3, a7: 0);
      goto LABEL_441;
    case 0x8Cu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 0, a5: 3, a6: 4, a7: 0);
      goto LABEL_441;
    case 0x8Du:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 0, a5: 4, a6: 1, a7: 0);
      goto LABEL_441;
    case 0x8Eu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 0, a5: 4, a6: 2, a7: 0);
      goto LABEL_441;
    case 0x8Fu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 0, a5: 4, a6: 3, a7: 0);
      goto LABEL_441;
    case 0x90u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 12, a3: 0, a4: 0, a5: 4, a6: 4, a7: 0);
      goto LABEL_441;
    case 0x91u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 1, a6: 1, a7: 0);
      goto LABEL_441;
    case 0x92u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 1, a6: 2, a7: 0);
      goto LABEL_441;
    case 0x93u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 1, a6: 3, a7: 0);
      goto LABEL_441;
    case 0x94u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 1, a6: 4, a7: 0);
      goto LABEL_441;
    case 0x95u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 2, a6: 1, a7: 0);
      goto LABEL_441;
    case 0x96u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 2, a6: 2, a7: 0);
      goto LABEL_441;
    case 0x97u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 2, a6: 3, a7: 0);
      goto LABEL_441;
    case 0x98u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 2, a6: 4, a7: 0);
      goto LABEL_441;
    case 0x99u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 3, a6: 1, a7: 0);
      goto LABEL_441;
    case 0x9Au:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 3, a6: 2, a7: 0);
      goto LABEL_441;
    case 0x9Bu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 3, a6: 3, a7: 0);
      goto LABEL_441;
    case 0x9Cu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 3, a6: 4, a7: 0);
      goto LABEL_441;
    case 0x9Du:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 4, a6: 1, a7: 0);
      goto LABEL_441;
    case 0x9Eu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 4, a6: 2, a7: 0);
      goto LABEL_441;
    case 0x9Fu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 4, a6: 3, a7: 0);
      goto LABEL_441;
    case 0xA0u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 1, a3: 0, a4: 0, a5: 4, a6: 4, a7: 0);
      goto LABEL_441;
    case 0xA1u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v30 = 1;
      goto LABEL_279;
    case 0xA2u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v30 = 2;
      goto LABEL_279;
    case 0xA3u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v30 = 3;
      goto LABEL_279;
    case 0xA4u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v30 = 4;
LABEL_279:
      sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 0, a5: 1, a6: v30, a7: 0);
      goto LABEL_441;
    case 0xA5u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 0, a5: 2, a6: 1, a7: 0);
      goto LABEL_441;
    case 0xA6u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 0, a5: 2, a6: 2, a7: 0);
      goto LABEL_441;
    case 0xA7u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 0, a5: 2, a6: 3, a7: 0);
      goto LABEL_441;
    case 0xA8u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 0, a5: 2, a6: 4, a7: 0);
      goto LABEL_441;
    case 0xA9u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 0, a5: 3, a6: 1, a7: 0);
      goto LABEL_441;
    case 0xAAu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 0, a5: 3, a6: 2, a7: 0);
      goto LABEL_441;
    case 0xABu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 0, a5: 3, a6: 3, a7: 0);
      goto LABEL_441;
    case 0xACu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 0, a5: 3, a6: 4, a7: 0);
      goto LABEL_441;
    case 0xADu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 0, a5: 4, a6: 1, a7: 0);
      goto LABEL_441;
    case 0xAEu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 0, a5: 4, a6: 2, a7: 0);
      goto LABEL_441;
    case 0xAFu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 0, a5: 4, a6: 3, a7: 0);
      goto LABEL_441;
    case 0xB0u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 0, a5: 4, a6: 4, a7: 0);
      goto LABEL_441;
    case 0xB1u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v31 = 1;
      goto LABEL_312;
    case 0xB2u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v31 = 2;
      goto LABEL_312;
    case 0xB3u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v31 = 3;
      goto LABEL_312;
    case 0xB4u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v31 = 4;
LABEL_312:
      sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 0, a5: 1, a6: v31, a7: 0);
      goto LABEL_441;
    case 0xB5u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 0, a5: 2, a6: 1, a7: 0);
      goto LABEL_441;
    case 0xB6u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 0, a5: 2, a6: 2, a7: 0);
      goto LABEL_441;
    case 0xB7u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 0, a5: 2, a6: 3, a7: 0);
      goto LABEL_441;
    case 0xB8u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 0, a5: 2, a6: 4, a7: 0);
      goto LABEL_441;
    case 0xB9u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 0, a5: 3, a6: 1, a7: 0);
      goto LABEL_441;
    case 0xBAu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 0, a5: 3, a6: 2, a7: 0);
      goto LABEL_441;
    case 0xBBu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 0, a5: 3, a6: 3, a7: 0);
      goto LABEL_441;
    case 0xBCu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 0, a5: 3, a6: 4, a7: 0);
      goto LABEL_441;
    case 0xBDu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 0, a5: 4, a6: 1, a7: 0);
      goto LABEL_441;
    case 0xBEu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 0, a5: 4, a6: 2, a7: 0);
      goto LABEL_441;
    case 0xBFu:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 0, a5: 4, a6: 3, a7: 0);
      goto LABEL_441;
    case 0xC0u:
      if ( a2 != nullptr )
        sub_140BDB130(a1: (_DWORD)a2, a2: 2, a3: 0, a4: 0, a5: 4, a6: 4, a7: 0);
      goto LABEL_441;
    case 0xC1u:
    case 0xD1u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v32 = 1;
      goto LABEL_345;
    case 0xC2u:
    case 0xD2u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v32 = 2;
      goto LABEL_345;
    case 0xC3u:
    case 0xD3u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v32 = 3;
      goto LABEL_345;
    case 0xC4u:
    case 0xD4u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v32 = 4;
LABEL_345:
      sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 1, a7: v32, a8: 0);
      goto LABEL_441;
    case 0xC5u:
    case 0xD5u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 2, a7: 1, a8: 0);
      goto LABEL_441;
    case 0xC6u:
    case 0xD6u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 2, a7: 2, a8: 0);
      goto LABEL_441;
    case 0xC7u:
    case 0xD7u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 2, a7: 3, a8: 0);
      goto LABEL_441;
    case 0xC8u:
    case 0xD8u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 2, a7: 4, a8: 0);
      goto LABEL_441;
    case 0xC9u:
    case 0xD9u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 3, a7: 1, a8: 0);
      goto LABEL_441;
    case 0xCAu:
    case 0xDAu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 3, a7: 2, a8: 0);
      goto LABEL_441;
    case 0xCBu:
    case 0xDBu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 3, a7: 3, a8: 0);
      goto LABEL_441;
    case 0xCCu:
    case 0xDCu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 3, a7: 4, a8: 0);
      goto LABEL_441;
    case 0xCDu:
    case 0xDDu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 4, a7: 1, a8: 0);
      goto LABEL_441;
    case 0xCEu:
    case 0xDEu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 4, a7: 2, a8: 0);
      goto LABEL_441;
    case 0xCFu:
    case 0xDFu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 4, a7: 3, a8: 0);
      goto LABEL_441;
    case 0xD0u:
    case 0xE0u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v7, a3: 0, a4: 2, a5: 0, a6: 4, a7: 4, a8: 0);
      goto LABEL_441;
    case 0xE1u:
    case 0xF1u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v33 = 1;
      goto LABEL_378;
    case 0xE2u:
    case 0xF2u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v33 = 2;
      goto LABEL_378;
    case 0xE3u:
    case 0xF3u:
      if ( a2 == nullptr )
        goto LABEL_441;
      v33 = 3;
      goto LABEL_378;
    case 0xE4u:
    case 0xF4u:
      if ( a2 != nullptr )
      {
        v33 = 4;
LABEL_378:
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 0, a6: 1, a7: v33, a8: 0);
      }
LABEL_441:
      sub_140E66C00(a1);
      if ( v34 == 0 && v11 == 0 || (*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 296LL))(a1: a2) != 0 )
        return 1;
      (*(void (__fastcall **)(_QWORD, __int64, const char *, char *, char *))(**(_QWORD **)(a1 + 328) + 336LL))(
        a1: *(_QWORD *)(a1 + 328),
        a2: a1 + 8,
        a3: "unorm and snorm only valid in floating point domain",
        a4: &byte_140EEC5C5,
        a5: &byte_140EEC5C5);
      return 0;
    case 0xE5u:
    case 0xF5u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 0, a6: 2, a7: 1, a8: 0);
      goto LABEL_441;
    case 0xE6u:
    case 0xF6u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 0, a6: 2, a7: 2, a8: 0);
      goto LABEL_441;
    case 0xE7u:
    case 0xF7u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 0, a6: 2, a7: 3, a8: 0);
      goto LABEL_441;
    case 0xE8u:
    case 0xF8u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 0, a6: 2, a7: 4, a8: 0);
      goto LABEL_441;
    case 0xE9u:
    case 0xF9u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 0, a6: 3, a7: 1, a8: 0);
      goto LABEL_441;
    case 0xEAu:
    case 0xFAu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 0, a6: 3, a7: 2, a8: 0);
      goto LABEL_441;
    case 0xEBu:
    case 0xFBu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 0, a6: 3, a7: 3, a8: 0);
      goto LABEL_441;
    case 0xECu:
    case 0xFCu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 0, a6: 3, a7: 4, a8: 0);
      goto LABEL_441;
    case 0xEDu:
    case 0xFDu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 0, a6: 4, a7: 1, a8: 0);
      goto LABEL_441;
    case 0xEEu:
    case 0xFEu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 0, a6: 4, a7: 2, a8: 0);
      goto LABEL_441;
    case 0xEFu:
    case 0xFFu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 0, a6: 4, a7: 3, a8: 0);
      goto LABEL_441;
    case 0xF0u:
    case 0x100u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v8, a3: 0, a4: 2, a5: 0, a6: 4, a7: 4, a8: 0);
      goto LABEL_441;
    case 0x101u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 1, a7: 1, a8: 0);
      goto LABEL_441;
    case 0x102u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 1, a7: 2, a8: 0);
      goto LABEL_441;
    case 0x103u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 1, a7: 3, a8: 0);
      goto LABEL_441;
    case 0x104u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 1, a7: 4, a8: 0);
      goto LABEL_441;
    case 0x105u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 2, a7: 1, a8: 0);
      goto LABEL_441;
    case 0x106u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 2, a7: 2, a8: 0);
      goto LABEL_441;
    case 0x107u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 2, a7: 3, a8: 0);
      goto LABEL_441;
    case 0x108u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 2, a7: 4, a8: 0);
      goto LABEL_441;
    case 0x109u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 3, a7: 1, a8: 0);
      goto LABEL_441;
    case 0x10Au:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 3, a7: 2, a8: 0);
      goto LABEL_441;
    case 0x10Bu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 3, a7: 3, a8: 0);
      goto LABEL_441;
    case 0x10Cu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 3, a7: 4, a8: 0);
      goto LABEL_441;
    case 0x10Du:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 4, a7: 1, a8: 0);
      goto LABEL_441;
    case 0x10Eu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 4, a7: 2, a8: 0);
      goto LABEL_441;
    case 0x10Fu:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 4, a7: 3, a8: 0);
      goto LABEL_441;
    case 0x110u:
      if ( a2 != nullptr )
        sub_140C4D5D0(a1: (_DWORD)a2, a2: v6, a3: 0, a4: 2, a5: 0, a6: 4, a7: 4, a8: 0);
      goto LABEL_441;
    case 0x111u:
    case 0x112u:
    case 0x113u:
    case 0x114u:
    case 0x115u:
      v24 = a2;
      v25 = a1;
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 328) + 144LL) & 0x2000) == 0 )
        return sub_140D6E270(a1: v25, a2: v24);
      return sub_140D6E420(a1, a2);
    case 0x116u:
    case 0x117u:
      v24 = a2;
      v25 = a1;
      return sub_140D6E270(a1: v25, a2: v24);
    case 0x128u:
    case 0x129u:
      return sub_140D6FEE0(a1, a2);
    case 0x12Au:
    case 0x12Bu:
    case 0x12Cu:
    case 0x12Du:
    case 0x12Eu:
    case 0x12Fu:
      return sub_140D6F200(a1, a2);
    case 0x130u:
      if ( (unsigned __int8)sub_140E66AB0(a1, a2: 304) == 0 )
        return 0;
      if ( (unsigned __int8)sub_140E66AB0(a1, a2: 373) == 0 )
      {
        v16 = *(__int64 **)(a1 + 328);
        v17 = a1 + 8;
        v18 = "left angle bracket";
        v19 = *v16;
LABEL_21:
        (*(void (__fastcall **)(__int64 *, __int64, const char *, const char *, char *))(v19 + 336))(
          a1: v16,
          a2: v17,
          a3: "Expected",
          a4: v18,
          a5: &byte_140EEC5C5);
        return 0;
      }
      sub_140BDB130(a1: (unsigned int)v38, a2: 0, a3: 0, a4: 1, a5: 0, a6: 0, a7: 0);
      v36 = 0;
      if ( (unsigned __int8)sub_140D70E70(a1, a2: v38, a3: &v36) == 0 )
      {
        v16 = *(__int64 **)(a1 + 328);
        v17 = a1 + 8;
        v18 = "type";
        v19 = *v16;
        goto LABEL_21;
      }
      if ( (unsigned __int8)sub_140E66AB0(a1, a2: 374) == 0 )
      {
        v16 = *(__int64 **)(a1 + 328);
        v17 = a1 + 8;
LABEL_24:
        v19 = *v16;
        v18 = "right angle bracket";
        goto LABEL_21;
      }
      v41 |= 8u;
      v40 = v40 & 0xFFFFFFC0 | 6;
      sub_140BDA1B0(a1: v37, a2: &byte_140EEC5C5);
      sub_140C4D3C0(a1: v43, a2: v42, a3: v37, a4: v39);
      v45 |= 8u;
      v44 = v44 & 0xFFFFFFC0 | 6;
      sub_140BE1D70(a1: a2, a2: v43);
      result = 1;
      break;
    case 0x131u:
      if ( sub_140C97420(a1: *(_QWORD *)(a1 + 328), a2: *(_QWORD *)(a1 + 40), a3: a2) == 0 )
        return 0;
      sub_140E66C00(a1);
      return 1;
    case 0x132u:
    case 0x133u:
    case 0x134u:
    case 0x135u:
      return sub_140D6EB70(a1, a2, a3);
    case 0x139u:
      return sub_140D6A4E0(a1, a2);
    default:
      return 0;
  }
  return result;
}