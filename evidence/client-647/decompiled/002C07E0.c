__int64 __fastcall sub_1402C07E0(__int64 *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  _QWORD *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ebx
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // ebx
  unsigned __int8 v37; // cl
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbx
  unsigned __int8 v49; // cl
  int v50; // eax
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  char v57; // bl
  char v58; // bl
  __int64 v59; // rbx
  __int64 v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rax
  char **v63; // rcx
  void **v64; // [rsp+40h] [rbp-39h] BYREF
  int v65; // [rsp+48h] [rbp-31h]
  int v66; // [rsp+4Ch] [rbp-2Dh]
  void **v67; // [rsp+50h] [rbp-29h] BYREF
  int v68; // [rsp+58h] [rbp-21h]
  int v69; // [rsp+5Ch] [rbp-1Dh]
  void **v70; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v71; // [rsp+68h] [rbp-11h]
  unsigned int v72; // [rsp+6Ch] [rbp-Dh]
  _BYTE v73[16]; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v74[48]; // [rsp+80h] [rbp+7h] BYREF

  v3 = a3;
  sub_1405F1D40(a1: &v70, a2: a2 + 120);
  result = sub_1405F1F70(a1: &v70, a2: 123);
  if ( (_BYTE)result != 0 )
  {
    result = sub_1405F1D60(a1: &v64, a2: v72, a3: v71);
  }
  else
  {
    v65 = 0;
    v66 = 195948557;
  }
  v64 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
  if ( (_BYTE)v3 == 0xFF )
  {
    result = sub_140059D90(a1: off_140F65498, a2: "unhandled quest state: time dependency unlocked");
LABEL_110:
    if ( (_BYTE)result != 0 )
      __debugbreak();
  }
  else
  {
    switch ( v3 )
    {
      case 0LL:
      case 9LL:
        sub_1405F1D40(a1: &v70, a2: &v64);
        v70 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
        return sub_1402C45C0(a1, a2: &v70);
      case 1LL:
        v8 = *a1;
        v9 = sub_1400FBAF0(a1: v7);
        result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v8 + 776))(
                   a1,
                   a2: 154031,
                   a3: a2,
                   a4: v9);
        if ( *(_BYTE *)(a2 + 897) >= 0x80u )
          return result;
        if ( *(_BYTE *)(a2 + 160) == 3 )
          return result;
        sub_1405F1D40(a1: &v70, a2: &v64);
        v70 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
        sub_1402C45C0(a1, a2: &v70);
        result = *(unsigned __int8 *)(a2 + 899);
        if ( (result & 4) != 0 )
          return result;
        if ( (result & 0x80u) != 0LL )
        {
          sub_1405F1D40(a1: &v70, a2: a2 + 120);
          if ( (unsigned __int8)sub_1405F1F70(a1: &v70, a2: 123) != 0 )
          {
            sub_1405F1D60(a1: &v67, a2: v72, a3: v71);
          }
          else
          {
            v68 = 0;
            v69 = 195948557;
          }
          v67 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
          sub_1402BD360(a1, a2: &v67);
          return sub_1402C7240(a1);
        }
        if ( (unsigned int)sub_1402710E0(a1: a2) != 0 && sub_1405F1EE0(a1: (__int64)(a1 + 83)) != 0 )
        {
          sub_1405F1D40(a1: &v70, a2: a2 + 120);
          if ( (unsigned __int8)sub_1405F1F70(a1: &v70, a2: 123) != 0 )
          {
            sub_1405F1D60(a1: &v67, a2: v72, a3: v71);
          }
          else
          {
            v68 = 0;
            v69 = 195948557;
          }
          v67 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
          return sub_1402BD300(a1, a2: &v67);
        }
        if ( (*(_BYTE *)(a2 + 899) & 2) != 0 )
        {
          sub_1405F1D40(a1: &v70, a2: a2 + 120);
          if ( (unsigned __int8)sub_1405F1F70(a1: &v70, a2: 123) != 0 )
          {
            sub_1405F1D60(a1: &v67, a2: v72, a3: v71);
          }
          else
          {
            v68 = 0;
            v69 = 195948557;
          }
          v67 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
          return sub_1402BD1E0(a1, a2: &v67);
        }
        v10 = *(_DWORD *)(a2 + 168);
        if ( (*(_BYTE *)(a2 + 896) & 0x30) != 0 )
        {
          v11 = a2 + 120;
          if ( v10 != 0 )
            goto LABEL_35;
          sub_1405F1D40(a1: &v70, a2: v11);
          if ( (unsigned __int8)sub_1405F1F70(a1: &v70, a2: 123) != 0 )
          {
            sub_1405F1D60(a1: &v67, a2: v72, a3: v71);
          }
          else
          {
            v68 = 0;
            v69 = 195948557;
          }
          v67 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
          return sub_1402BD240(a1, a2: &v67);
        }
        else
        {
          if ( v10 != 0 && *(float *)(a2 + 472) > 0.0 )
          {
            v11 = a2 + 120;
LABEL_35:
            sub_1405F1D40(a1: &v70, a2: v11);
            if ( (unsigned __int8)sub_1405F1F70(a1: &v70, a2: 123) != 0 )
            {
              sub_1405F1D60(a1: &v67, a2: v72, a3: v71);
            }
            else
            {
              v68 = 0;
              v69 = 195948557;
            }
            v67 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
            return sub_1402BD2A0(a1, a2: &v67);
          }
          sub_1405F1D40(a1: &v70, a2: a2 + 120);
          if ( (unsigned __int8)sub_1405F1F70(a1: &v70, a2: 123) != 0 )
          {
            sub_1405F1D60(a1: &v67, a2: v72, a3: v71);
          }
          else
          {
            v68 = 0;
            v69 = 195948557;
          }
          v67 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
          return sub_1402BD160(a1, a2: &v67);
        }
      case 2LL:
        if ( *(_QWORD *)&nExitCode == 0 )
          goto LABEL_46;
        v12 = sub_1400AF100();
        v13 = sub_1400D83A0(a1: v12, a2: &v70);
        v14 = sub_1405F1EE0(a1: v13);
        if ( v14 != 0 )
        {
          LODWORD(v67) = *(_DWORD *)(a2 + 16);
          BYTE4(v67) = 2;
          v68 = *(_DWORD *)(a2 + 192);
          v69 = *(_DWORD *)(a2 + 768);
          v15 = sub_1402BD030(a1: &unk_141313C90, a2: v74, a3: &v67);
          sub_1407D6C20(a1: v14, a2: v15);
LABEL_46:
          if ( *(_BYTE *)(a2 + 897) >= 0x80u )
          {
            v26 = *a1;
            v27 = sub_1400FBAF0(a1: v7);
            return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v26 + 776))(
                     a1,
                     a2: 154032,
                     a3: a2,
                     a4: v27);
          }
          if ( *(_BYTE *)(a2 + 160) == 3 )
            goto LABEL_64;
          sub_1405F1D40(a1: &v70, a2: &v64);
          v70 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
          sub_1402C45C0(a1, a2: &v70);
          v16 = sub_14026D880(a1: a2, a2: &v70);
          if ( (unsigned __int8)sub_1405F1E20(a1: v16) == 0 )
            goto LABEL_64;
          v17 = a2 + 120;
          if ( *(char *)(a2 + 899) >= 0 )
          {
            sub_1405F1D40(a1: &v70, a2: v17);
            if ( (unsigned __int8)sub_1405F1F70(a1: &v70, a2: 123) != 0 )
            {
              sub_1405F1D60(a1: &v67, a2: v72, a3: v71);
            }
            else
            {
              v68 = 0;
              v69 = 195948557;
            }
            v67 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
            v18 = (_QWORD *)a1[36];
            if ( v18 != (_QWORD *)a1[37] )
            {
              sub_1405F1D40(a1: a1[36], a2: &v67);
              *v18 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
              a1[36] += 16;
              goto LABEL_63;
            }
            v19 = a1 + 35;
          }
          else
          {
            sub_1405F1D40(a1: &v70, a2: v17);
            if ( (unsigned __int8)sub_1405F1F70(a1: &v70, a2: 123) != 0 )
            {
              sub_1405F1D60(a1: &v67, a2: v72, a3: v71);
            }
            else
            {
              v68 = 0;
              v69 = 195948557;
            }
            v67 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
            v18 = (_QWORD *)a1[41];
            if ( v18 != (_QWORD *)a1[42] )
            {
              sub_1405F1D40(a1: a1[41], a2: &v67);
              *v18 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
              a1[41] += 16;
LABEL_63:
              sub_1402C7240(a1);
LABEL_64:
              v20 = *a1;
              v21 = sub_1400FBAF0(a1: v7);
              (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(v20 + 776))(
                a1,
                a2: 154032,
                a3: a2,
                a4: v21);
              v22 = sub_1400AF100();
              v23 = sub_1401D0B70(a1: v22, a2: v73);
              result = sub_1405F1EE0(a1: v23);
              v24 = result;
              if ( result != 0 && (*(_BYTE *)(a2 + 897) & 1) != 0 )
              {
                sub_140078F50(a1: a2 + 456, a2: &v67, a3: a1 + 27);
                sub_1405F1D40(a1: &v70, a2: a2 + 120);
                v25 = sub_140080FF0(a1: &v67, a2: 0);
                sub_1402DB8A0(a1: v24, a2: 1, a3: v25, a4: 0, a5: (__int64)&v70, a6: 0, a7: 0);
                return sub_1400778C0(a1: &v67);
              }
              return result;
            }
            v19 = a1 + 40;
          }
          sub_1402595C0(a1: v19, a2: v18, a3: &v67);
          goto LABEL_63;
        }
        v63 = off_140F653D8;
        goto LABEL_117;
      case 3LL:
        if ( *(_QWORD *)&nExitCode == 0 )
          goto LABEL_71;
        v28 = sub_1400AF100();
        v29 = sub_1400D83A0(a1: v28, a2: v73);
        v30 = sub_1405F1EE0(a1: v29);
        if ( v30 == 0 )
        {
          v63 = off_140F65420;
LABEL_117:
          if ( (unsigned __int8)sub_140059CA0(a1: v63) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        LODWORD(v67) = *(_DWORD *)(a2 + 16);
        BYTE4(v67) = 3;
        v68 = *(_DWORD *)(a2 + 192);
        v69 = *(_DWORD *)(a2 + 768);
        v31 = sub_1402BD030(a1: &unk_141313C90, a2: v74, a3: &v67);
        sub_1407D6C20(a1: v30, a2: v31);
LABEL_71:
        v32 = *a1;
        v33 = sub_1400FBAF0(a1: v7);
        (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(v32 + 776))(a1, a2: 154033, a3: a2, a4: v33);
        v34 = sub_1400AF100();
        v35 = sub_1401D0B70(a1: v34, a2: v73);
        result = sub_1405F1EE0(a1: v35);
        v36 = result;
        if ( result != 0 )
        {
          v37 = *(_BYTE *)(a2 + 897);
          if ( (v37 & 2) != 0 && v37 < 0x80u )
          {
            sub_140078F50(a1: a2 + 456, a2: &v67, a3: a1 + 31);
            sub_1405F1D40(a1: &v70, a2: a2 + 120);
            v38 = sub_140080FF0(a1: &v67, a2: 0);
            sub_1402DB8A0(a1: v36, a2: 1, a3: v38, a4: 0, a5: (__int64)&v70, a6: 0, a7: 0);
            result = sub_1400778C0(a1: &v67);
          }
        }
        break;
      case 4LL:
        if ( *(_QWORD *)&nExitCode != 0 )
        {
          v39 = sub_1400AF100();
          v40 = sub_1400D83A0(a1: v39, a2: v73);
          v41 = sub_1405F1EE0(a1: v40);
          if ( v41 != 0 )
          {
            LODWORD(v67) = *(_DWORD *)(a2 + 16);
            BYTE4(v67) = 5;
            v68 = *(_DWORD *)(a2 + 192);
            v69 = *(_DWORD *)(a2 + 768);
            v42 = sub_1402BD030(a1: &unk_141313C90, a2: v74, a3: &v67);
            sub_1407D6C20(a1: v41, a2: v42);
          }
        }
        sub_1405F1D40(a1: &v70, a2: &v64);
        v70 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
        sub_1402C45C0(a1, a2: &v70);
        if ( a2 == sub_1405F1EE0(a1: (__int64)(a1 + 38)) )
        {
          sub_1405F1FB0(a1: a1 + 38);
          sub_1402C6730(a1);
        }
        if ( *(char *)(a2 + 899) < 0 && a1[55] == a1[56] && a1[40] == a1[41] )
          sub_1402C7240(a1);
        v44 = *a1;
        v45 = sub_1400FBAF0(a1: v43);
        (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(v44 + 776))(a1, a2: 154034, a3: a2, a4: v45);
        v46 = sub_1400AF100();
        v47 = sub_1401D0B70(a1: v46, a2: v73);
        v48 = sub_1405F1EE0(a1: v47);
        if ( v48 != 0 )
        {
          v49 = *(_BYTE *)(a2 + 897);
          if ( (v49 & 4) != 0 && v49 < 0x80u )
          {
            sub_140078F50(a1: a2 + 456, a2: &v67, a3: a1 + 29);
            sub_1405F1D40(a1: &v70, a2: a2 + 120);
            v50 = sub_140080FF0(a1: &v67, a2: 0);
            sub_1402DB8A0(a1: v48, a2: 1, a3: v50, a4: 0, a5: (__int64)&v70, a6: 0, a7: 0);
            sub_1400778C0(a1: &v67);
          }
        }
        result = sub_140059D90(
                   a1: off_140F65448,
                   a2: "OnQuestState - Quest State Complete - Id: %u",
                   *(_DWORD *)(a2 + 16));
        goto LABEL_110;
      case 5LL:
        v51 = *a1;
        v52 = sub_1400FBAF0(a1: v7);
        (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(v51 + 776))(a1, a2: 154035, a3: a2, a4: v52);
        return sub_140684540(a1: *(_QWORD *)(*(_QWORD *)&nExitCode + 1000LL), a2: 26, a3: 0, a4: a2);
      case 6LL:
        v53 = *a1;
        v54 = sub_1400FBAF0(a1: v7);
        return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v53 + 776))(
                 a1,
                 a2: 154036,
                 a3: a2,
                 a4: v54);
      case 7LL:
        v55 = *a1;
        v56 = sub_1400FBAF0(a1: v7);
        result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v55 + 776))(
                   a1,
                   a2: 154037,
                   a3: a2,
                   a4: v56);
        if ( (*(_BYTE *)(a2 + 898) & 4) != 0 )
        {
          v57 = sub_1402C44F0(a1, a2: &v64, a3: a1 + 35);
          if ( (unsigned __int8)sub_1402C44F0(a1, a2: &v64, a3: a1 + 40) != 0 || v57 != 0 )
            sub_1402C7240(a1);
          result = sub_1405F1EE0(a1: (__int64)(a1 + 38));
          if ( a2 == result )
          {
            sub_1405F1FB0(a1: a1 + 38);
            return sub_1402C6730(a1);
          }
        }
        return result;
      case 8LL:
        v58 = 0;
        if ( (unsigned __int8)sub_1402C44F0(a1, a2: &v64, a3: a1 + 35) != 0 )
        {
          sub_1405F1FB0(a1: a1 + 38);
          v58 = 1;
        }
        result = sub_1402C44F0(a1, a2: &v64, a3: a1 + 40);
        if ( (_BYTE)result != 0 )
        {
          sub_1405F1FB0(a1: a1 + 38);
        }
        else if ( v58 == 0 )
        {
          return result;
        }
        sub_1402C7240(a1);
        return sub_1402C6730(a1);
      case 11LL:
        sub_1405F1D40(a1: &v70, a2: &v64);
        v70 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
        result = sub_1402C45C0(a1, a2: &v70);
        if ( *(_QWORD *)&nExitCode == 0 )
          return result;
        v59 = sub_1400AF100();
        v60 = sub_1405FD2E0(a1: v59, a2: v73, a3: "Network");
        if ( (unsigned __int8)sub_1406006A0(a1: v59, a2: v60, a3: 122) != 0 )
        {
          sub_1405F1D60(a1: &v67, a2: *(unsigned int *)(v60 + 12), a3: *(unsigned int *)(v60 + 8));
        }
        else
        {
          v68 = 0;
          v69 = 195948557;
        }
        v67 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
        v61 = sub_1405F1EE0(a1: (__int64)&v67);
        if ( v61 != 0 )
        {
          LODWORD(v70) = *(_DWORD *)(a2 + 16);
          BYTE4(v70) = 11;
          v71 = *(_DWORD *)(a2 + 192);
          v72 = *(_DWORD *)(a2 + 768);
          v62 = sub_1402BD030(a1: &unk_141313C90, a2: v74, a3: &v70);
          return sub_1407D6C20(a1: v61, a2: v62);
        }
        v63 = off_140F65470;
        goto LABEL_117;
      default:
        return result;
    }
  }
  return result;
}