char __fastcall sub_140829710(_DWORD *a1, _QWORD *a2)
{
  char result; // al
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v4) = 0;
  BYTE4(v4) = 1;
  *a2 = v4;
  LODWORD(v4) = *(_DWORD *)a2;
  result = sub_1401D0820(a1, a2: &v4);
  if ( result != 0 )
  {
    *(_DWORD *)a2 = v4;
    return 1;
  }
  return result;
}