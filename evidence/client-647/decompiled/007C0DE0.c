__int64 __fastcall sub_1407C0DE0(__int64 a1, _BYTE *a2)
{
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, _BYTE *); // rdi
  unsigned __int8 v8; // bl
  _BYTE v10[8]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE *v11; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v12[12]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[8]; // [rsp+90h] [rbp-70h] BYREF
  char v14; // [rsp+98h] [rbp-68h] BYREF
  char v15; // [rsp+B8h] [rbp-48h] BYREF
  char v16; // [rsp+F8h] [rbp-8h] BYREF
  char v17; // [rsp+FCh] [rbp-4h] BYREF
  char v18; // [rsp+FDh] [rbp-3h] BYREF
  char v19; // [rsp+100h] [rbp+0h] BYREF
  char v20; // [rsp+120h] [rbp+20h] BYREF
  char v21; // [rsp+208h] [rbp+108h] BYREF
  char v22; // [rsp+220h] [rbp+120h] BYREF
  char v23; // [rsp+238h] [rbp+138h] BYREF
  char v24; // [rsp+250h] [rbp+150h]
  _BYTE v25[448]; // [rsp+260h] [rbp+160h] BYREF
  char v26; // [rsp+420h] [rbp+320h]

  v24 = 0;
  v10[0] = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v10, a3: 1) != 0 )
  {
    if ( v10[0] == 0 )
    {
      v4 = v24;
      if ( v24 != 0 )
      {
        sub_1407B3250(a1: v13);
        v4 = 0;
        v24 = 0;
      }
      goto LABEL_14;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
    {
      sub_140E827B0(a1: v25, a2: 0, a3: 448);
      v5 = sub_1407B18D0(a1: v25);
      if ( v24 != 0 )
      {
        sub_1407B3F50(a1: v13, a2: v5);
      }
      else
      {
        sub_1407B1530(a1: v13, a2: v5);
        v24 = 1;
      }
      sub_1407B3250(a1: v25);
    }
    if ( v24 == 0 )
      __fastfail(5u);
    v12[0] = &v23;
    v12[1] = &v22;
    v12[2] = &v21;
    v12[3] = &v20;
    v12[4] = &v19;
    v12[5] = &v18;
    v12[6] = &v17;
    v12[7] = &v16;
    v12[8] = &v15;
    v12[9] = &v14;
    v12[10] = v13;
    v11 = a2;
    if ( (unsigned __int8)sub_1407AF640(a1: v12, a2: &v11, a3: 0) != 0 )
    {
      v4 = v24;
LABEL_14:
      v6 = *(_QWORD *)(a1 + 16);
      v7 = *(void (__fastcall **)(__int64, _BYTE *))(a1 + 8);
      v11 = v25;
      v26 = 0;
      if ( v4 != 0 )
      {
        sub_1407B1530(a1: v25, a2: v13);
        v26 = 1;
      }
      v7(a1: v6, a2: v25);
      v8 = 1;
LABEL_18:
      if ( v24 != 0 )
        sub_1407B3250(a1: v13);
      return v8;
    }
  }
  v8 = 0;
  goto LABEL_18;
}