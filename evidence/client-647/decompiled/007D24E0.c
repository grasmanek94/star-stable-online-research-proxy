__int64 __fastcall sub_1407D24E0(__int64 a1, __int64 *a2)
{
  __int64 *v4; // r8
  __int64 *v5; // rdx
  __int64 *i; // rax
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rsi
  void ***v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  char **v29; // rcx
  void **v30; // [rsp+50h] [rbp-49h] BYREF
  int v31; // [rsp+58h] [rbp-41h]
  int v32; // [rsp+5Ch] [rbp-3Dh]
  void **v33; // [rsp+60h] [rbp-39h] BYREF
  int v34; // [rsp+68h] [rbp-31h]
  int v35; // [rsp+6Ch] [rbp-2Dh]
  void **v36; // [rsp+70h] [rbp-29h] BYREF
  int v37; // [rsp+78h] [rbp-21h]
  int v38; // [rsp+7Ch] [rbp-1Dh]
  void **v39; // [rsp+80h] [rbp-19h] BYREF
  int v40; // [rsp+88h] [rbp-11h]
  int v41; // [rsp+8Ch] [rbp-Dh]
  _BYTE v42[16]; // [rsp+90h] [rbp-9h] BYREF
  char v43[16]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned int v44; // [rsp+B0h] [rbp+17h]
  unsigned int v45; // [rsp+B4h] [rbp+1Bh]
  char v46[4]; // [rsp+B8h] [rbp+1Fh] BYREF
  int v47; // [rsp+BCh] [rbp+23h]
  char v48[16]; // [rsp+C0h] [rbp+27h] BYREF
  int v49; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v50; // [rsp+110h] [rbp+77h] BYREF
  int v51; // [rsp+118h] [rbp+7Fh] BYREF

  v44 = -1;
  v45 = 0;
  v46[0] = 0;
  v47 = 0;
  v48[0] = 0;
  v49 = -1;
  if ( sub_1401D0820(a1: a2, a2: &v49) == 0
    || (v44 = v49, v50 = v45, sub_1401D0820(a1: a2, a2: &v50) == 0)
    || (v45 = v50, sub_1402B8840(a1: a2, a2: v46) == 0)
    || (v51 = v47, sub_1401D0820(a1: a2, a2: &v51) == 0)
    || (v47 = v51,
        (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64))(*a2 + 16))(a1: a2, a2: v48, a3: 1) == 0) )
  {
    result = sub_140059D90(a1: off_141011E10, a2: "Failed to deserialize PetStateChangePushMessage!");
    if ( (_BYTE)result != 0 )
      __debugbreak();
    return result;
  }
  v4 = *(__int64 **)(a1 + 1912);
  v5 = v4;
  for ( i = (__int64 *)v4[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) >= v44 )
      v5 = i;
    else
      i += 2;
  }
  if ( *((_BYTE *)v5 + 25) != 0 || v44 < *((_DWORD *)v5 + 8) || v5 == v4 )
  {
    v31 = 0;
    v32 = 195948557;
  }
  else
  {
    sub_1405F1D40(a1: (__int64)&v30, a2: (__int64)(v5 + 5));
  }
  v30 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
  result = sub_1405F1EE0(a1: (__int64)&v30);
  v8 = result;
  if ( result == 0 )
    return result;
  v9 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    v29 = off_140F35058;
    goto LABEL_51;
  }
  v10 = sub_1405FD2E0(a1: (_QWORD *)qword_14138A6F0, a2: (__int64)v42, a3: (__int64)"EquipmentManager");
  if ( (unsigned __int8)sub_1406006A0(a1: v9, a2: v10, a3: 342) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v33, a2: *(_DWORD *)(v10 + 12), a3: *(_DWORD *)(v10 + 8));
  }
  else
  {
    v34 = 0;
    v35 = 195948557;
  }
  v33 = &PXEngine::SafeActorPtrAs<PXEngine::EquipmentManager>::`vftable';
  v11 = sub_1405F1EE0(a1: (__int64)&v33);
  if ( v11 == 0 )
  {
    v29 = off_140F40268;
LABEL_51:
    if ( (unsigned __int8)sub_140059CA0(a1: v29) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  result = (unsigned __int8)v46[0];
  if ( v46[0] == 1 )
  {
    sub_1405F1D40(a1: (__int64)&v39, a2: v8 + 120);
    v12 = &v39;
LABEL_31:
    result = sub_140488350(a1: v11, a2: v12, a3: (unsigned __int8)v46[0], a4: (unsigned __int8)v47);
    v17 = result;
    if ( result != 0 )
    {
      result = v45;
      if ( *(_DWORD *)(v17 + 16) == v45 )
      {
        LOBYTE(v16) = 1;
        sub_1402699C0(a1: v17, a2: (unsigned __int8)v48[0], a3: v16, a4: 0);
        LOBYTE(v18) = 23;
        result = sub_14025F400(a1: v17, a2: v18);
        if ( (_BYTE)result != 0 )
        {
          v19 = sub_140787420(a1: v8);
          v22 = v19;
          if ( v19 != 0 )
          {
            sub_1403BD260(a1: v19, a2: (unsigned __int8)v48[0]);
            return sub_1403BCC50(a1: v22, a2: v45);
          }
          else
          {
            v23 = sub_1400AF100(a1: v21, a2: v20);
            v37 = 0;
            v36 = &PXEngine::SafeActorPtr::`vftable';
            v38 = 195948557;
            v24 = (__int64 *)v23;
            sub_1405F1D40(a1: (__int64)v42, a2: a1 + 120);
            v39 = &PXEngine::SafeActorPtr::`vftable';
            v40 = 0;
            v41 = 195948557;
            v25 = sub_1405FD6C0(
                    a1: v24,
                    a2: (__int64)v43,
                    a3: (__int64)v42,
                    a4: "global/PetPosition",
                    a5: (__int64)&v39,
                    a6: (__int64)&v36,
                    a7: nullptr,
                    a8: 0,
                    a9: 0);
            if ( (unsigned __int8)sub_1406006A0(a1: v24, a2: v25, a3: 1) != 0 )
            {
              sub_1405F1D60(a1: (__int64)&v33, a2: *(_DWORD *)(v25 + 12), a3: *(_DWORD *)(v25 + 8));
            }
            else
            {
              v34 = 0;
              v35 = 195948557;
            }
            v33 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
            result = sub_1405F1EE0(a1: (__int64)&v33);
            v26 = result;
            if ( result != 0 )
            {
              if ( (unsigned __int8)sub_1400AE640(a1: v8) != 0 )
                v27 = sub_1403B7480(a1: v8, a2: v26, a3: "Pet", a4: v45);
              else
                v27 = sub_1403B7770(a1: v8, a2: v26, a3: "PetSlave", a4: v45);
              sub_140799E40(a1: v8, a2: v27);
              result = sub_140787420(a1: v8);
              if ( result != 0 )
              {
                v28 = sub_140787420(a1: v8);
                return sub_1403BD260(a1: v28, a2: (unsigned __int8)v48[0]);
              }
            }
          }
        }
      }
    }
    return result;
  }
  if ( v46[0] == 2 )
  {
    result = sub_1405F1EE0(a1: v8 + 1608);
    v13 = result;
    if ( result != 0 )
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 152LL))(a1: result);
      if ( (_DWORD)result == 120 )
      {
        v14 = sub_14005D330();
        result = sub_140645790(a1: v13, a2: 120, a3: v14);
        v15 = 0;
        if ( (_BYTE)result != 0 )
          v15 = v13;
        if ( v15 != 0 )
        {
          sub_1405F1D40(a1: (__int64)&v36, a2: v15 + 120);
          v12 = &v36;
          goto LABEL_31;
        }
      }
    }
  }
  return result;
}