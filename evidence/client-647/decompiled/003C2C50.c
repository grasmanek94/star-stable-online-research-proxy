unsigned int *__fastcall sub_1403C2C50(__int64 a1, unsigned int **a2)
{
  unsigned int *result; // rax
  unsigned int *v3; // rsi
  __int16 v4; // bx
  unsigned int v5; // r14d
  unsigned int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  int v15; // r14d
  float v16; // xmm7_4
  float v17; // xmm6_4
  unsigned int v18; // edi
  int v19; // [rsp+28h] [rbp-E0h]
  int v20; // [rsp+38h] [rbp-D0h]
  _DWORD v21[4]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp-A0h] BYREF
  int v23; // [rsp+80h] [rbp-88h]
  _QWORD v24[2]; // [rsp+88h] [rbp-80h] BYREF
  char v25[8]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp-68h]
  unsigned int v27; // [rsp+A4h] [rbp-64h]
  __int16 v28; // [rsp+B0h] [rbp-58h]
  _BYTE v29[32]; // [rsp+B8h] [rbp-50h] BYREF
  __int16 v30; // [rsp+D8h] [rbp-30h] BYREF
  char v31[32]; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v32; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+170h] [rbp+68h] BYREF
  __int64 v34; // [rsp+178h] [rbp+70h]
  unsigned int v35; // [rsp+180h] [rbp+78h] BYREF
  unsigned int *v36; // [rsp+188h] [rbp+80h]

  result = (unsigned int *)&retaddr;
  v34 = a1;
  v3 = *a2;
  v36 = a2[1];
  if ( v3 != v36 )
  {
    v4 = word_141313D78;
    result = v36;
    do
    {
      if ( v3[5] != 0 )
      {
        v5 = v3[1];
        v35 = v5;
        if ( (unsigned __int8)sub_1403C3870(a1, a2: v5, a3: v3[2], a4: v3[3]) != 0 )
        {
          v7 = sub_14005D330();
          v8 = sub_14078A2B0();
          v9 = sub_1405F1EE0(a1: v8 + 1608);
          v10 = v9;
          if ( v9 != 0 && (unsigned __int8)sub_140645790(a1: v9, a2: 120, a3: v7) != 0 )
          {
            LOBYTE(v11) = 1;
            if ( *(_DWORD *)sub_1401E09C0(a1: v10, a2: v11) != *v3 )
              v10 = 0;
            if ( v10 != 0 )
              goto LABEL_19;
          }
          v12 = sub_1405F1EE0(a1: (__int64)&off_141311CD0);
          v10 = 0;
          if ( v12 != 0 )
            v10 = sub_14034FB90(a1: v12, a2: *v3);
          if ( v10 != 0 )
          {
LABEL_19:
            if ( v5 < 2 )
            {
              v21[0] = v3[2];
              v21[1] = v3[3];
              v21[2] = 1;
              LOBYTE(v20) = 1;
              LOBYTE(v19) = 1;
              (*(void (__fastcall **)(__int64, __int64, _QWORD, _DWORD *, int, _QWORD, int))(*(_QWORD *)v10 + 1056LL))(
                a1: v10,
                a2: 2,
                a3: 0,
                a4: v21,
                a5: v19,
                a6: 0,
                a7: v20);
            }
            else if ( v5 == 2 )
            {
              sub_1401D58F0(a1: v10, a2: v3[2]);
            }
            v13 = v3[3];
            v14 = v3[2];
            v15 = 0;
            if ( v35 != 0 )
            {
              if ( v35 == 1 )
              {
                switch ( v14 )
                {
                  case 5u:
                    v15 = 1;
                    break;
                  case 6u:
                    v15 = 3;
                    break;
                  case 7u:
                    v15 = 2;
                    break;
                  default:
                    break;
                }
              }
              else if ( v35 == 2 )
              {
                v15 = v3[2];
              }
            }
            else if ( v14 == 4 )
            {
              switch ( v13 )
              {
                case 1u:
                  v15 = 1;
                  break;
                case 2u:
                  v15 = 2;
                  break;
                case 3u:
                  v15 = 3;
                  break;
                default:
                  break;
              }
            }
            v16 = (float)(int)v3[4];
            v17 = (float)(int)v3[5];
            v18 = *v3;
            sub_1405F1D40(a1: v25, a2: v10 + 120);
            sub_1405F1D60(a1: v24, a2: v27, a3: v26);
            v24[0] = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
            sub_1403C18B0(
              a1: v34,
              a2: (unsigned int)v24,
              a3: v18,
              a4: v35,
              a5: v14,
              a6: v13,
              a7: LODWORD(v17),
              a8: LODWORD(v16),
              a9: v15);
          }
        }
        else if ( *(_QWORD *)&nExitCode != 0 )
        {
          v6 = *v3;
          v22[1] = 0;
          v22[2] = 0;
          v23 = 0;
          v22[0] = &PXEngine::ByteStreamWriter::`vftable';
          v35 = v6;
          if ( sub_1401D0820(a1: v22, a2: &v35) != 0 && (v35 = v5, sub_1401D0820(a1: v22, a2: &v35) != 0) )
          {
            v28 = v4;
            sub_140A255B0(a1: v29, a2: v22);
            v30 = v28;
            sub_140A255B0(a1: v31, a2: v29);
            LOBYTE(v32) = 1;
            sub_140A25690(a1: v29);
          }
          else
          {
            LOBYTE(v32) = 0;
          }
          sub_140A25690(a1: v22);
          sub_1407EE6B0(a1: &v30);
        }
        a1 = v34;
        result = v36;
      }
      v3 += 6;
    }
    while ( v3 != result );
  }
  return result;
}