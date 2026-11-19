char __fastcall sub_14006CFF0(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // r14
  unsigned int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // rax
  _BYTE v10[64]; // [rsp+20h] [rbp-78h] BYREF

  *(_BYTE *)(a1 + 138) = 0;
  *(_BYTE *)(a1 + 140) = 1;
  sub_1400500D0(a1: a1 + 56, a2);
  v4 = *(_QWORD *)(a1 + 128);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)v4 + 8LL))(a1: v4, a2, a3: "rb");
  if ( v5 == 0 )
    return 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 136LL))(a1: v4, a2: v5);
  v7 = a1 + 8;
  *(_QWORD *)(a1 + 128) = a1 + 8;
  v8 = sub_14004F830(a1: v10, a2);
  *(_QWORD *)(a1 + 120) = sub_14008ABF0(a1: a1 + 8, a2: v8, a3: "wb", a4: v6);
  sub_14004FE80(a1: v10);
  if ( *(_QWORD *)(a1 + 120) == 0 )
  {
    *(_QWORD *)(a1 + 128) = v4;
    return 0;
  }
  sub_14008A8C0(a1: a1 + 8, a2: v4, a3: v5);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(a1: v4, a2: v5);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 16LL))(a1: a1 + 8, a2: *(_QWORD *)(a1 + 120));
  *(_QWORD *)(a1 + 120) = (*(__int64 (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)v7 + 8LL))(
                            a1: a1 + 8,
                            a2,
                            a3: "rb");
  *(_BYTE *)(a1 + 136) = 1;
  return 1;
}