__int64 __fastcall sub_14009A790(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  void *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _BYTE *v16; // rdx
  void *v17; // rcx
  __int64 v18; // rcx
  _BYTE *v19; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID v22; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v24[24]; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+68h] [rbp-98h]
  _QWORD *v26; // [rsp+70h] [rbp-90h]
  _BYTE v27[56]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v28; // [rsp+B0h] [rbp-50h]
  _BYTE v29[8]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v30[24]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v31[24]; // [rsp+D8h] [rbp-28h] BYREF
  char v32; // [rsp+F0h] [rbp-10h]
  _BYTE v33[80]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v34[16]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v35; // [rsp+158h] [rbp+58h]

  v26 = a2;
  v35 = a3;
  v6 = sub_140954600(a1: *(_QWORD *)(a1 + 8), a2: *a2);
  if ( v6 != 0 )
  {
    LODWORD(v21) = v6;
    v25 = 1;
    v7 = sub_140099300(a1: v29, a2: &v21);
    sub_140099300(a1: v33, a2: v7);
    v33[64] = 0;
    v19 = v33;
    v8 = *(_QWORD *)(a3 + 56);
    if ( v8 == 0 )
    {
      sub_1409D2AC0(a1: 0);
      JUMPOUT(0x14009AACELL);
    }
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 16LL))(a1: v8, a2: v33);
    sub_1400994C0(a1: v33);
    if ( v32 != -1 && v32 != 0 && v32 != 1 )
    {
      if ( v32 == 2 )
      {
        sub_140099290(a1: v31);
        sub_140018220(a1: v30);
      }
      else
      {
        sub_140017B20(a1: v29);
      }
    }
    v32 = -1;
    if ( v25 != -1 && v25 != 0 && v25 != 1 )
    {
      if ( v25 == 2 )
      {
        sub_140099290(a1: v24);
        sub_140018220(a1: &v22);
      }
      else
      {
        sub_140017B20(a1: &v21);
      }
    }
    result = sub_140099290(a1: a2 + 2);
    v11 = (void *)a2[1];
    if ( v11 != nullptr )
      result = sub_1400995D0(lpMem: v11);
    if ( *a2 != 0 )
      result = sub_1400995C0(a1: *a2);
    goto LABEL_38;
  }
  v12 = sub_1409DB470(a1: 168);
  v19 = (_BYTE *)v12;
  if ( v12 != 0 )
  {
    v28 = nullptr;
    v13 = *(_QWORD *)(a3 + 56);
    if ( v13 != 0 )
    {
      if ( v13 != a3 )
      {
        v28 = *(_BYTE **)(a3 + 56);
        goto LABEL_26;
      }
      v28 = (_BYTE *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 8LL))(a1: v13, a2: v27);
      v15 = *(_QWORD *)(a3 + 56);
      if ( v15 != 0 )
      {
        LOBYTE(v14) = v15 != a3;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(a1: v15, a2: v14);
LABEL_26:
        *(_QWORD *)(a3 + 56) = 0;
      }
    }
    v21 = *a2;
    *a2 = 0;
    v22 = (LPVOID)a2[1];
    a2[1] = 0;
    sub_140099250(a1: v23, a2: a2 + 2);
    *(_QWORD *)v12 = 0;
    *(_QWORD *)v12 = v21;
    v21 = 0;
    *(_QWORD *)(v12 + 8) = 0;
    *(_QWORD *)(v12 + 8) = v22;
    v22 = nullptr;
    sub_140099250(a1: (_QWORD *)(v12 + 16), a2: v23);
    sub_140099FF0(a1: v12 + 40, a2: v27);
    *(_DWORD *)(v12 + 104) = 0;
    *(_QWORD *)(v12 + 112) = 0;
    *(_QWORD *)(v12 + 120) = 0;
    *(_QWORD *)(v12 + 128) = 0;
    *(_QWORD *)(v12 + 136) = 0;
    *(_QWORD *)(v12 + 144) = 0;
    *(_QWORD *)(v12 + 152) = 0;
    sub_14009B080(a1: v12 + 160);
    sub_140099290(a1: v23);
    if ( v22 != nullptr )
      sub_1400995D0(lpMem: v22);
    if ( v21 != 0 )
      sub_1400995C0(a1: v21);
    if ( v28 != nullptr )
    {
      v16 = v27;
      LOBYTE(v16) = v28 != v27;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v28 + 32LL))(a1: v28, a2: v16);
    }
    goto LABEL_34;
  }
  v12 = 0;
LABEL_34:
  v20 = v12;
  v19 = (_BYTE *)v12;
  ((void (__fastcall *)(__int64, _BYTE *, _BYTE **, __int64 *))sub_140099D30)(a1: a1 + 16, a2: v34, a3: &v19, a4: &v20);
  sub_140099530(a1: v12, a2: v12 + 104);
  sub_140952850(a1: *(_QWORD *)v12, a2: 10103, a3: v12);
  sub_140017D50(a1: &v20);
  result = sub_140099290(a1: a2 + 2);
  v17 = (void *)a2[1];
  if ( v17 != nullptr )
    result = sub_1400995D0(lpMem: v17);
  if ( *a2 != 0 )
    result = sub_1400995C0(a1: *a2);
LABEL_38:
  v18 = *(_QWORD *)(a3 + 56);
  if ( v18 != 0 )
  {
    LOBYTE(v10) = v18 != a3;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(a1: v18, a2: v10);
  }
  *(_QWORD *)(a3 + 56) = 19937;
  return result;
}