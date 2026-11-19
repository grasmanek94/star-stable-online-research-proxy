__int64 __fastcall sub_140351BC0(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  _QWORD v6[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v7[12]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[200]; // [rsp+90h] [rbp-70h] BYREF
  char v9; // [rsp+158h] [rbp+58h] BYREF
  char v10; // [rsp+168h] [rbp+68h] BYREF
  char v11; // [rsp+16Ch] [rbp+6Ch] BYREF
  char v12; // [rsp+170h] [rbp+70h] BYREF
  char v13; // [rsp+171h] [rbp+71h] BYREF
  char v14; // [rsp+172h] [rbp+72h] BYREF
  char v15; // [rsp+173h] [rbp+73h] BYREF
  char v16; // [rsp+174h] [rbp+74h] BYREF
  char v17; // [rsp+175h] [rbp+75h] BYREF
  char v18; // [rsp+176h] [rbp+76h] BYREF
  char v19; // [rsp+177h] [rbp+77h] BYREF
  _BYTE v20[232]; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v21; // [rsp+260h] [rbp+160h]

  sub_140E827B0(a1: v8, a2: 0, a3: 232);
  sub_14034B030(a1: v8);
  sub_140E827B0(a1: v20, a2: 0, a3: 232);
  sub_14034B030(a1: v20);
  v21 = 0;
  LODWORD(v6[0]) = 0;
  if ( sub_1401D0820(a1: a2, a2: v6) == 0 )
    goto LABEL_5;
  v21 = v6[0];
  if ( (unsigned __int8)sub_1403474B0(a1: a2, a2: v20) == 0 )
    goto LABEL_5;
  v7[0] = &v19;
  v7[1] = &v18;
  v7[2] = &v17;
  v7[3] = &v16;
  v7[4] = &v15;
  v7[5] = &v14;
  v7[6] = &v13;
  v7[7] = &v12;
  v7[8] = &v11;
  v7[9] = &v10;
  v7[10] = &v9;
  v7[11] = v8;
  v6[0] = a2;
  if ( (unsigned __int8)sub_140349DC0(a1: v7, a2: v6, a3: 0) != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _BYTE *, _BYTE *))(a1 + 8))(a1: a1 + 16, a2: v21, a3: v20, a4: v8);
    v4 = 1;
  }
  else
  {
LABEL_5:
    v4 = 0;
  }
  sub_14034BD00(a1: v20);
  sub_14034BD00(a1: v8);
  return v4;
}