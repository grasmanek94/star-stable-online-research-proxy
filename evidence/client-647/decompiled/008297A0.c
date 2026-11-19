char __fastcall sub_1408297A0(__int64 a1, __int64 a2)
{
  int v3; // [rsp+10h] [rbp+10h]
  __int16 v4; // [rsp+15h] [rbp+15h]
  char v5; // [rsp+17h] [rbp+17h]

  *(_DWORD *)a2 = v3;
  *(_WORD *)(a2 + 5) = v4;
  *(_BYTE *)(a2 + 7) = v5;
  *(_BYTE *)(a2 + 4) = 0;
  return 1;
}