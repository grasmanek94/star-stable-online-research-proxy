__int64 __fastcall sub_1402D90C0(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  _BYTE v21[16]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-39h] BYREF
  _DWORD v23[2]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v24; // [rsp+68h] [rbp-21h]
  __int64 v25; // [rsp+70h] [rbp-19h]
  int v26; // [rsp+78h] [rbp-11h]
  _BYTE v27[48]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v28; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v29; // [rsp+100h] [rbp+77h] BYREF

  result = sub_1405F1EE0(a1: a1 + 544);
  v5 = result;
  if ( result != 0 && (*(_BYTE *)(result + 440) & 0x40) != 0 )
  {
    sub_1402CF940(a1: result, a2: v21);
    result = sub_1405F1EE0(a1: (__int64)v21);
    if ( result != 0 )
    {
      if ( qword_14138A6F0 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v6 = sub_1405FADF0(
             a1: qword_14138A6F0,
             a2: (unsigned int)v22,
             a3: (unsigned int)v21,
             a4: (unsigned int)"PlayerHomePosition",
             a5: -1,
             a6: -1,
             a7: -1,
             a8: 1);
      v28 = sub_1405F1EE0(a1: v6);
      if ( qword_14138A6F0 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v7 = sub_1405FADF0(
             a1: qword_14138A6F0,
             a2: (unsigned int)v22,
             a3: (unsigned int)v21,
             a4: (unsigned int)"HorseHomePosition",
             a5: -1,
             a6: -1,
             a7: -1,
             a8: 1);
      result = sub_1405F1EE0(a1: v7);
      v29 = result;
      if ( v28 != 0 && result != 0 )
      {
        v8 = (_QWORD *)sub_1405F1EE0(a1: (__int64)&off_141310F50);
        v10 = v8;
        if ( v8 != nullptr )
        {
          v11 = *v8;
          v12 = sub_1400FBAF0(a1: v9);
          (*(void (__fastcall **)(_QWORD *, __int64, __int64 *, __int64, __int64))(v11 + 24))(
            a1: v10,
            a2: 1036,
            a3: &v29,
            a4: a1,
            a5: v12);
        }
        result = sub_1405F1EE0(a1: (__int64)&off_141313B68);
        v14 = result;
        if ( result == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EF78) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        if ( *(_BYTE *)(result + 252) != 19 )
        {
          v15 = *(_QWORD *)result;
          v16 = sub_1400FBAF0(a1: v13);
          result = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64, __int64))(v15 + 24))(
                     a1: v14,
                     a2: 1036,
                     a3: &v28,
                     a4: a1,
                     a5: v16);
        }
        if ( a2 != 0 )
        {
          sub_1405F1D40(a1: v22, a2: a1 + 544);
          v22[0] = &PXEngine::SafeActorPtrAs<CPXLocation>::`vftable';
          return sub_1402D4AB0(a1, a2: (__int64)v22, a3: 1);
        }
        else if ( *(_QWORD *)&nExitCode != 0 )
        {
          v17 = sub_1400AF100();
          v18 = sub_1400D83A0(a1: v17, a2: v22);
          result = sub_1405F1EE0(a1: v18);
          v19 = result;
          if ( result != 0 )
          {
            v23[1] = *(_DWORD *)(v5 + 16);
            v23[0] = 0;
            v24 = 0;
            v25 = 0;
            v26 = 0;
            v20 = sub_1402D47D0(a1: &unk_141313C7C, a2: v27, a3: v23);
            return sub_1407D6C20(a1: v19, a2: v20);
          }
        }
      }
    }
  }
  return result;
}