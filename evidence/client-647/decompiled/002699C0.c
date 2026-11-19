void __fastcall sub_1402699C0(__int64 a1, unsigned __int8 a2, char a3, char a4)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // bl
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 1225) & 8) != 0
    && ((unsigned __int8)sub_1405F1E20(a1: a1 + 440) != 0 || (unsigned __int8)sub_14025D910(a1) != 0) )
  {
    *(_BYTE *)(a1 + 1225) &= ~0x10u;
    *(_BYTE *)(a1 + 1225) |= 16 * a2;
    v8 = sub_14005D330();
    v9 = sub_1405F1EE0(a1: a1 + 440);
    v10 = v9;
    if ( v9 != 0 && (unsigned __int8)sub_140645790(a1: v9, a2: 226, a3: v8) != 0 )
      goto LABEL_11;
    v11 = sub_14005D330();
    v12 = sub_1405F1EE0(a1: a1 + 440);
    v10 = v12;
    if ( v12 != 0 )
    {
      if ( (unsigned __int8)sub_140645790(a1: v12, a2: 120, a3: v11) != 0 )
      {
        sub_1405F1D40(a1: (__int64)v23, a2: v10 + 152);
        v23[0] = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
        v10 = sub_1405F1EE0(a1: (__int64)v23);
      }
      else
      {
        v10 = 0;
      }
    }
    if ( v10 != 0 )
    {
LABEL_11:
      v13 = sub_140787420(a1: v10);
      if ( v13 != 0 )
        sub_1403BC970(a1: v13, a2);
    }
    if ( a3 != 0 )
      sub_140262C10(a1);
    if ( (*(_BYTE *)(a1 + 1226) & 0x10) == 0 && a4 != 0 )
    {
      v14 = (_BYTE *)sub_1405F1F00(a1: a1 + 440);
      if ( (unsigned __int8)sub_1406456B0(a1: v14, a2: 226) != 0 )
      {
        v15 = sub_14005D330();
        if ( v14 != nullptr
          && (unsigned __int8)sub_140645790(a1: v14, a2: 226, a3: v15) != 0
          && (unsigned __int8)sub_1400AE640(a1: v14) == 0 )
        {
          return;
        }
      }
      else
      {
        if ( (*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)v14 + 152LL))(a1: v14) != 120 )
          return;
        v16 = sub_14005D330();
        if ( (unsigned __int8)sub_140645790(a1: v14, a2: 120, a3: v16) != 0
          && (unsigned __int8)sub_1400AE640(a1: v14) == 0
          && (v14[3543] & 0x20) == 0 )
        {
          return;
        }
      }
      v17 = ((*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)v14 + 152LL))(a1: v14) == 120) + 1;
      v20 = sub_1400AF100(a1: v19, a2: v18);
      v21 = sub_14014F8D0(a1: v20, a2: v23);
      v22 = sub_1405F1EE0(a1: v21);
      if ( v22 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F5A200) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      sub_1402EE9F0(a1: v22, a2: a1, a3: v17, a4: 10);
    }
  }
}