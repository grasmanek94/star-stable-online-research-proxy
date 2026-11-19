__int64 __fastcall sub_1407DFE40(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  const char *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  bool v13; // cl
  __int64 v14; // rax
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  char v18; // [rsp+60h] [rbp-A0h]
  bool v19; // [rsp+68h] [rbp-98h]
  __int128 v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+80h] [rbp-80h]
  unsigned __int64 v22; // [rsp+88h] [rbp-78h]
  char v23; // [rsp+90h] [rbp-70h]
  char v24; // [rsp+98h] [rbp-68h]
  void **v25; // [rsp+A8h] [rbp-58h] BYREF
  int v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B4h] [rbp-4Ch]
  void **v28; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C4h] [rbp-3Ch]
  _DWORD v31[8]; // [rsp+C8h] [rbp-38h] BYREF
  char v32; // [rsp+E8h] [rbp-18h]
  bool v33; // [rsp+F0h] [rbp-10h]
  char v34; // [rsp+118h] [rbp+18h]
  char v35; // [rsp+120h] [rbp+20h] BYREF

  result = sub_1407DEB00(a1, a2: 0);
  if ( result != 0 )
  {
    v15 = 0;
    v16 = 0;
    v17 = 15;
    LOBYTE(v15) = 0;
    v18 = 0;
    v19 = false;
    sub_1407DEF10(a1, a2: &v20);
    if ( v24 != 0 )
    {
      if ( v23 == -1 )
      {
        if ( v18 != -1 )
        {
          sub_14001B5A0(a1: &v15);
          *(_QWORD *)&v15 = 19937;
          v16 = 0;
          v17 = 31;
        }
        v18 = -1;
      }
      else if ( v23 != 0 )
      {
        if ( v18 != -1 )
        {
          sub_14001B5A0(a1: &v15);
          *(_QWORD *)&v15 = 19937;
          v16 = 0;
          v17 = 31;
        }
        LODWORD(v15) = v20;
        v18 = 1;
      }
      else
      {
        v3 = v17;
        v15 = v20;
        v16 = v21;
        v17 = v22;
        v21 = 0;
        v22 = 15;
        LOBYTE(v20) = 0;
      }
      if ( v24 == 0 || v23 != -1 && v23 == 0 )
        sub_14001B5A0(a1: &v20);
      v6 = sub_1400AF100(a1: v4, a2: v3);
      v7 = sub_1407DEB00(a1, a2: 0);
      v8 = sub_1400A89D0(a1: v6, a2: &v25, a3: v7);
      v28 = &PXEngine::SafeActorPtr::`vftable';
      v29 = *(_DWORD *)(v8 + 8);
      v30 = *(_DWORD *)(v8 + 12);
      v10 = sub_1400AF100(a1: v29, a2: v9);
      v11 = sub_1405FADF0(
              a1: v10,
              a2: (unsigned int)&v35,
              a3: (unsigned int)&v28,
              a4: (unsigned int)"ForceKick",
              a5: -1,
              a6: -1,
              a7: -1,
              a8: 1);
      if ( (unsigned __int8)sub_1405F1F70(a1: v11, a2: 42) != 0 )
      {
        sub_1405F1D60(a1: &v25, a2: *(unsigned int *)(v11 + 12), a3: *(unsigned int *)(v11 + 8));
      }
      else
      {
        v26 = 0;
        v27 = 195948557;
      }
      v25 = &PXEngine::SafeActorPtrAs<CPXButton>::`vftable';
      v12 = sub_1405F1EE0(a1: (__int64)&v25);
      v13 = v12 != 0 && (unsigned int)sub_140149EC0(a1: v12) != 0;
      v19 = v13;
      if ( *(_QWORD *)&nExitCode != 0 )
      {
        v25 = (void **)v31;
        v32 = -1;
        if ( v18 != -1 )
        {
          if ( v18 != 0 )
          {
            v31[0] = v15;
            v32 = 1;
          }
          else
          {
            sub_140016F80(a1: v31, a2: &v15);
            v32 = 0;
            v13 = v19;
          }
        }
        v33 = v13;
        v34 = 1;
        v14 = sub_1407DDE30(a1: &unk_141313D24, a2: &v20, a3: v31);
        sub_1407EE6B0(a1: v14);
        sub_1407E2780(a1: v31);
        return sub_1407DDB80(a1: &v15);
      }
      else
      {
        return sub_1407DDB80(a1: &v15);
      }
    }
    else
    {
      v5 = (const char *)&v20;
      if ( v22 > 0xF )
        v5 = (const char *)v20;
      if ( (unsigned __int8)sub_140059D90(a1: off_141017158, a2: "%s", v5) != 0 )
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
      result = v18 + 1LL;
      if ( v18 != -1 )
        return sub_14001B5A0(a1: &v15);
    }
  }
  return result;
}