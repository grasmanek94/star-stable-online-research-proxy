__int64 __fastcall sub_1407D2C00(__int64 a1, __int64 *a2, unsigned __int8 a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // r14d
  int v10; // r15d
  __int64 *v11; // r8
  __int64 *v12; // rax
  __int64 *i; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r8
  unsigned int v18; // r14d
  int v19; // r15d
  __int64 *v20; // r8
  __int64 *v21; // rax
  __int64 *j; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 *v26; // r8
  __int64 *v27; // rax
  __int64 *k; // rdx
  __int64 v29; // rax
  unsigned int v30; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v32; // [rsp+38h] [rbp-C8h]
  unsigned int v33; // [rsp+3Ch] [rbp-C4h] BYREF
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v35; // [rsp+44h] [rbp-BCh]
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  void **v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+58h] [rbp-A8h]
  int v39; // [rsp+5Ch] [rbp-A4h]
  _BYTE v40[200]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v41; // [rsp+128h] [rbp+28h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  __int64 v43; // [rsp+140h] [rbp+40h]
  _BYTE v44[8]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v45[8]; // [rsp+158h] [rbp+58h] BYREF
  int v46; // [rsp+198h] [rbp+98h]
  _BYTE v47[16]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v48[24]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v49; // [rsp+218h] [rbp+118h]
  __int64 v50; // [rsp+220h] [rbp+120h]

  switch ( a3 )
  {
    case 1u:
      v32 = -1;
      v33 = 0;
      LOBYTE(v34) = 0;
      v35 = 0;
      v30 = -1;
      if ( sub_1401D0820(a1: a2, a2: &v30) != 0 )
      {
        v32 = v30;
        v30 = v33;
        if ( sub_1401D0820(a1: a2, a2: &v30) != 0 )
        {
          v33 = v30;
          if ( sub_1402B8840(a1: a2, a2: (char *)&v34) != 0 )
          {
            v30 = v35;
            if ( sub_1401D0820(a1: a2, a2: &v30) != 0 )
            {
              v35 = v30;
              return sub_1407D2930(a1, a2: v32, a3: (unsigned __int8)v34, a4: v30, a5: v33);
            }
          }
        }
      }
      result = sub_140059D90(a1: off_141011D68, a2: "Failed to deserialize ItemEquipPushMessage!");
      if ( (_BYTE)result == 0 )
        return result;
      goto LABEL_84;
    case 2u:
      return sub_1407D24E0(a1, a2);
    case 3u:
      return sub_1407D2310(a1, a2);
    case 4u:
      return sub_1407D3360(a1, a2);
    case 5u:
      sub_14034B3B0(a1: v40);
      v41 = 0;
      v42 = 0;
      v43 = 0;
      if ( (unsigned __int8)sub_1403474B0(a1: (__int64)a2, a2: (__int64)v40) != 0 )
      {
        sub_1407F3370(a1: v44);
        sub_1407F3630(a1: v44, a2: v40);
        v7 = sub_1405F1EE0(a1: (__int64)&off_141311CD0);
        if ( v7 == 0
          || dword_14138DFD0 == 0
          || (unsigned __int8)sub_1403523E0(a1: v7) != 0
          || (unsigned __int8)sub_1405F1E20(a1: &off_141313B68) == 0 )
        {
          goto LABEL_22;
        }
        v8 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
        if ( v8 == 0 )
        {
          while ( 1 )
          {
            if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EF78) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
LABEL_92:
            if ( (unsigned __int8)sub_140059CA0(a1: off_1410149A8) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
          }
        }
        if ( *(_DWORD *)(v8 + 1720) != v46 )
        {
          sub_1401D4CD0(a1: v44);
        }
        else
        {
LABEL_22:
          sub_1407D9AD0(a1, a2: v44);
          v49 = 7;
          v50 = 8;
          sub_140017A10(a1: v48);
          sub_140082DD0(a1: v47);
          sub_14001B5A0(a1: v45);
          v45[0] = 19937;
          v45[2] = 0;
          v45[3] = 31;
        }
      }
      else if ( (unsigned __int8)sub_140059D90(a1: off_141013A68, a2: "failed to serialize HorseCreateMasterMessage") != 0 )
      {
        __debugbreak();
      }
      return sub_14034BD00(a1: v40);
    case 6u:
      sub_14034B3B0(a1: v40);
      v41 = 0;
      v42 = 0;
      v43 = 0;
      if ( (unsigned __int8)sub_1403474B0(a1: (__int64)a2, a2: (__int64)v40) == 0
        && (unsigned __int8)sub_140059D90(a1: off_141014960, a2: "NetSerialize HorseCreateMasterMessage!") != 0 )
      {
        __debugbreak();
      }
      sub_1407CB6D0(a1, a2: v40);
      return sub_14034BD00(a1: v40);
    case 7u:
      return sub_1407D2020(a1, a2);
    case 8u:
      v31 = -1;
      if ( sub_1401D0820(a1: a2, a2: &v31) != 0 )
      {
        v30 = 0;
        if ( sub_1401D0820(a1: a2, a2: &v30) != 0 )
        {
          v9 = v30;
          v33 = v30;
          v36 = 0;
          if ( sub_1401D0820(a1: a2, a2: &v36) != 0 )
          {
            v10 = v36;
            v34 = v36;
            v11 = *(__int64 **)(a1 + 1912);
            v12 = (__int64 *)v11[1];
            for ( i = v11; *((_BYTE *)v12 + 25) == 0; v12 = (__int64 *)*v12 )
            {
              if ( *((_DWORD *)v12 + 8) >= v31 )
                i = v12;
              else
                v12 += 2;
            }
            if ( *((_BYTE *)i + 25) != 0 || v31 < *((_DWORD *)i + 8) || i == v11 )
            {
              v38 = 0;
              v39 = 195948557;
            }
            else
            {
              sub_1405F1D40(a1: (__int64)&v37, a2: (__int64)(i + 5));
            }
            v37 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
            result = sub_1405F1EE0(a1: (__int64)&v37);
            v14 = result;
            if ( result != 0 )
            {
              v15 = sub_14005D330();
              result = sub_1405F1EE0(a1: v14 + 1608);
              v16 = result;
              if ( result != 0 )
              {
                result = sub_140645790(a1: result, a2: 120, a3: v15);
                if ( (_BYTE)result != 0 )
                {
                  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 904LL))(a1: v16);
                  if ( (_DWORD)result == v10 )
                  {
                    LOBYTE(v17) = 1;
                    return sub_1401D5C30(a1: v16, a2: v9, a3: v17);
                  }
                }
              }
            }
            return result;
          }
        }
      }
      result = sub_140059D90(a1: off_141014598, a2: "NetSerialize HorseConsumableEffect!");
      if ( (_BYTE)result == 0 )
        return result;
      goto LABEL_84;
    case 9u:
      v30 = -1;
      if ( sub_1401D0820(a1: a2, a2: &v30) != 0 )
      {
        v31 = 0;
        if ( sub_1401D0820(a1: a2, a2: &v31) != 0 )
        {
          v18 = v31;
          v33 = v31;
          v36 = 0;
          if ( sub_1401D0820(a1: a2, a2: &v36) != 0 )
          {
            v19 = v36;
            v34 = v36;
            v20 = *(__int64 **)(a1 + 1912);
            v21 = (__int64 *)v20[1];
            for ( j = v20; *((_BYTE *)v21 + 25) == 0; v21 = (__int64 *)*v21 )
            {
              if ( *((_DWORD *)v21 + 8) >= v30 )
                j = v21;
              else
                v21 += 2;
            }
            if ( *((_BYTE *)j + 25) != 0 || v30 < *((_DWORD *)j + 8) || j == v20 )
            {
              v38 = 0;
              v39 = 195948557;
            }
            else
            {
              sub_1405F1D40(a1: (__int64)&v37, a2: (__int64)(j + 5));
            }
            v37 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
            result = sub_1405F1EE0(a1: (__int64)&v37);
            v23 = result;
            if ( result != 0 )
            {
              v24 = sub_14005D330();
              result = sub_1405F1EE0(a1: v23 + 1608);
              v25 = result;
              if ( result != 0 )
              {
                result = sub_140645790(a1: result, a2: 120, a3: v24);
                if ( (_BYTE)result != 0 )
                {
                  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 904LL))(a1: v25);
                  if ( (_DWORD)result == v19 )
                    return sub_1401DBD30(a1: v25, a2: v18);
                }
              }
            }
            return result;
          }
        }
      }
      result = sub_140059D90(a1: off_141014618, a2: "NetSerialize HorseConsumableEffect!");
      if ( (_BYTE)result == 0 )
        return result;
      goto LABEL_84;
    case 0xCu:
      v32 = -1;
      v33 = 0;
      LOWORD(v34) = 0;
      v31 = -1;
      if ( sub_1401D0820(a1: a2, a2: &v31) == 0 || (v32 = v31, sub_14077EDE0(a1: a2, a2: (int *)&v33) == 0) )
      {
        result = sub_140059D90(a1: off_141014670, a2: "Failed to deserialize CharacterActivityModifiedPushMessage!");
        if ( (_BYTE)result == 0 )
          return result;
LABEL_84:
        __debugbreak();
      }
      v26 = *(__int64 **)(a1 + 1912);
      v27 = (__int64 *)v26[1];
      for ( k = v26; *((_BYTE *)v27 + 25) == 0; v27 = (__int64 *)*v27 )
      {
        if ( *((_DWORD *)v27 + 8) >= v32 )
          k = v27;
        else
          v27 += 2;
      }
      if ( *((_BYTE *)k + 25) != 0 || v32 < *((_DWORD *)k + 8) || k == v26 )
      {
        v38 = 0;
        v39 = 195948557;
      }
      else
      {
        sub_1405F1D40(a1: (__int64)&v37, a2: (__int64)(k + 5));
      }
      v37 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
      result = sub_1405F1EE0(a1: (__int64)&v37);
      if ( result != 0 )
        return sub_140790CF0(a1: result, a2: &v33);
      return result;
    default:
      v29 = sub_140205610(a1, a2);
      if ( v29 == 0 )
        goto LABEL_92;
      return sub_1407F3E10(a1: v29 + 552, a2: a3, a3: a2);
  }
}