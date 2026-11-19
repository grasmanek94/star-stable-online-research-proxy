__int64 __fastcall sub_1407E02E0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  float v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  char v22; // r15
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r15
  __int64 v41; // r15
  __int64 v42; // rbx
  __int64 v43; // r13
  _QWORD *v44; // rax
  __int64 v45; // r8
  void **v47; // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+5Ch] [rbp-A4h]
  void **v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+68h] [rbp-98h]
  int v52; // [rsp+6Ch] [rbp-94h]
  void **v53; // [rsp+70h] [rbp-90h] BYREF
  int v54; // [rsp+78h] [rbp-88h]
  int v55; // [rsp+7Ch] [rbp-84h]
  void **v56; // [rsp+80h] [rbp-80h] BYREF
  int v57; // [rsp+88h] [rbp-78h]
  int v58; // [rsp+8Ch] [rbp-74h]
  _BYTE v59[16]; // [rsp+90h] [rbp-70h] BYREF
  char v60; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v61[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v62[88]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v63[48]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v64[48]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v65[152]; // [rsp+178h] [rbp+78h] BYREF

  v9 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
  v10 = v9;
  if ( v9 != 0 )
  {
    if ( *(_BYTE *)(v9 + 2012) == 0 && (unsigned __int8)sub_140059CA0(a1: off_140F45C48) != 0 )
      __debugbreak();
    if ( *(_BYTE *)(v10 + 2012) == 120 )
    {
      if ( a3 > 0x2A7B0 )
      {
        switch ( a3 )
        {
          case 0x2A7B1u:
            sub_1407E1A90(a1);
            break;
          case 0x2A7B2u:
            v13 = *(float *)a4;
            v14 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
            if ( v14 != 0 && (LODWORD(v13) != 0) != ((*(_BYTE *)(v14 + 2383) & 4) != 0) && *(_QWORD *)&nExitCode != 0 )
            {
              v62[0] = LODWORD(v13) != 0;
              v62[80] = 3;
              v15 = sub_1407DDE30(a1: &unk_141313D24, a2: v63, a3: v62);
              sub_1407EE6B0(a1: v15);
              sub_1407E2780(a1: v62);
            }
            break;
          case 0x2A7B3u:
            v16 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
            if ( v16 != 0 )
              *(_DWORD *)a4 = (*(_BYTE *)(v16 + 2383) & 4) != 0;
            break;
          case 0x2A7B4u:
            sub_1407DE2A0(a1);
            break;
          case 0x2A7B5u:
            sub_1407E1180(a1);
            break;
          case 0x2A7B6u:
            v17 = sub_1405F1EE0(a1: a1 + 152);
            v18 = v17;
            if ( v17 != 0 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 800LL))(a1: v17) != 0 )
              sub_1400C2A20(a1: v18);
            break;
          case 0x2A7B7u:
            v19 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
            v20 = v19;
            if ( v19 != 0 )
            {
              if ( *(_BYTE *)(v19 + 2012) == 0 && (unsigned __int8)sub_140059CA0(a1: off_140F45C48) != 0 )
                __debugbreak();
              if ( *(_BYTE *)(v20 + 2012) == 120 && *(_QWORD *)&nExitCode != 0 )
              {
                v65[80] = 0;
                v21 = sub_1407DDE30(a1: &unk_141313D24, a2: v64, a3: v65);
                sub_1407EE6B0(a1: v21);
                sub_1407E2780(a1: v65);
              }
            }
            break;
          case 0x2A7B8u:
            *(_DWORD *)a4 = (unsigned __int8)sub_1407DFD70(a1);
            break;
          case 0x2A7B9u:
            sub_1407DF280(a1);
            break;
          case 0x2A7BAu:
            v22 = byte_14138A650;
            byte_14138A650 = *(_DWORD *)a4 != 0;
            v23 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
            v24 = v23;
            if ( v23 != 0 )
            {
              sub_140789CA0(a1: v23, a2: (unsigned __int8)byte_14138A650);
              if ( byte_14138A650 != 0 )
              {
                if ( v22 == 0 )
                {
                  v25 = sub_140786CF0(a1: v24);
                  *(float *)(a1 + 248) = sub_140033B10(a1: v25);
                }
                v26 = v24;
                goto LABEL_46;
              }
              v27 = sub_140786CF0(a1: v24);
              sub_140115130(a1: v27);
            }
            break;
          case 0x2A7BBu:
            *(_DWORD *)a4 = (unsigned __int8)byte_14138A650;
            break;
          case 0x2A7BCu:
          case 0x2A7BEu:
            *(_DWORD *)(a1 + 252) = *(_DWORD *)a4;
            if ( byte_14138A650 != 0 )
            {
              v28 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
              if ( v28 == 0 )
              {
                if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EF78) != 0 )
                  __debugbreak();
                sub_1409E29B8(a1: 999);
                __debugbreak();
              }
              v26 = v28;
LABEL_46:
              v29 = sub_140786CF0(a1: v26);
              sub_140115130(a1: v29);
            }
            break;
          case 0x2A7BDu:
          case 0x2A7BFu:
            v30 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
            v31 = v30;
            if ( v30 != 0 && sub_140786CF0(a1: v30) != 0 )
            {
              v32 = sub_140786CF0(a1: v31);
              *(float *)a4 = sub_140033B10(a1: v32) * 57.29578;
            }
            else
            {
              *(_DWORD *)a4 = *(_DWORD *)(a1 + 252);
            }
            break;
          case 0x2A7C0u:
            v33 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
            if ( v33 != 0 )
            {
              v34 = sub_140081CC0(a1: v33 + 1728, a2: 0);
              sub_140018D50(a1: a4, a2: v34);
            }
            else
            {
              sub_14000D680(a1: a4, a2: &byte_140EEC5C5, a3: 0);
            }
            break;
          case 0x2A7C1u:
            *(_BYTE *)(a1 + 284) = *(_DWORD *)a4 != 0;
            break;
          case 0x2A7C2u:
            *(_DWORD *)a4 = *(unsigned __int8 *)(a1 + 284);
            break;
          case 0x2A7C3u:
            v35 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
            if ( v35 != 0 && (unsigned __int8)sub_1401A07F0(a1: v35) == 120 )
            {
              v37 = *(_QWORD *)a1;
              v38 = sub_1400FBAF0(a1: v36);
              (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(v37 + 776))(a1, a2: 174020, a3: 0, a4: v38);
            }
            break;
          case 0x2A7C6u:
            v39 = sub_140619130(a1: a2);
            v53 = &PXEngine::SafeActorPtr::`vftable';
            v54 = 0;
            v55 = 195948557;
            sub_1405F1D40(a1: v59, a2: a1 + 120);
            v56 = &PXEngine::SafeActorPtr::`vftable';
            v57 = 0;
            v58 = 195948557;
            v40 = sub_1405FD6C0(
                    a1: v39,
                    a2: (unsigned int)&v60,
                    a3: (unsigned int)v59,
                    a4: (unsigned int)"global/Transport_StayOverNight",
                    a5: (__int64)&v56,
                    a6: (__int64)&v53,
                    a7: 0,
                    a8: 0,
                    a9: 0);
            if ( (unsigned __int8)sub_1406006A0(a1: v39, a2: v40, a3: 1) != 0 )
            {
              sub_1405F1D60(a1: &v47, a2: *(unsigned int *)(v40 + 12), a3: *(unsigned int *)(v40 + 8));
            }
            else
            {
              v48 = 0;
              v49 = 195948557;
            }
            v47 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
            v41 = sub_1405F1EE0(a1: (__int64)&v47);
            if ( v41 != 0 )
            {
              v42 = sub_140619130(a1: a2);
              v43 = sub_1405FD2E0(a1: v42, a2: v61, a3: "QuestManager");
              if ( (unsigned __int8)sub_1406006A0(a1: v42, a2: v43, a3: 154) != 0 )
              {
                sub_1405F1D60(a1: &v50, a2: *(unsigned int *)(v43 + 12), a3: *(unsigned int *)(v43 + 8));
              }
              else
              {
                v51 = 0;
                v52 = 195948557;
              }
              v50 = &PXEngine::SafeActorPtrAs<CPXQuestManager>::`vftable';
              v44 = (_QWORD *)sub_1405F1EE0(a1: (__int64)&v50);
              if ( v44 != nullptr )
                sub_1402C2B40(a1: v44, a2: (LPVOID)1, a3: v45);
              sub_1400C29E0(a1: v41);
            }
            break;
          default:
            return sub_1400B2120(a1, a2, a3, a4, a5);
        }
      }
      else
      {
        switch ( a3 )
        {
          case 0x2A7B0u:
            sub_1407DFE40(a1);
            break;
          case 0x9D0Au:
            v11 = *(_QWORD *)(a1 + 256);
            v12 = *(unsigned int *)(a4 + 4);
            if ( v12 < (*(_QWORD *)(a1 + 264) - v11) >> 5 )
              *(_QWORD *)(a4 + 8) = sub_140080FF0(a1: v11 + 32 * v12, a2: 0);
            break;
          case 0x9D0Bu:
            *(_DWORD *)(a1 + 280) = *(_DWORD *)a4;
            break;
          default:
            break;
        }
      }
    }
  }
  return sub_1400B2120(a1, a2, a3, a4, a5);
}