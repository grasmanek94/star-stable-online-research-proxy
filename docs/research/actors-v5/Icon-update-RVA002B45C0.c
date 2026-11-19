// Baseline 645.348067; IDA base 0x140000000. Exported through Official IDA MCP.
void __fastcall sub_1402B45C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 v5; // rcx
  int v6; // ebx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  int v13; // r9d
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  float v19; // xmm0_4
  _BYTE v20[16]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+60h] [rbp-38h] BYREF
  __int128 v22; // [rsp+68h] [rbp-30h]
  int v23; // [rsp+78h] [rbp-20h]
  __int64 v24; // [rsp+80h] [rbp-18h]
  __int16 v25; // [rsp+88h] [rbp-10h]

  v3 = a3;
  if ( (*(_BYTE *)(a1 + 144) & 0x40) != 0 )
  {
    sub_14013D1E0(a1, a2, a3);
    if ( sub_1400CF220(a1) )
    {
      v5 = *(_QWORD *)(a1 + 832);
      if ( v5 != 0 && (unsigned __int8)sub_1406529A0(a1: v5) != 0 )
      {
        v6 = *(_DWORD *)(a1 + 888);
        v7 = (_QWORD *)sub_1405F8CF0(a1: a1 + 928);
        v9 = v7;
        if ( v7 != nullptr )
        {
          v10 = *v7;
          v22 = 0;
          v21 = -1;
          v23 = -1;
          v24 = 0;
          v25 = 0;
          v11 = sub_140101B20(a1: v8);
          (*(void (__fastcall **)(_QWORD *, __int64, __int64 *, __int64, __int64))(v10 + 24))(
            a1: v9,
            a2: 40202,
            a3: &v21,
            a4: a1,
            a5: v11);
          v6 = v23;
        }
        if ( v6 != -1 )
        {
          v12 = sub_1400D38D0(a1: a1 + 832);
          sub_14066AC00(a1: v12, a2: (unsigned int)v20, a3: v6, a4: v13, a5: *(_DWORD *)(a1 + 884));
          v14 = *(_QWORD *)a1;
          v17 = sub_1400B5440(a1: v16, a2: v15);
          v18 = (*(__int64 (__fastcall **)(__int64, __int64))(v14 + 696))(a1, a2: v17);
          v19 = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 720LL))(a1);
          sub_1406A0D90(
            a1: v3,
            a2: *(_QWORD *)(a1 + 832),
            a3: a1 + 208,
            a4: (unsigned int)v20,
            a5: (__int64)&xmmword_140EF3D70,
            a6: LODWORD(v19),
            a7: v18,
            a8: -1,
            a9: 0,
            a10: -971227136);
        }
      }
    }
  }
}
