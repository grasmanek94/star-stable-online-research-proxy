// Hex-Rays pseudocode exported through Official IDA MCP Server.
// Baseline SSOClient.exe 645.348067; IDA base 0x140000000.
// Descriptive filename is an analysis label, not a recovered private function name.

bool __fastcall sub_14038D9B0(__int64 a1, unsigned int a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // r8
  __int64 *i; // rax
  bool v7; // bp
  bool result; // al
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  bool v13; // si
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // cl
  void **v19; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+2Ch] [rbp-2Ch]
  _BYTE v22[40]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_QWORD *)&nExitCode == 0 )
    return false;
  v4 = *(__int64 **)(a1 + 176);
  v5 = v4;
  for ( i = (__int64 *)v4[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 7) >= a2 )
      v5 = i;
    else
      i += 2;
  }
  v7 = *((_BYTE *)v5 + 25) == 0 && a2 >= *((_DWORD *)v5 + 7) && v5 != v4 && *((_DWORD *)v5 + 9) == 1;
  if ( *(_BYTE *)(a1 + 192) != 0 )
  {
    if ( *(_BYTE *)(a1 + 194) != 0 && !v7 )
      return true;
  }
  else if ( *(_BYTE *)(a1 + 195) != 0 )
  {
    return true;
  }
  v9 = qword_141379EF0;
  if ( qword_141379EF0 == 0 )
  {
    if ( (unsigned __int8)sub_140059A00(a1: off_140EFA938) != 0 )
      __debugbreak();
    sub_1409E7D98(a1: 999);
    __debugbreak();
  }
  v10 = sub_1406040E0(a1: qword_141379EF0, a2: v22, a3: "Network");
  if ( (unsigned __int8)sub_140607410(a1: v9, a2: v10, a3: 122) != 0 )
  {
    sub_1405F8B70(a1: &v19, a2: *(unsigned int *)(v10 + 12), a3: *(unsigned int *)(v10 + 8));
  }
  else
  {
    v20 = 0;
    v21 = 195948557;
  }
  v19 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
  v11 = sub_1405F8CF0(a1: (__int64)&v19);
  if ( v11 == 0 )
  {
    if ( (unsigned __int8)sub_140059A00(a1: off_140F43058) != 0 )
      __debugbreak();
    sub_1409E7D98(a1: 999);
    __debugbreak();
  }
  v12 = *(_QWORD *)(v11 + 1504);
  v13 = v12 != 0 && sub_140803D00(a1: v12, a2) != 0;
  v14 = qword_141379EF0;
  if ( qword_141379EF0 == 0 )
  {
    if ( (unsigned __int8)sub_140059A00(a1: off_140EFA938) != 0 )
      __debugbreak();
    sub_1409E7D98(a1: 999);
    __debugbreak();
  }
  v15 = sub_1406040E0(a1: qword_141379EF0, a2: v22, a3: "ClubManager");
  if ( (unsigned __int8)sub_140607410(a1: v14, a2: v15, a3: 287) != 0 )
  {
    sub_1405F8B70(a1: &v19, a2: *(unsigned int *)(v15 + 12), a3: *(unsigned int *)(v15 + 8));
  }
  else
  {
    v20 = 0;
    v21 = 195948557;
  }
  v19 = &PXEngine::SafeActorPtrAs<PXEngine::ClubManager>::`vftable';
  v16 = sub_1405F8CF0(a1: (__int64)&v19);
  result = false;
  if ( v16 != 0 )
  {
    v17 = *(_QWORD *)(v16 + 1176);
    if ( v17 != 0 && sub_14045B550(a1: v17, a2) != 0 )
      result = true;
  }
  v18 = *(_BYTE *)(a1 + 198);
  if ( *(_BYTE *)(a1 + 197) == 0 )
  {
    if ( v18 != 0 )
      return result;
    if ( *(_BYTE *)(a1 + 192) != 0 && v7 )
      return *(_BYTE *)(a1 + 193) != 0;
    return false;
  }
  if ( v18 != 0 )
    return v13 || result;
  else
    return v13;
}
