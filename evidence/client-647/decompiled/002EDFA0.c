__int64 __fastcall sub_1402EDFA0(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r8
  _DWORD *v12; // r15
  __int64 v13; // r8
  __int64 v14; // rax
  _DWORD *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  char (__fastcall *v23)(__int64, __int64, __int64); // r9
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  char v27; // al
  char **v28; // rcx
  char **v29; // rcx
  void **v30; // [rsp+20h] [rbp-89h] BYREF
  _DWORD v31[2]; // [rsp+28h] [rbp-81h] BYREF
  _QWORD v32[3]; // [rsp+30h] [rbp-79h] BYREF
  int v33; // [rsp+48h] [rbp-61h]
  _BYTE v34[16]; // [rsp+50h] [rbp-59h] BYREF
  __int16 v35; // [rsp+60h] [rbp-49h]
  _BYTE v36[32]; // [rsp+68h] [rbp-41h] BYREF
  __int16 v37; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v38[32]; // [rsp+90h] [rbp-19h] BYREF
  char v39; // [rsp+B0h] [rbp+7h]
  int v40; // [rsp+120h] [rbp+77h] BYREF

  result = sub_1402EDDA0();
  if ( (_BYTE)result != 0 )
  {
    result = sub_1405F1EE0(a1: (__int64)&off_141313B68);
    v5 = result;
    if ( result != 0 )
    {
      v6 = sub_14005D330();
      result = sub_1405F1EE0(a1: v5 + 1608);
      v7 = result;
      if ( result != 0 )
      {
        result = sub_140645790(a1: result, a2: 120, a3: v6);
        if ( (_BYTE)result != 0 )
        {
          if ( *(_BYTE *)(v7 + 312) != 0 )
          {
            v8 = qword_14138A6F0;
            if ( qword_14138A6F0 != 0 )
            {
              v9 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v32, a3: "EquipmentManager");
              if ( (unsigned __int8)sub_1406006A0(a1: v8, a2: v9, a3: 342) != 0 )
              {
                sub_1405F1D60(a1: &v30, a2: *(unsigned int *)(v9 + 12), a3: *(unsigned int *)(v9 + 8));
              }
              else
              {
                v31[0] = 0;
                v31[1] = 195948557;
              }
              v30 = &PXEngine::SafeActorPtrAs<PXEngine::EquipmentManager>::`vftable';
              v10 = sub_1405F1EE0(a1: (__int64)&v30);
              if ( v10 != 0 )
              {
                sub_1405F1D40(a1: v34, a2: v7 + 120);
                LOBYTE(v11) = 12;
                v12 = (_DWORD *)sub_1404882D0(a1: v10, a2: v34, a3: v11);
                sub_1405F1D40(a1: v32, a2: v7 + 120);
                LOBYTE(v13) = 11;
                v14 = sub_1404882D0(a1: v10, a2: v32, a3: v13);
                v15 = (_DWORD *)v14;
                if ( v12 != nullptr )
                {
                  if ( v14 != 0 )
                  {
                    byte_141310980 = 0;
                    v16 = sub_1405F1EE0(a1: (__int64)(a1 + 54));
                    if ( v16 != 0 )
                    {
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 232LL))(a1: v16);
                      v17 = sub_1405F1EE0(a1: (__int64)(a1 + 56));
                      if ( v17 != 0 )
                      {
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 232LL))(a1: v17);
                        sub_1405F1FB0(a1: a1 + 54);
                        sub_1405F1FB0(a1: a1 + 56);
                        v18 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 176LL))(a1: v12);
                        v19 = sub_140152350(a1, a2: v18);
                        v20 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 176LL))(a1: v15);
                        v21 = sub_140152350(a1, a2: v20);
                        if ( v19 != 0 )
                        {
                          if ( v21 != 0 )
                          {
                            v12[4] = *(_DWORD *)(v19 + 16);
                            v15[4] = *(_DWORD *)(v21 + 16);
                            sub_1401FDEC0(a1: v7);
                            sub_1401F4260(a1: v7);
                            v22 = sub_1402F0630();
                            LODWORD(v30) = v12[4];
                            HIDWORD(v30) = v15[4];
                            LOBYTE(v31[0]) = a2 != 0;
                            v32[1] = 0;
                            v32[2] = 0;
                            v33 = 0;
                            v32[0] = &PXEngine::ByteStreamWriter::`vftable';
                            v40 = (int)v30;
                            if ( sub_1401D0820(a1: v32, a2: &v40) != 0 )
                            {
                              LODWORD(v30) = v40;
                              v40 = HIDWORD(v30);
                              if ( sub_1401D0820(a1: v32, a2: &v40) != 0 )
                              {
                                HIDWORD(v30) = v40;
                                v23 = *(char (__fastcall **)(__int64, __int64, __int64))(v32[0] + 16LL);
                                if ( v23 == sub_1401F6C10 )
                                {
                                  sub_140A25890(a1: v32, a2: v31, a3: 1);
LABEL_22:
                                  v35 = word_141313D4C;
                                  sub_140A255B0(a1: v36, a2: v32);
                                  v37 = v35;
                                  sub_140A255B0(a1: v38, a2: v36);
                                  v39 = 1;
                                  sub_140A25690(a1: v36);
LABEL_24:
                                  sub_140A25690(a1: v32);
                                  sub_1407D6C20(a1: v22, a2: &v37);
                                  v24 = *a1;
                                  v26 = sub_1400FBAF0(a1: v25);
                                  return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v24 + 776))(
                                           a1,
                                           a2: 163033,
                                           a3: 0,
                                           a4: v26);
                                }
                                if ( v23(a1: (__int64)v32, a2: (__int64)v31, a3: 1) != 0 )
                                  goto LABEL_22;
                              }
                            }
                            v39 = 0;
                            goto LABEL_24;
                          }
                          v29 = off_140F6D418;
                        }
                        else
                        {
                          v29 = off_140F6D3E0;
                        }
                      }
                      else
                      {
                        v29 = off_140F402E0;
                      }
                    }
                    else
                    {
                      v29 = off_140F402E0;
                    }
                    v27 = sub_140059CA0(a1: v29);
                  }
                  else
                  {
                    v27 = sub_140059D90(
                            a1: off_140F6D3B8,
                            a2: "ChangeHorseAppearanceEnd - Failed to get equipped horse hair item");
                  }
                }
                else
                {
                  v27 = sub_140059D90(
                          a1: off_140F6D390,
                          a2: "ChangeHorseAppearanceEnd - Failed to get equipped horse body item");
                }
LABEL_40:
                if ( v27 != 0 )
                  __debugbreak();
                sub_1409E29B8(a1: 999);
                __debugbreak();
              }
              v28 = off_140F40268;
            }
            else
            {
              v28 = off_140F35058;
            }
            if ( (unsigned __int8)sub_140059CA0(a1: v28) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
            __debugbreak();
          }
          v27 = sub_140059D90(
                  a1: off_140F6D338,
                  a2: "ChangeHorseAppearanceEnd - Tried to purchase horse appearance change with another breed that isn't a starter horse");
          goto LABEL_40;
        }
      }
    }
  }
  return result;
}