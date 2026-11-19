_QWORD *__fastcall sub_1407F1FD0(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, __int64 a6, __int64 a7)
{
  void (__fastcall ***v11)(_QWORD, __int64); // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  void (__fastcall ***v15)(_QWORD, _QWORD); // rax
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  __int64 v17; // rax
  void (__fastcall ***v18)(_QWORD, __int64); // rax
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  void (__fastcall ***v26)(_QWORD, __int64); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v28; // [rsp+40h] [rbp-C0h] BYREF
  void (__fastcall ***v29)(_QWORD, __int64); // [rsp+48h] [rbp-B8h] BYREF
  void (__fastcall ***v30)(_QWORD, _QWORD); // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall ***v31)(_QWORD, __int64); // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h]
  _QWORD *v35; // [rsp+80h] [rbp-80h]
  _QWORD *v36; // [rsp+88h] [rbp-78h]
  _QWORD *v37; // [rsp+90h] [rbp-70h]
  _QWORD *v38; // [rsp+98h] [rbp-68h]
  _BYTE v39[56]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-28h]
  __int64 v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]

  v28 = a1;
  v35 = a2;
  v36 = a3;
  v37 = a4;
  v38 = a5;
  v41 = a6;
  v42 = a7;
  v11 = (void (__fastcall ***)(_QWORD, __int64))*a3;
  *a3 = 0;
  v29 = v11;
  sub_14080DFF0(a1: &v27, a2: &v29);
  v34 = v27;
  v40 = 0;
  v12 = *(_QWORD *)(a6 + 56);
  if ( v12 != 0 )
  {
    if ( v12 == a6 )
    {
      v40 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 8LL))(a1: v12, a2: v39);
      v14 = *(_QWORD *)(a6 + 56);
      if ( v14 != 0 )
      {
        LOBYTE(v13) = v14 != a6;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(a1: v14, a2: v13);
        *(_QWORD *)(a6 + 56) = 0;
      }
    }
    else
    {
      v40 = *(_QWORD *)(a6 + 56);
      *(_QWORD *)(a6 + 56) = 0;
    }
  }
  v15 = (void (__fastcall ***)(_QWORD, _QWORD))*a5;
  *a5 = 0;
  v30 = v15;
  v16 = (void (__fastcall ***)(_QWORD, __int64))*a4;
  *a4 = 0;
  v31 = v16;
  v17 = v27;
  v27 = 0;
  v32 = v17;
  v18 = (void (__fastcall ***)(_QWORD, __int64))*a2;
  *a2 = 0;
  v26 = v18;
  v19 = sub_140804D30(
          a1: (unsigned int)&v33,
          a2: (unsigned int)&v26,
          a3: (unsigned int)&v32,
          a4: (unsigned int)&v31,
          a5: (__int64)&v30,
          a6: (__int64)v39);
  v20 = (__int64 *)sub_1407F0DF0(a1: &v28, a2: v34, a3: a7, a4: v19);
  v21 = *v20;
  *v20 = 0;
  *a1 = v21;
  sub_1407F1450(a1: &v28);
  if ( v33 != 0 )
    (**(void (__fastcall ***)(__int64, __int64))v33)(a1: v33, a2: 1);
  v33 = 19937;
  if ( v27 != 0 )
    (**(void (__fastcall ***)(__int64, __int64))v27)(a1: v27, a2: 1);
  v27 = 19937;
  if ( *a2 != 0 )
    (**(void (__fastcall ***)(_QWORD, __int64))*a2)(a1: *a2, a2: 1);
  *a2 = 19937;
  if ( *a3 != 0 )
    (**(void (__fastcall ***)(_QWORD, __int64))*a3)(a1: *a3, a2: 1);
  *a3 = 19937;
  if ( *a4 != 0 )
    (**(void (__fastcall ***)(_QWORD, __int64))*a4)(a1: *a4, a2: 1);
  *a4 = 19937;
  if ( *a5 != 0 )
    (**(void (__fastcall ***)(_QWORD, __int64))*a5)(a1: *a5, a2: 1);
  *a5 = 19937;
  v23 = *(_QWORD *)(a6 + 56);
  if ( v23 != 0 )
  {
    LOBYTE(v22) = v23 != a6;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL))(a1: v23, a2: v22);
  }
  *(_QWORD *)(a6 + 56) = 19937;
  v24 = *(_QWORD *)(a7 + 56);
  if ( v24 != 0 )
  {
    LOBYTE(v22) = v24 != a7;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 32LL))(a1: v24, a2: v22);
  }
  *(_QWORD *)(a7 + 56) = 19937;
  return a1;
}