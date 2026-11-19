unsigned __int16 *__fastcall sub_1407D5580(__int64 a1, int a2)
{
  unsigned __int16 *result; // rax
  unsigned __int16 *v4; // rbx
  _BYTE v5[56]; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int16 *v7; // [rsp+70h] [rbp+18h]

  v6 = a2;
  result = (unsigned __int16 *)sub_1401D5630(a1: &unk_141313C70, a2: v5, a3: &v6);
  v4 = result;
  v7 = result;
  if ( *((_BYTE *)result + 40) != 0 )
  {
    result = (unsigned __int16 *)sub_1407D5600(a1, a2: *result, a3: result + 4);
    if ( *((_BYTE *)v4 + 40) != 0 )
    {
      result = (unsigned __int16 *)sub_140A25690(a1: v4 + 4);
      *((_BYTE *)v4 + 40) = 0;
    }
  }
  return result;
}