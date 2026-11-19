__int64 __fastcall sub_1407D7370(__int64 *a1, int a2, int a3, __int64 *a4, _OWORD *a5, __int64 *a6, _OWORD *a7)
{
  unsigned __int16 *v8; // rax
  __int64 v9; // rcx
  unsigned __int16 *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v15[4]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+70h] [rbp-28h]
  int v17; // [rsp+78h] [rbp-20h]
  __int64 v18; // [rsp+7Ch] [rbp-1Ch]
  int v19; // [rsp+84h] [rbp-14h]
  int v20; // [rsp+88h] [rbp-10h]
  int v21; // [rsp+8Ch] [rbp-Ch]

  v20 = a2;
  v21 = a3;
  v16 = *a4;
  v17 = *((_DWORD *)a4 + 2);
  *(_OWORD *)v15 = *a5;
  v18 = *a6;
  v19 = *((_DWORD *)a6 + 2);
  *(_OWORD *)&v15[2] = *a7;
  v8 = (unsigned __int16 *)sub_1407B4510(a1: &unk_141313D64, a2: &v14, a3: v15);
  v10 = v8;
  if ( *((_BYTE *)v8 + 40) != 0 )
  {
    sub_1407D5600(a1, a2: *v8, a3: v8 + 4);
    if ( *((_BYTE *)v10 + 40) != 0 )
    {
      sub_140A25690(a1: v10 + 4);
      *((_BYTE *)v10 + 40) = 0;
    }
  }
  v11 = *a1;
  v12 = sub_1400FBAF0(a1: v9);
  return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v11 + 776))(a1, a2: 122136, a3: 0, a4: v12);
}