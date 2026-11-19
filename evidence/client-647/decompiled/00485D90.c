__int64 __fastcall sub_140485D90(__int64 *a1, __int64 a2, int a3, unsigned __int8 a4, unsigned __int8 a5, __int64 a6)
{
  int v6; // ebp
  __int64 v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rdi
  __int64 v23; // rbx
  void *v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // r9
  __int64 v33; // rdx
  char v34; // al
  const char *v35; // rax
  int v36; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v37[16]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v38[3]; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-60h]

  v6 = a4;
  v36 = a3;
  v8 = sub_1405F1F00(a1: a2);
  v9 = (_QWORD *)v8;
  v10 = nullptr;
  if ( (_BYTE)v6 == 2 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 152LL))(a1: v8) == 120 )
  {
    v11 = sub_14005D330();
    if ( (unsigned __int8)sub_140645790(a1: v9, a2: 120, a3: v11) != 0 )
      v10 = v9;
  }
  sub_140487A60(a1, a2: v37, a3: (unsigned __int8)v6);
  v12 = sub_1405F1EE0(a1: (__int64)v37);
  if ( v12 == 0 )
  {
    v34 = sub_140059D90(
            a1: off_140FA3968,
            a2: " EquipmentManager::EquipItemOnSlave - Failed to find equipment description for id: %u.",
            v6);
    goto LABEL_37;
  }
  v13 = sub_14005D330();
  v14 = *v9;
  v15 = sub_140461520(a1: v12);
  v16 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(v14 + 352))(a1: v9, a2: v15, a3: 0xFFFFFFFFLL);
  v17 = (__int64 *)v16;
  if ( v16 == 0 || (unsigned __int8)sub_140645790(a1: v16, a2: 1, a3: v13) == 0 )
  {
    v35 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 176LL))(a1: v12);
    v34 = sub_140059D90(
            a1: off_140FA39C0,
            a2: " EquipmentManager::EquipItemOnSlave - Failed to find equipment item root actor for %s.",
            v35);
    goto LABEL_37;
  }
  v18 = sub_14005D330();
  v19 = *v17;
  v20 = sub_14047DA40(a1: v12, a2: v38, a3: a5);
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v19 + 352))(a1: v17, a2: v20, a3: 0xFFFFFFFFLL);
  v22 = result;
  if ( result != 0 )
  {
    result = sub_140645790(a1: result, a2: 1, a3: v18);
    v23 = 0;
    if ( (_BYTE)result != 0 )
      v23 = v22;
  }
  else
  {
    v23 = 0;
  }
  if ( v39 > 0xF )
  {
    v24 = (void *)v38[0];
    if ( v39 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v38[0] - *(_QWORD *)(v38[0] - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v24 = *(void **)(v38[0] - 8LL);
    }
    result = sub_1409DB4C0(lpMem: v24);
  }
  v38[0] = 19937;
  v38[2] = 0;
  v39 = 31;
  if ( v23 == 0 )
    return result;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 248LL))(a1: v23) != 0 )
  {
    v25 = sub_14005D330();
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 256LL))(a1: v23, a2: 0);
    v27 = v26;
    if ( v26 != 0 && (unsigned __int8)sub_140645790(a1: v26, a2: 101, a3: v25) != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 872LL))(a1: v27);
  }
  result = sub_1406453B0(a1: v23);
  if ( a6 != 0 )
  {
    v29 = sub_14005D330();
    result = sub_1400AC1A0(a1: a6, a2: v23, a3: 0, a4: 0, a5: 0, a6: -1, a7: 0);
    v30 = result;
    if ( result != 0 )
    {
      result = sub_140645790(a1: result, a2: 101, a3: v29);
      if ( (_BYTE)result != 0 )
      {
        if ( qword_14138AA70 != 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 104LL))(a1: v30);
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 864LL))(a1: v30);
          goto LABEL_27;
        }
        v34 = sub_140059CA0(a1: off_140F38D30);
LABEL_37:
        if ( v34 != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
    }
  }
LABEL_27:
  if ( v10 != nullptr )
    result = sub_1401FDEC0(a1: v10);
  if ( v36 != -1 )
  {
    if ( (_BYTE)v6 == 1 )
    {
      v31 = *a1;
      v32 = sub_1400FBAF0(a1: v28);
      v33 = 122093;
      return (*(__int64 (__fastcall **)(__int64 *, __int64, int *, __int64))(v31 + 776))(a1, a2: v33, a3: &v36, a4: v32);
    }
    if ( (_BYTE)v6 == 2 )
    {
      v31 = *a1;
      v32 = sub_1400FBAF0(a1: v28);
      v33 = 122094;
      return (*(__int64 (__fastcall **)(__int64 *, __int64, int *, __int64))(v31 + 776))(a1, a2: v33, a3: &v36, a4: v32);
    }
  }
  return result;
}