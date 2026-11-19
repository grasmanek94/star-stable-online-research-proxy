void __fastcall sub_140380120(__int64 *a1, _QWORD *a2)
{
  _QWORD *v4; // rdx
  __int64 *v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  void *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD v13[4]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+50h] [rbp-48h] BYREF
  int v16; // [rsp+58h] [rbp-40h]
  _QWORD v17[3]; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp-20h]

  if ( *((_BYTE *)a1 + 152) == 0 )
  {
    *((_BYTE *)a1 + 152) = 1;
    if ( a1 != a2 + 6 )
    {
      v4 = a2 + 26;
      v5 = a1 + 20;
      if ( a2[29] > 0xFu )
        v4 = (_QWORD *)*v4;
      sub_14000D680(a1: v5, a2: v4, a3: a2[28]);
    }
    if ( a1 != a2 + 20 )
    {
      v6 = a2 + 44;
      if ( a2[47] > 0xFu )
        v6 = (_QWORD *)*v6;
      sub_14000D680(a1: a1 + 24, a2: v6, a3: a2[46]);
    }
    if ( a1[26] != 0 )
    {
      if ( a1[22] != 0 )
      {
        sub_1403803E0(a1, (__int64)a2);
      }
      else
      {
        v16 = 100;
        v15 = 0x2000000000000000LL;
        v13[0] = "# {}";
        v13[1] = 4;
        v14[0] = 1;
        v14[1] = &v15;
        sub_140058310(a1: v17, a2: v13, a3: v14);
        sub_140018C70(a1: a1 + 28, a2: v17);
        if ( v18 > 0xF )
        {
          v10 = (void *)v17[0];
          if ( v18 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v17[0] - *(_QWORD *)(v17[0] - 8LL) - 8LL) > 0x1F )
              __fastfail(5u);
            v10 = *(void **)(v17[0] - 8LL);
          }
          sub_1409DB4C0(lpMem: v10);
        }
        v11 = *a1;
        v12 = sub_1400FBAF0(a1: v9);
        (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v11 + 776))(a1, a2: 176002, a3: 0, a4: v12);
      }
    }
    else
    {
      v7 = *a1;
      v8 = sub_1400FBAF0(a1);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v7 + 776))(a1, a2: 176003, a3: 0, a4: v8);
    }
  }
}