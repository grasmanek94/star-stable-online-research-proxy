__int64 __fastcall sub_14037EAC0(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rax

  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 64) = 0;
  if ( *(_BYTE *)(a2 + 64) != 0 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    v3 = *(_QWORD *)(a2 + 24);
    v4 = *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = v3;
    sub_140099250(a1: (_QWORD *)(a1 + 32), a2: (_QWORD *)(a2 + 32));
    *(_BYTE *)(a1 + 64) = 1;
    return a1;
  }
  else
  {
    sub_140099300(a1, a2);
    *(_BYTE *)(a1 + 64) = 0;
    return a1;
  }
}