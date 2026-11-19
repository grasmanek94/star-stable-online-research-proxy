void __fastcall sub_140786A40(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx

  if ( a2 != 0 )
  {
    sub_14079BEB0(a1, a2, a3: 0);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 936LL))(a1: a2);
    v4 = sub_1405F1EE0(a1: a1 + 416);
    if ( v4 != 0 )
    {
      sub_1400ED490(a1: v4);
      *(_DWORD *)(a1 + 1380) = 0;
    }
    LOBYTE(v5) = 19;
    sub_1407884C0(a1, a2: v5, a3: 0, a4: 0xFFFFFFFFLL);
    if ( (unsigned __int8)sub_1400AE640(a1) != 0 )
      sub_140786590(a1);
  }
}