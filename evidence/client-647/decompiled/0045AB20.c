__int64 __fastcall sub_14045AB20(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edx
  __int64 v4; // r8
  __int64 i; // rcx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // ebx
  int v20; // eax
  __int64 (__fastcall *v21)(); // rdx
  char **v22; // rcx
  _QWORD v23[3]; // [rsp+40h] [rbp-49h] BYREF
  int v24; // [rsp+58h] [rbp-31h]
  __int16 v25; // [rsp+60h] [rbp-29h]
  _BYTE v26[32]; // [rsp+68h] [rbp-21h] BYREF
  __int16 v27; // [rsp+88h] [rbp-1h] BYREF
  char v28[32]; // [rsp+90h] [rbp+7h] BYREF
  char v29; // [rsp+B0h] [rbp+27h]
  int v30; // [rsp+F0h] [rbp+67h] BYREF
  int v31; // [rsp+F8h] [rbp+6Fh] BYREF

  result = *(_QWORD *)(a1 + 1176);
  if ( result != 0 )
  {
    v3 = *(_DWORD *)(a1 + 1192);
    if ( v3 != -1 && v3 != *(_DWORD *)(result + 268) )
    {
      v4 = *(_QWORD *)result;
      result = *(_QWORD *)(*(_QWORD *)result + 8LL);
      for ( i = v4; *(_BYTE *)(result + 25) == 0; result = *(_QWORD *)result )
      {
        if ( *(_DWORD *)(result + 32) >= v3 )
          i = result;
        else
          result += 16;
      }
      if ( *(_BYTE *)(i + 25) == 0 && v3 >= *(_DWORD *)(i + 32) && i != v4 )
      {
        v6 = *(_QWORD *)(i + 40);
        if ( v6 != 0 )
        {
          v30 = *(_DWORD *)(v6 + 24);
          v7 = (_QWORD *)sub_1405F1EE0(a1: a1 + 664);
          v9 = v7;
          if ( v7 != nullptr )
          {
            v10 = *v7;
            v11 = sub_1400FBAF0(a1: v8);
            (*(void (__fastcall **)(_QWORD *, __int64, int *, _QWORD, __int64))(v10 + 24))(
              a1: v9,
              a2: 111005,
              a3: &v30,
              a4: 0,
              a5: v11);
          }
          result = *(unsigned int *)(v6 + 24);
          if ( v30 != (_DWORD)result )
          {
            v12 = *(_QWORD *)(a1 + 1176);
            if ( v12 == 0 )
              goto LABEL_20;
            v13 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
            if ( v13 == 0 )
            {
              v22 = off_140F4EF78;
              goto LABEL_34;
            }
            v14 = sub_1404533A0(a1: v12, a2: *(unsigned int *)(v13 + 1720));
            if ( v14 != 0 )
              v15 = *(_DWORD *)(v14 + 24);
            else
LABEL_20:
              v15 = 0;
            v16 = sub_1400AF100();
            v17 = sub_1403C3C80(a1: v16, a2: v23);
            v18 = sub_1405F1EE0(a1: v17);
            if ( v18 != 0 )
            {
              sub_14060F030(
                a1: v18,
                a2: "ClubMemberRoleChanged",
                a3: *(unsigned int *)(*(_QWORD *)(a1 + 1176) + 264LL),
                a4: v15,
                a5: *(_DWORD *)(v6 + 16),
                a6: *(_DWORD *)(v6 + 24),
                a7: v30);
              v19 = v30;
              v20 = *(_DWORD *)(a1 + 1192);
              v23[1] = 0;
              v23[2] = 0;
              v24 = 0;
              v23[0] = &PXEngine::ByteStreamWriter::`vftable';
              v31 = v20;
              if ( sub_1401D0820(a1: v23, a2: &v31) != 0 )
              {
                v21 = *(__int64 (__fastcall **)())(v23[0] + 8LL);
                if ( v21 == sub_14001A530 || ((unsigned __int8 (__fastcall *)(_QWORD *))v21)(a1: v23) == 0 )
                {
                  v31 = v19;
                  if ( sub_1401D0820(a1: v23, a2: &v31) == 0 )
                    goto LABEL_26;
                }
                else
                {
                  v31 = 0;
                  if ( sub_1401D0820(a1: v23, a2: &v31) == 0 )
                    goto LABEL_26;
                }
                v25 = word_141313CC8;
                sub_140A255B0(a1: v26, a2: v23);
                v27 = v25;
                sub_140A255B0(a1: v28, a2: v26);
                v29 = 1;
                sub_140A25690(a1: v26);
                goto LABEL_27;
              }
LABEL_26:
              v29 = 0;
LABEL_27:
              sub_140A25690(a1: v23);
              return sub_1407EE6B0(a1: &v27);
            }
            v22 = off_140F99110;
LABEL_34:
            if ( (unsigned __int8)sub_140059CA0(a1: v22) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
            __debugbreak();
          }
        }
      }
    }
  }
  return result;
}