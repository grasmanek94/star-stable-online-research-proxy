__int64 __fastcall sub_1407E1A90(__int64 a1)
{
  __int64 result; // rax
  const char *v3; // r8
  void *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v11; // [rsp+38h] [rbp-C8h]
  char v12; // [rsp+40h] [rbp-C0h]
  char v13; // [rsp+48h] [rbp-B8h]
  _DWORD *v14; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[16]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v16[8]; // [rsp+70h] [rbp-90h] BYREF
  char v17; // [rsp+90h] [rbp-70h]
  _BYTE v18[48]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v19; // [rsp+C8h] [rbp-38h]
  __int128 v20; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v22; // [rsp+E8h] [rbp-18h]
  char v23; // [rsp+F0h] [rbp-10h]
  __int128 v24; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v25; // [rsp+108h] [rbp+8h]
  unsigned __int64 v26; // [rsp+110h] [rbp+10h]
  bool v27; // [rsp+118h] [rbp+18h]

  result = sub_1407DEB00(a1, a2: 0);
  if ( result != 0 )
  {
    v20 = 0;
    v21 = 0;
    v22 = 15;
    LOBYTE(v20) = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 15;
    LOBYTE(v24) = 0;
    v27 = false;
    sub_1407DEF10(a1, a2: &v9);
    if ( v13 != 0 )
    {
      if ( v12 == -1 )
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
      else if ( v12 != 0 )
      {
        if ( v23 == 1 )
        {
          LODWORD(v20) = v9;
        }
        else
        {
          if ( v23 != -1 && v23 == 0 )
          {
            sub_14001B5A0(a1: &v20);
            *(_QWORD *)&v20 = 19937;
            v21 = 0;
            v22 = 31;
          }
          LODWORD(v20) = v9;
          v23 = 1;
        }
      }
      else if ( v23 != 0 )
      {
        v20 = v9;
        v21 = v10;
        v22 = v11;
        v10 = 0;
        v11 = 15;
        LOBYTE(v9) = 0;
        v23 = 0;
      }
      else
      {
        if ( v22 > 0xF )
        {
          v4 = (void *)v20;
          if ( v22 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v20 - *(_QWORD *)(v20 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v4 = *(void **)(v20 - 8);
          }
          sub_1409DB4C0(lpMem: v4);
        }
        v20 = v9;
        v21 = v10;
        v22 = v11;
        v10 = 0;
        v11 = 15;
        LOBYTE(v9) = 0;
      }
      if ( v13 != 0 )
        sub_1407DDB80(a1: &v9);
      else
        sub_14001B5A0(a1: &v9);
      sub_1400775B0(a1: v15, a2: &String2);
      sub_1407DE790(a1, a2: v15, a3: &v14);
      v5 = sub_140081CC0(a1: v15, a2: 0);
      v6 = sub_140E82CD0(a1: v5);
      sub_14000D680(a1: &v24, a2: v5, a3: v6);
      v27 = (_DWORD)v14 != 0;
      if ( *(_QWORD *)&nExitCode != 0 )
      {
        v14 = v16;
        v19 = v16;
        v17 = -1;
        if ( v23 != -1 )
        {
          if ( v23 != 0 )
          {
            v16[0] = v20;
            v17 = 1;
          }
          else
          {
            sub_140016F80(a1: v16, a2: &v20);
            v17 = 0;
          }
        }
        sub_140016F80(a1: v18, a2: &v24);
        v18[32] = v27;
        v18[40] = 2;
        v7 = sub_1407DDE30(a1: &unk_141313D24, a2: &v9, a3: v16);
        sub_1407EE6B0(a1: v7);
        sub_1407E2780(a1: v16);
      }
      sub_1400778C0(a1: v15);
    }
    else
    {
      v3 = (const char *)&v9;
      if ( v11 > 0xF )
        v3 = (const char *)v9;
      if ( (unsigned __int8)sub_140059D90(a1: off_1410171C8, a2: "%s", v3) != 0 )
        __debugbreak();
      if ( v13 == 0 || v12 != -1 && v12 == 0 )
        sub_14001B5A0(a1: &v9);
    }
    if ( v26 > 0xF )
    {
      v8 = (void *)v24;
      if ( v26 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v24 - *(_QWORD *)(v24 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v8 = *(void **)(v24 - 8);
      }
      sub_1409DB4C0(lpMem: v8);
    }
    *(_QWORD *)&v24 = 19937;
    v25 = 0;
    v26 = 31;
    result = v23 + 1LL;
    if ( v23 != -1 && v23 == 0 )
      return sub_14001B5A0(a1: &v20);
  }
  return result;
}