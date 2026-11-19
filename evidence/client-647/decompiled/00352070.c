__int64 __fastcall sub_140352070(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  void (__fastcall *v5)(__int64, _QWORD, __int64, _QWORD); // rdi
  __int64 v6; // rax
  unsigned __int8 v7; // bl
  unsigned int v9; // [rsp+20h] [rbp-208h] BYREF
  _BYTE v10[232]; // [rsp+28h] [rbp-200h] BYREF
  int v11; // [rsp+110h] [rbp-118h]
  _BYTE v12[232]; // [rsp+118h] [rbp-110h] BYREF
  unsigned int v13; // [rsp+200h] [rbp-28h]

  v11 = 0;
  sub_140E827B0(a1: v12, a2: 0, a3: 232);
  sub_14034B030(a1: v12);
  v13 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2) == 0 )
  {
    v9 = v13;
    if ( sub_140200540(a1: a2, a2: (int *)&v9) != 0 )
      goto LABEL_5;
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  v9 = 0;
  if ( sub_140200540(a1: a2, a2: (int *)&v9) == 0 )
    goto LABEL_8;
  v13 = v9;
LABEL_5:
  if ( (unsigned __int8)sub_1403474B0(a1: a2, a2: v12) == 0 )
    goto LABEL_8;
  v9 = v11;
  if ( sub_1401D0820(a1: a2, a2: &v9) == 0 )
    goto LABEL_8;
  v4 = v9;
  v11 = v9;
  v5 = *(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(a1 + 8);
  v6 = sub_14034AF70(a1: v10, a2: v12);
  v5(a1: a1 + 16, a2: v13, a3: v6, a4: v4);
  v7 = 1;
LABEL_9:
  sub_14034BD00(a1: v12);
  return v7;
}