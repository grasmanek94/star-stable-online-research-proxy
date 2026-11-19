__int64 __fastcall sub_140471AD0(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+40h] [rbp-18h]
  unsigned int v8; // [rsp+48h] [rbp-10h]
  unsigned int v9; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0;
  v8 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
  {
    v9 = 0;
    if ( sub_140200540(a1: a2, a2: (int *)&v9) == 0 )
      goto LABEL_7;
    v8 = v9;
  }
  else
  {
    v9 = v8;
    if ( sub_140200540(a1: a2, a2: (int *)&v9) == 0 )
      goto LABEL_7;
  }
  if ( (unsigned __int8)sub_14046DC30(a1: a2, a2: v6) != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _BYTE *))(a1 + 8))(a1: a1 + 16, a2: v8, a3: v6);
    v4 = 1;
    goto LABEL_8;
  }
LABEL_7:
  v4 = 0;
LABEL_8:
  if ( v7 != 0 )
    sub_14045BBA0(a1: v6);
  return v4;
}