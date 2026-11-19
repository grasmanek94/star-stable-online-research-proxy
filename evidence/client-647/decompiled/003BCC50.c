__int64 __fastcall sub_1403BCC50(_DWORD *a1, unsigned int a2)
{
  int v2; // ebp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rdx
  _QWORD *v10; // rdx
  _QWORD *v11; // rdx
  _QWORD *v12; // rdx
  char **v13; // rcx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1[121];
  a1[121] = a2;
  if ( qword_14138A6F0 == 0 )
  {
    v13 = off_140F35058;
    goto LABEL_25;
  }
  v5 = sub_1403C9C40(a1: v14);
  v6 = sub_1405F1EE0(a1: v5);
  if ( v6 == 0 )
  {
    v13 = off_140F4EBB8;
LABEL_25:
    if ( (unsigned __int8)sub_140059CA0(a1: v13) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  result = sub_1403C9D10(a1: v6, a2);
  v8 = result;
  if ( result != 0 )
  {
    a1[117] = *(_DWORD *)(result + 468);
    a1[118] = *(_DWORD *)(result + 472);
    if ( a1 != (_DWORD *)result )
    {
      v9 = (_QWORD *)(result + 184);
      if ( *(_QWORD *)(result + 208) > 0xFu )
        v9 = (_QWORD *)*v9;
      sub_14000D680(a1: a1 + 46, a2: v9, a3: *(_QWORD *)(result + 200));
      v10 = (_QWORD *)(v8 + 216);
      if ( *(_QWORD *)(v8 + 240) > 0xFu )
        v10 = (_QWORD *)*v10;
      sub_14000D680(a1: a1 + 54, a2: v10, a3: *(_QWORD *)(v8 + 232));
      v11 = (_QWORD *)(v8 + 280);
      if ( *(_QWORD *)(v8 + 304) > 0xFu )
        v11 = (_QWORD *)*v11;
      sub_14000D680(a1: a1 + 70, a2: v11, a3: *(_QWORD *)(v8 + 296));
    }
    a1[116] = *(_DWORD *)(v8 + 464);
    sub_1403BCE10(a1, a2: v8 + 152);
    result = *(unsigned int *)(v8 + 476);
    a1[119] = result;
    if ( a1 != (_DWORD *)v8 )
    {
      v12 = (_QWORD *)(v8 + 616);
      if ( *(_QWORD *)(v8 + 640) > 0xFu )
        v12 = (_QWORD *)*v12;
      result = sub_14000D680(a1: a1 + 154, a2: v12, a3: *(_QWORD *)(v8 + 632));
    }
    if ( v2 != a2 )
    {
      result = sub_1400AE640(a1);
      if ( (_BYTE)result == 0 )
      {
        if ( a1[119] == 2 )
          a1[126] = -1082130432;
        else
          a1[126] = 0;
      }
    }
  }
  return result;
}