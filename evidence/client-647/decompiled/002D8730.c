__int64 __fastcall sub_1402D8730(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  void **v16; // [rsp+40h] [rbp-79h] BYREF
  int v17; // [rsp+48h] [rbp-71h]
  int v18; // [rsp+4Ch] [rbp-6Dh]
  _QWORD v19[3]; // [rsp+50h] [rbp-69h] BYREF
  int v20; // [rsp+68h] [rbp-51h]
  _BYTE v21[16]; // [rsp+70h] [rbp-49h] BYREF
  __int16 v22; // [rsp+80h] [rbp-39h]
  _BYTE v23[32]; // [rsp+88h] [rbp-31h] BYREF
  __int16 v24; // [rsp+A8h] [rbp-11h] BYREF
  _BYTE v25[32]; // [rsp+B0h] [rbp-9h] BYREF
  char v26; // [rsp+D0h] [rbp+17h]
  int v27; // [rsp+130h] [rbp+77h] BYREF

  result = sub_1405F1EE0(a1: a2);
  v5 = result;
  if ( result == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F69208) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  if ( (*(_BYTE *)(result + 440) & 0x40) != 0 )
  {
    result = *((unsigned int *)a1 + 135);
    if ( *(_DWORD *)(v5 + 16) != (_DWORD)result )
    {
      sub_1402CF940(a1: v5, a2: v21);
      if ( sub_1405F1EE0(a1: (__int64)v21) == 0 )
        goto LABEL_18;
      if ( qword_14138A6F0 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v7 = sub_1405FADF0(
             a1: qword_14138A6F0,
             a2: (unsigned int)&v16,
             a3: (unsigned int)v21,
             a4: (unsigned int)"PlayerHomePosition",
             a5: -1,
             a6: -1,
             a7: -1,
             a8: 1);
      v8 = sub_1405F1EE0(a1: v7);
      if ( qword_14138A6F0 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v9 = sub_1405FADF0(
             a1: qword_14138A6F0,
             a2: (unsigned int)&v16,
             a3: (unsigned int)v21,
             a4: (unsigned int)"HorseHomePosition",
             a5: -1,
             a6: -1,
             a7: -1,
             a8: 1);
      v10 = sub_1405F1EE0(a1: v9);
      if ( v8 != 0 && v10 != 0 )
      {
        sub_1405F1D80(a1: a1 + 68, a2);
        result = *(unsigned int *)(v5 + 16);
        *((_DWORD *)a1 + 135) = result;
        if ( *(_QWORD *)&nExitCode != 0 )
        {
          v11 = sub_1400AF100();
          v12 = sub_1405FD2E0(a1: v11, a2: v19, a3: "Network");
          if ( (unsigned __int8)sub_1406006A0(a1: v11, a2: v12, a3: 122) != 0 )
          {
            sub_1405F1D60(a1: &v16, a2: *(unsigned int *)(v12 + 12), a3: *(unsigned int *)(v12 + 8));
          }
          else
          {
            v17 = 0;
            v18 = 195948557;
          }
          v16 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
          result = sub_1405F1EE0(a1: (__int64)&v16);
          v13 = result;
          if ( result != 0 )
          {
            v19[1] = 0;
            v19[2] = 0;
            v20 = 0;
            v19[0] = &PXEngine::ByteStreamWriter::`vftable';
            v27 = *((_DWORD *)a1 + 135);
            if ( sub_1401D0820(a1: v19, a2: &v27) != 0 )
            {
              *((_DWORD *)a1 + 135) = v27;
              v22 = word_141313C6C;
              sub_140A255B0(a1: v23, a2: v19);
              v24 = v22;
              sub_140A255B0(a1: v25, a2: v23);
              v26 = 1;
              sub_140A25690(a1: v23);
            }
            else
            {
              v26 = 0;
            }
            sub_140A25690(a1: v19);
            return sub_1407D6C20(a1: v13, a2: &v24);
          }
        }
      }
      else
      {
LABEL_18:
        v14 = *a1;
        v15 = sub_1400FBAF0(a1: v6);
        return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v14 + 776))(
                 a1,
                 a2: 159026,
                 a3: 0,
                 a4: v15);
      }
    }
  }
  return result;
}