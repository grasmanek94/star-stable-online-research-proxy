unsigned __int16 *__fastcall sub_1407D72A0(
        __int64 a1,
        int a2,
        int a3,
        __int64 *a4,
        _OWORD *a5,
        __int64 *a6,
        _OWORD *a7)
{
  unsigned __int16 *result; // rax
  unsigned __int16 *v9; // rbx
  __int64 v10; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v11[4]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  __int64 v14; // [rsp+7Ch] [rbp-1Ch]
  int v15; // [rsp+84h] [rbp-14h]
  int v16; // [rsp+88h] [rbp-10h]
  int v17; // [rsp+8Ch] [rbp-Ch]

  v16 = a2;
  v17 = a3;
  v12 = *a4;
  v13 = *((_DWORD *)a4 + 2);
  *(_OWORD *)v11 = *a5;
  v14 = *a6;
  v15 = *((_DWORD *)a6 + 2);
  *(_OWORD *)&v11[2] = *a7;
  result = (unsigned __int16 *)sub_1407B4510(a1: &unk_141313D40, a2: &v10, a3: v11);
  v9 = result;
  if ( *((_BYTE *)result + 40) != 0 )
  {
    result = (unsigned __int16 *)sub_1407D5600(a1, a2: *result, a3: result + 4);
    if ( *((_BYTE *)v9 + 40) != 0 )
    {
      result = (unsigned __int16 *)sub_140A25690(a1: v9 + 4);
      *((_BYTE *)v9 + 40) = 0;
    }
  }
  return result;
}