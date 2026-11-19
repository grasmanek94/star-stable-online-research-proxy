char __fastcall sub_140351EB0(__int64 a1, _DWORD *a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int8 v6; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+44h] [rbp+1Ch]

  v6 = 0;
  v7 = 0;
  v5 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v5) == 0 )
    return 0;
  v7 = v5;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: &v6,
         a3: 1) == 0 )
    return 0;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(a1 + 8))(a1: a1 + 16, a2: v7, a3: v6);
  return 1;
}