__int64 __fastcall sub_1407DF280(__int64 a1)
{
  __int64 result; // rax
  const char *v3; // r8
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int128 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v26; // [rsp+58h] [rbp-A8h]
  char v27; // [rsp+60h] [rbp-A0h]
  char v28; // [rsp+68h] [rbp-98h]
  void **v29; // [rsp+78h] [rbp-88h] BYREF
  int v30; // [rsp+80h] [rbp-80h]
  int v31; // [rsp+84h] [rbp-7Ch]
  void **v32; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+94h] [rbp-6Ch]
  _QWORD v35[2]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v36[8]; // [rsp+A8h] [rbp-58h] BYREF
  char v37; // [rsp+C8h] [rbp-38h]
  _BYTE v38[48]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v39; // [rsp+100h] [rbp+0h] BYREF
  __int64 v40; // [rsp+110h] [rbp+10h]
  unsigned __int64 v41; // [rsp+118h] [rbp+18h]
  char v42; // [rsp+120h] [rbp+20h]
  __int128 v43; // [rsp+128h] [rbp+28h] BYREF
  __int64 v44; // [rsp+138h] [rbp+38h]
  unsigned __int64 v45; // [rsp+140h] [rbp+40h]
  bool v46; // [rsp+148h] [rbp+48h]

  result = sub_1407DEB00(a1, a2: 0);
  if ( result != 0 )
  {
    v39 = 0;
    v40 = 0;
    v41 = 15;
    LOBYTE(v39) = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 15;
    LOBYTE(v43) = 0;
    v46 = false;
    sub_1407DEF10(a1, a2: &v24);
    if ( v28 != 0 )
    {
      if ( v27 == -1 )
      {
        if ( v42 != -1 && v42 == 0 )
        {
          sub_14001B5A0(a1: &v39);
          *(_QWORD *)&v39 = 19937;
          v40 = 0;
          v41 = 31;
        }
        v42 = -1;
      }
      else if ( v27 != 0 )
      {
        if ( v42 == 1 )
        {
          LODWORD(v39) = v24;
        }
        else
        {
          if ( v42 != -1 && v42 == 0 )
          {
            sub_14001B5A0(a1: &v39);
            *(_QWORD *)&v39 = 19937;
            v40 = 0;
            v41 = 31;
          }
          LODWORD(v39) = v24;
          v42 = 1;
        }
      }
      else if ( v42 != 0 )
      {
        v39 = v24;
        v40 = v25;
        v41 = v26;
        v25 = 0;
        v26 = 15;
        LOBYTE(v24) = 0;
        v42 = 0;
      }
      else
      {
        if ( v41 > 0xF )
        {
          v5 = (void *)v39;
          if ( v41 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v39 - *(_QWORD *)(v39 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v5 = *(void **)(v39 - 8);
          }
          sub_1409DB4C0(lpMem: v5);
        }
        v39 = v24;
        v40 = v25;
        v41 = v26;
        v25 = 0;
        v26 = 15;
        LOBYTE(v24) = 0;
      }
      if ( v28 != 0 )
        sub_1407DDB80(a1: &v24);
      else
        sub_14001B5A0(a1: &v24);
      v8 = sub_1400AF100(a1: v7, a2: v6);
      v9 = sub_1407DEB00(a1, a2: 0);
      v10 = sub_1400A89D0(a1: v8, a2: &v29, a3: v9);
      v32 = &PXEngine::SafeActorPtr::`vftable';
      v33 = *(_DWORD *)(v10 + 8);
      v34 = *(_DWORD *)(v10 + 12);
      v12 = sub_1400AF100(a1: v33, a2: v11);
      v13 = sub_1405FADF0(
              a1: v12,
              a2: (unsigned int)v35,
              a3: (unsigned int)&v32,
              a4: (unsigned int)"IgnorePlayerEdit",
              a5: -1,
              a6: -1,
              a7: -1,
              a8: 1);
      if ( (unsigned __int8)sub_1405F1F70(a1: v13, a2: 40) != 0 )
      {
        sub_1405F1D60(a1: &v29, a2: *(unsigned int *)(v13 + 12), a3: *(unsigned int *)(v13 + 8));
      }
      else
      {
        v30 = 0;
        v31 = 195948557;
      }
      v29 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
      v14 = sub_1405F1EE0(a1: (__int64)&v29);
      if ( v14 != 0 )
      {
        v15 = sub_140139D60(a1: v14, a2: 65001);
        v16 = sub_140E82CD0(a1: v15);
        sub_14000D680(a1: &v43, a2: v15, a3: v16);
        if ( v44 != 0 )
        {
          v19 = sub_1400AF100(a1: v18, a2: v17);
          v20 = sub_1405FADF0(
                  a1: v19,
                  a2: (unsigned int)&v29,
                  a3: (unsigned int)&v32,
                  a4: (unsigned int)"IgnoreBothWays",
                  a5: -1,
                  a6: -1,
                  a7: -1,
                  a8: 1);
          v21 = sub_140303420(a1: v20, a2: v35);
          v22 = sub_1405F1EE0(a1: v21);
          if ( v22 != 0 )
          {
            v46 = (unsigned int)sub_140149EC0(a1: v22) != 0;
            if ( *(_QWORD *)&nExitCode != 0 )
            {
              v35[0] = v36;
              v29 = (void **)v36;
              v37 = -1;
              if ( v42 != -1 )
              {
                if ( v42 != 0 )
                {
                  v36[0] = v39;
                  v37 = 1;
                }
                else
                {
                  sub_140016F80(a1: v36, a2: &v39);
                  v37 = 0;
                }
              }
              sub_140016F80(a1: v38, a2: &v43);
              v38[32] = v46;
              v38[40] = 8;
              v23 = sub_1407DDE30(a1: &unk_141313D24, a2: &v24, a3: v36);
              sub_1407EE6B0(a1: v23);
              sub_1407E2780(a1: v36);
            }
          }
        }
      }
      return sub_1407DDC70(a1: &v39);
    }
    else
    {
      v3 = (const char *)&v24;
      if ( v26 > 0xF )
        v3 = (const char *)v24;
      if ( (unsigned __int8)sub_140059D90(a1: off_141017338, a2: "%s", v3) != 0 )
        __debugbreak();
      if ( v28 != 0 )
      {
        if ( v27 != -1 && v27 == 0 )
        {
          sub_14001B5A0(a1: &v24);
          *(_QWORD *)&v24 = 19937;
          v25 = 0;
          v26 = 31;
        }
        v27 = -1;
      }
      else
      {
        sub_14001B5A0(a1: &v24);
        *(_QWORD *)&v24 = 19937;
        v25 = 0;
        v26 = 31;
      }
      if ( v45 > 0xF )
      {
        v4 = (void *)v43;
        if ( v45 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v43 - *(_QWORD *)(v43 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v4 = *(void **)(v43 - 8);
        }
        sub_1409DB4C0(lpMem: v4);
      }
      *(_QWORD *)&v43 = 19937;
      v44 = 0;
      v45 = 31;
      result = v42 + 1LL;
      if ( v42 != -1 && v42 == 0 )
        return sub_14001B5A0(a1: &v39);
    }
  }
  return result;
}