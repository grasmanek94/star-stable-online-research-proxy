char __fastcall sub_1402F1830(__int64 a1, _DWORD *a2)
{
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp-10h] BYREF
  int v10; // [rsp+48h] [rbp-8h] BYREF
  int v11; // [rsp+68h] [rbp+18h] BYREF
  _DWORD *v12; // [rsp+70h] [rbp+20h] BYREF

  v12 = a2;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v11) == 0 )
    return 0;
  LODWORD(v5) = v11;
  v11 = HIDWORD(v5);
  if ( sub_1401D0820(a1: a2, a2: &v11) == 0 )
    return 0;
  HIDWORD(v5) = v11;
  v11 = v6;
  if ( sub_1401D0820(a1: a2, a2: &v11) == 0 )
    return 0;
  LODWORD(v6) = v11;
  v11 = HIDWORD(v6);
  if ( sub_1401D0820(a1: a2, a2: &v11) == 0 )
    return 0;
  HIDWORD(v6) = v11;
  if ( (unsigned __int8)sub_1402B7CD0(a1: &v12, a2: &v7) == 0 )
    return 0;
  v11 = HIDWORD(v7);
  if ( sub_140200540(a1: a2, a2: &v11) == 0 )
    return 0;
  HIDWORD(v7) = v11;
  if ( (unsigned __int8)sub_1402B7CD0(a1: &v12, a2: &v8) == 0
    || (unsigned __int8)sub_1402B7CD0(a1: &v12, a2: (char *)&v8 + 4) == 0
    || (unsigned __int8)sub_1402B7CD0(a1: &v12, a2: &v9) == 0
    || (unsigned __int8)sub_1402B7CD0(a1: &v12, a2: (char *)&v9 + 4) == 0
    || (unsigned __int8)sub_1402B7CD0(a1: &v12, a2: &v10) == 0 )
  {
    return 0;
  }
  (*(void (__fastcall **)(__int64, __int64 *))(a1 + 8))(a1: a1 + 16, a2: &v5);
  return 1;
}