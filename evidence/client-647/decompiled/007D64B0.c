__int64 __fastcall sub_1407D64B0(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // rax
  unsigned __int16 *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rbx
  _BYTE v8[88]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int16 *v9; // [rsp+88h] [rbp+10h] BYREF

  LODWORD(v9) = *(_DWORD *)(a2 + 32);
  v4 = (unsigned __int16 *)sub_1401D5630(a1: &unk_141313CF0, a2: v8, a3: &v9);
  v5 = v4;
  v9 = v4;
  if ( *((_BYTE *)v4 + 40) != 0 )
  {
    sub_1407D5600(a1, a2: *v4, a3: v4 + 4);
    if ( *((_BYTE *)v5 + 40) != 0 )
    {
      sub_140A25690(a1: v5 + 4);
      *((_BYTE *)v5 + 40) = 0;
    }
  }
  LODWORD(v9) = *(_DWORD *)(a2 + 32);
  result = sub_1401D5630(a1: &unk_141314198, a2: v8, a3: &v9);
  v7 = result;
  v9 = (unsigned __int16 *)result;
  if ( *(_BYTE *)(result + 40) != 0 )
  {
    result = sub_1407D62B0(a1, a2: *(_WORD *)result, a3: result + 8);
    if ( *(_BYTE *)(v7 + 40) != 0 )
    {
      result = sub_140A25690(a1: v7 + 8);
      *(_BYTE *)(v7 + 40) = 0;
    }
  }
  return result;
}