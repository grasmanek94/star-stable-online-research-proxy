__int64 __fastcall sub_14080B430(__int64 a1, __int64 a2)
{
  __int64 v5; // rcx
  int v6; // xmm2_4^12
  __int64 v7; // xmm0_8
  int v8; // xmm1_4
  int v9; // eax
  __int128 v10; // xmm0
  int v11; // eax
  unsigned int v12; // [rsp+20h] [rbp-49h] BYREF
  __int64 (__fastcall ***v13)(); // [rsp+28h] [rbp-41h]
  __int64 v14; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v15[12]; // [rsp+38h] [rbp-31h]
  __int128 v16; // [rsp+44h] [rbp-25h]
  int v17; // [rsp+54h] [rbp-15h]
  char v18; // [rsp+58h] [rbp-11h]
  __int64 v19; // [rsp+68h] [rbp-1h]
  int v20; // [rsp+9Ch] [rbp+33h]

  sub_140A4BA20(a1: (__int64)&v14, a2: (SOCKET *)(a1 + 56), a3: *(char **)(a1 + 128), a4: 1500);
  if ( v18 != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 8LL))(a1: *(_QWORD *)(a1 + 168));
    v5 = *(_QWORD *)(a1 + 128);
    v6 = v17;
    v19 = *(_QWORD *)(a1 + 56);
    v7 = v19;
    v8 = *(_DWORD *)v15;
    *(_QWORD *)(a2 + 12) = *(_QWORD *)&v15[4];
    v9 = v14;
    *(_QWORD *)a2 = v7;
    v10 = v16;
    *(_DWORD *)(a2 + 48) = v9;
    v11 = v20;
    *(_OWORD *)(a2 + 20) = v10;
    *(_DWORD *)(a2 + 52) = v11;
    *(_DWORD *)(a2 + 36) = v6;
    *(_DWORD *)(a2 + 8) = v8;
    *(_QWORD *)(a2 + 40) = v5;
    return a2;
  }
  else
  {
    v12 = 4;
    v13 = &off_141310008;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**(_QWORD **)v15 + 40LL))(
           a1: *(_QWORD *)v15,
           a2: (unsigned int)v14,
           a3: &v12) != 0
      || ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), __int64 *, _QWORD))(*v13)[4])(
           a1: v13,
           a2: &v14,
           a3: v12) != 0
      || (v12 = 11,
          v13 = &off_141310008,
          (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**(_QWORD **)v15 + 40LL))(
            a1: *(_QWORD *)v15,
            a2: (unsigned int)v14,
            a3: &v12) != 0)
      || ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), __int64 *, _QWORD))(*v13)[4])(
           a1: v13,
           a2: &v14,
           a3: v12) != 0
      || (v12 = 140,
          v13 = &off_141310008,
          (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**(_QWORD **)v15 + 40LL))(
            a1: *(_QWORD *)v15,
            a2: (unsigned int)v14,
            a3: &v12) != 0)
      || ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), __int64 *, _QWORD))(*v13)[4])(
           a1: v13,
           a2: &v14,
           a3: v12) != 0
      || (v12 = 138,
          v13 = &off_141310008,
          (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**(_QWORD **)v15 + 40LL))(
            a1: *(_QWORD *)v15,
            a2: (unsigned int)v14,
            a3: &v12) != 0)
      || ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), __int64 *, _QWORD))(*v13)[4])(
           a1: v13,
           a2: &v14,
           a3: v12) != 0 )
    {
      *(_QWORD *)(a2 + 48) = 0;
      *(_QWORD *)a2 = -1;
      *(_DWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 12) = 0;
      *(_OWORD *)(a2 + 24) = 0;
      *(_QWORD *)(a2 + 40) = 0;
      return a2;
    }
    else
    {
      v12 = 108;
      v13 = &off_141310008;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**(_QWORD **)v15 + 40LL))(
             a1: *(_QWORD *)v15,
             a2: (unsigned int)v14,
             a3: &v12) == 0
        && ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), __int64 *, _QWORD))(*v13)[4])(
             a1: v13,
             a2: &v14,
             a3: v12) == 0 )
      {
        sub_14080B290(a1, a2: &v14, a3: "UdpNetworkLayer: Receive from failed!");
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 184) + 8LL))(a1: *(_QWORD *)(a1 + 184));
      }
      *(_QWORD *)(a2 + 8) = 0;
      *(_QWORD *)(a2 + 48) = 0;
      *(_QWORD *)a2 = -1;
      *(_DWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 12) = 0;
      *(_OWORD *)(a2 + 24) = 0;
      *(_QWORD *)(a2 + 40) = 0;
      *(_DWORD *)(a2 + 48) = 0;
      return a2;
    }
  }
}