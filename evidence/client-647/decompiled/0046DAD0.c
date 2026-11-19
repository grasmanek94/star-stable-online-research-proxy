bool __fastcall sub_14046DAD0(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(); // rax
  char v7; // al
  _BYTE v8[8]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[32]; // [rsp+28h] [rbp-30h] BYREF
  char v10; // [rsp+48h] [rbp-10h]
  int v11; // [rsp+60h] [rbp+8h] BYREF

  if ( (unsigned __int8)sub_14044CA80() == 0 )
    return false;
  v11 = *(_DWORD *)(a2 + 8);
  if ( sub_1401D0820(a1, a2: &v11) == 0 )
    return false;
  *(_DWORD *)(a2 + 8) = v11;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v4 = *(_QWORD *)a1;
    LOBYTE(v11) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(v4 + 16))(a1, a2: &v11, a3: 1) == 0
      || (unsigned __int8)v11 >= 3u )
    {
      return false;
    }
    if ( (unsigned __int8)v11 < 3uLL )
    {
      v5 = funcs_14046DBC7[(unsigned __int8)v11];
      if ( v5 == sub_14046E120 )
      {
        v10 = 0;
        sub_14046FB60(a1: a2 + 16, a2: v8);
        if ( v10 != -1 && v10 != 0 && v10 != 1 )
        {
          sub_14001B5A0(a1: v9);
          return true;
        }
        return true;
      }
      v7 = ((__int64 (__fastcall *)(_DWORD *, __int64))v5)(a1, a2: a2 + 16);
      return v7 != 0;
    }
LABEL_15:
    __fastfail(5u);
  }
  LOBYTE(v11) = *(_BYTE *)(a2 + 56);
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v11, a3: 1) == 0 )
    return false;
  if ( (unsigned __int8)v11 >= 3uLL )
    goto LABEL_15;
  v7 = ((__int64 (__fastcall *)(_DWORD *, __int64))funcs_14046DBFD[(unsigned __int8)v11])(a1, a2: a2 + 16);
  return v7 != 0;
}