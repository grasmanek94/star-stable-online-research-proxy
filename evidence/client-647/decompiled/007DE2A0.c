__int64 __fastcall sub_1407DE2A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // ecx
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rbx
  const char *v9; // r8
  bool v10; // cl
  __int64 v11; // rax
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h]
  __int64 v14; // [rsp+58h] [rbp-A8h]
  char v15; // [rsp+60h] [rbp-A0h]
  bool v16; // [rsp+68h] [rbp-98h]
  void **v17; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+7Ch] [rbp-84h]
  __int128 v20; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h]
  unsigned __int64 v22; // [rsp+98h] [rbp-68h]
  char v23; // [rsp+A0h] [rbp-60h]
  char v24; // [rsp+A8h] [rbp-58h]
  _BYTE v25[8]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+C0h] [rbp-40h]
  unsigned int v27; // [rsp+C4h] [rbp-3Ch]
  void **v28; // [rsp+C8h] [rbp-38h] BYREF
  int v29; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D4h] [rbp-2Ch]
  _DWORD v31[8]; // [rsp+D8h] [rbp-28h] BYREF
  char v32; // [rsp+F8h] [rbp-8h]
  bool v33; // [rsp+100h] [rbp+0h]
  char v34; // [rsp+128h] [rbp+28h]

  result = sub_1407DEB00(a1, a2: 0);
  if ( result != 0 )
  {
    v3 = qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v4 = sub_1407DEB00(a1, a2: 0);
    if ( v4 != 0 && (sub_1405F1D40(a1: v25, a2: v4 + 120), (unsigned __int8)sub_1406006A0(a1: v3, a2: v25, a3: 1) != 0) )
    {
      sub_1405F1D60(a1: &v17, a2: v27, a3: v26);
      v5 = v19;
      v6 = v18;
    }
    else
    {
      v6 = 0;
      v5 = 195948557;
    }
    v17 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
    v28 = &PXEngine::SafeActorPtr::`vftable';
    v29 = v6;
    v30 = v5;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v7 = sub_1405FADF0(
           a1: qword_14138A6F0,
           a2: (unsigned int)v25,
           a3: (unsigned int)&v28,
           a4: (unsigned int)"ButtonState",
           a5: -1,
           a6: -1,
           a7: -1,
           a8: 1);
    if ( (unsigned __int8)sub_1405F1F70(a1: v7, a2: 91) != 0 )
    {
      sub_1405F1D60(a1: &v17, a2: *(unsigned int *)(v7 + 12), a3: *(unsigned int *)(v7 + 8));
    }
    else
    {
      v18 = 0;
      v19 = 195948557;
    }
    v17 = &PXEngine::SafeActorPtrAs<CPXData>::`vftable';
    result = sub_1405F1EE0(a1: (__int64)&v17);
    v8 = result;
    if ( result != 0 )
    {
      v12 = 0;
      v13 = 0;
      v14 = 15;
      LOBYTE(v12) = 0;
      v15 = 0;
      v16 = false;
      sub_1407DEF10(a1, a2: &v20);
      if ( v24 != 0 )
      {
        if ( v23 == -1 )
        {
          if ( v15 != -1 )
          {
            sub_14001B5A0(a1: &v12);
            *(_QWORD *)&v12 = 19937;
            v13 = 0;
            v14 = 31;
          }
          v15 = -1;
        }
        else if ( v23 != 0 )
        {
          if ( v15 != -1 )
          {
            sub_14001B5A0(a1: &v12);
            *(_QWORD *)&v12 = 19937;
            v13 = 0;
            v14 = 31;
          }
          LODWORD(v12) = v20;
          v15 = 1;
        }
        else
        {
          v12 = v20;
          v13 = v21;
          v14 = v22;
          v21 = 0;
          v22 = 15;
          LOBYTE(v20) = 0;
        }
        if ( v24 != 0 )
          sub_1407DDB80(a1: &v20);
        else
          sub_14001B5A0(a1: &v20);
        v10 = (unsigned int)sub_14007FDC0(a1: v8 + 152, a2: 0) != 0;
        v16 = v10;
        if ( *(_QWORD *)&nExitCode != 0 )
        {
          v17 = (void **)v31;
          v32 = -1;
          if ( v15 != -1 )
          {
            if ( v15 != 0 )
            {
              v31[0] = v12;
              v32 = 1;
            }
            else
            {
              sub_140016F80(a1: v31, a2: &v12);
              v32 = 0;
              v10 = v16;
            }
          }
          v33 = v10;
          v34 = 4;
          v11 = sub_1407DDE30(a1: &unk_141313D24, a2: &v20, a3: v31);
          sub_1407EE6B0(a1: v11);
          sub_1407E2780(a1: v31);
        }
        return sub_1407DDB80(a1: &v12);
      }
      else
      {
        v9 = (const char *)&v20;
        if ( v22 > 0xF )
          v9 = (const char *)v20;
        if ( (unsigned __int8)sub_140059D90(a1: off_141017218, a2: "%s", v9) != 0 )
          __debugbreak();
        if ( v24 != 0 )
        {
          if ( v23 != -1 && v23 == 0 )
          {
            sub_14001B5A0(a1: &v20);
            *(_QWORD *)&v20 = 19937;
            v21 = 0;
            v22 = 31;
          }
          v23 = -1;
        }
        else
        {
          sub_14001B5A0(a1: &v20);
          *(_QWORD *)&v20 = 19937;
          v21 = 0;
          v22 = 31;
        }
        result = v15 + 1LL;
        if ( v15 != -1 )
          return sub_14001B5A0(a1: &v12);
      }
    }
  }
  return result;
}