__int64 __fastcall sub_140A4B4D0(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // ecx
  SOCKET v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2 - 1;
  if ( v3 != 0 )
  {
    if ( v3 == 1 )
      v4 = 23;
    else
      v4 = 0;
  }
  else
  {
    v4 = 2;
  }
  v5 = socket(af: v4, type: 2, protocol: 0);
  if ( v5 == -1 )
  {
    *(_OWORD *)a1 = *(_OWORD *)sub_140A4B430(a1: v9, a2: v6, a3: v7);
    *(_BYTE *)(a1 + 16) = 0;
  }
  else
  {
    *(_QWORD *)a1 = v5;
    *(_BYTE *)(a1 + 16) = 1;
  }
  return a1;
}