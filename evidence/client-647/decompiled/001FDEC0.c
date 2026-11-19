__int64 __fastcall sub_1401FDEC0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r14
  int v4; // edi
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r14
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // r14d
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rax
  unsigned int v38; // eax
  void **v39; // [rsp+48h] [rbp-9h] BYREF
  unsigned int v40; // [rsp+50h] [rbp-1h]
  int v41; // [rsp+54h] [rbp+3h]
  void **v42; // [rsp+58h] [rbp+7h] BYREF
  int v43; // [rsp+60h] [rbp+Fh]
  int v44; // [rsp+64h] [rbp+13h]
  _BYTE v45[16]; // [rsp+68h] [rbp+17h] BYREF
  _BYTE v46[16]; // [rsp+78h] [rbp+27h] BYREF

  v1 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v3 = sub_1405FD2E0(a1: (_QWORD *)qword_14138A6F0, a2: (__int64)v46, a3: (__int64)"EquipmentManager");
  v4 = 195948557;
  if ( (unsigned __int8)sub_1406006A0(a1: v1, a2: v3, a3: 342) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v39, a2: *(_DWORD *)(v3 + 12), a3: *(_DWORD *)(v3 + 8));
  }
  else
  {
    v40 = 0;
    v41 = 195948557;
  }
  v39 = &PXEngine::SafeActorPtrAs<PXEngine::EquipmentManager>::`vftable';
  result = sub_1405F1EE0(a1: (__int64)&v39);
  v6 = result;
  if ( result != 0 )
  {
    sub_1405F1D40(a1: (__int64)v45, a2: a1 + 120);
    v7 = sub_1404882D0(a1: v6, a2: (__int64)v45, a3: 0xCu);
    sub_1405F1D40(a1: (__int64)v46, a2: a1 + 120);
    v8 = sub_1404882D0(a1: v6, a2: (__int64)v46, a3: 0xBu);
    if ( v7 != 0 )
    {
      sub_1405F1D40(a1: (__int64)&v39, a2: v7 + 120);
      if ( (unsigned __int8)sub_1405F1F70(a1: &v39, a2: 101) != 0 )
      {
        sub_1405F1D60(a1: (__int64)&v42, a2: v41, a3: v40);
        v9 = v44;
        v10 = v43;
        goto LABEL_11;
      }
    }
    else
    {
      v43 = 0;
      v44 = 195948557;
    }
    v9 = 195948557;
    v10 = 0;
LABEL_11:
    *(_DWORD *)(a1 + 3192) = v10;
    v42 = &PXEngine::SafeActorPtrAs<CPXPlayerItem>::`vftable';
    *(_DWORD *)(a1 + 3196) = v9;
    if ( v8 != 0 )
    {
      sub_1405F1D40(a1: (__int64)&v39, a2: v8 + 120);
      if ( (unsigned __int8)sub_1405F1F70(a1: &v39, a2: 101) != 0 )
      {
        sub_1405F1D60(a1: (__int64)&v42, a2: v41, a3: v40);
        v11 = v44;
        v12 = v43;
LABEL_16:
        v42 = &PXEngine::SafeActorPtrAs<CPXPlayerItem>::`vftable';
        *(_DWORD *)(a1 + 3208) = v12;
        *(_DWORD *)(a1 + 3212) = v11;
        v13 = qword_14138A6F0;
        if ( qword_14138A6F0 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v14 = sub_1405FD2E0(a1: (_QWORD *)qword_14138A6F0, a2: (__int64)v46, a3: (__int64)"HorseForSaleManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v13, a2: v14, a3: 165) != 0 )
        {
          sub_1405F1D60(a1: (__int64)&v39, a2: *(_DWORD *)(v14 + 12), a3: *(_DWORD *)(v14 + 8));
        }
        else
        {
          v40 = 0;
          v41 = 195948557;
        }
        v39 = &PXEngine::SafeActorPtrAs<CPXHorseManager>::`vftable';
        v15 = sub_1405F1EE0(a1: (__int64)&v39);
        v16 = qword_14138A6F0;
        v17 = v15;
        if ( qword_14138A6F0 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v18 = sub_1405FD2E0(a1: (_QWORD *)qword_14138A6F0, a2: (__int64)v46, a3: (__int64)"PlayerItemManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v16, a2: v18, a3: 163) != 0 )
        {
          sub_1405F1D60(a1: (__int64)&v42, a2: *(_DWORD *)(v18 + 12), a3: *(_DWORD *)(v18 + 8));
        }
        else
        {
          v43 = 0;
          v44 = 195948557;
        }
        v42 = &PXEngine::SafeActorPtrAs<CPXPlayerItemManager>::`vftable';
        result = sub_1405F1EE0(a1: (__int64)&v42);
        v19 = result;
        if ( v17 != 0 && result != 0 )
        {
          v20 = sub_140312350(a1: v17, a2: v46, a3: *(unsigned int *)(a1 + 228), a4: 0);
          result = sub_1405F1EE0(a1: v20);
          v23 = result;
          if ( result != 0 )
          {
            v24 = sub_1401E0840(a1: v19, a2: *(unsigned int *)(result + 380), a3: v21, a4: v22);
            v27 = sub_1401E0840(a1: v19, a2: *(unsigned int *)(v23 + 384), a3: v25, a4: v26);
            v30 = v27;
            if ( v24 != 0 && v27 != 0 )
            {
              v31 = sub_1400AF100(a1: v29, a2: v28);
              v32 = sub_1400AC1A0(a1: v24, a2: 0, a3: 0, a4: 0, a5: 0, a6: -1, a7: 0);
              if ( v32 != 0
                && (sub_1405F1D40(a1: (__int64)&v42, a2: v32 + 120),
                    (unsigned __int8)sub_1406006A0(a1: v31, a2: &v42, a3: 101) != 0) )
              {
                sub_1405F1D60(a1: (__int64)&v39, a2: v44, a3: v43);
                v34 = v41;
                v35 = v40;
              }
              else
              {
                v35 = 0;
                v34 = 195948557;
              }
              *(_DWORD *)(a1 + 3224) = v35;
              *(_DWORD *)(a1 + 3228) = v34;
              v36 = sub_1400AF100(a1: v35, a2: v33);
              v37 = sub_1400AC1A0(a1: v30, a2: 0, a3: 0, a4: 0, a5: 0, a6: -1, a7: 0);
              if ( v37 != 0
                && (sub_1405F1D40(a1: (__int64)&v42, a2: v37 + 120),
                    (unsigned __int8)sub_1406006A0(a1: v36, a2: &v42, a3: 101) != 0) )
              {
                sub_1405F1D60(a1: (__int64)&v39, a2: v44, a3: v43);
                v38 = v40;
                v4 = v41;
              }
              else
              {
                v38 = 0;
              }
              *(_DWORD *)(a1 + 3240) = v38;
              *(_DWORD *)(a1 + 3244) = v4;
            }
            *(_DWORD *)(a1 + 3248) = *(_DWORD *)(v23 + 388);
            result = *(unsigned int *)(v23 + 392);
            *(_DWORD *)(a1 + 3252) = result;
            *(float *)(a1 + 3256) = (float)(int)*(float *)(v23 + 396);
          }
        }
        return result;
      }
    }
    else
    {
      v43 = 0;
      v44 = 195948557;
    }
    v11 = 195948557;
    v12 = 0;
    goto LABEL_16;
  }
  return result;
}