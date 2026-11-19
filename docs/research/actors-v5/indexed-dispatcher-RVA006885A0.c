// Baseline 645.348067; IDA base 0x140000000.
char __fastcall sub_1406885A0(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  unsigned __int16 v13; // si
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r12
  unsigned int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  _QWORD v23[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v24[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF

  LOBYTE(v8) = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 640LL))(a1: a2);
  if ( (_BYTE)v8 != 0 )
  {
    LOBYTE(v8) = sub_1400B3F40(a1: (__int64)a2);
    if ( (_BYTE)v8 == 0 )
    {
      v25 = sub_1406888B0(a1, a2: a2 + 34);
      if ( v25 != 0 )
      {
        v10 = *(_QWORD *)(a1 + 32);
        v23[0] = &v25;
        if ( v10 == *(_QWORD *)(a1 + 40) )
        {
          ((void (__fastcall *)(__int64, __int64, _QWORD *, _DWORD *))sub_140687CA0)(
            a1: a1 + 24,
            a2: v10,
            a3: v23,
            a4: a2 + 34);
        }
        else
        {
          v11 = a2[34];
          *(_QWORD *)v10 = &v25;
          *(_DWORD *)(v10 + 8) = v11;
          *(_QWORD *)(a1 + 32) += 16LL;
        }
        v12 = v25;
        v13 = 0;
        if ( *(_WORD *)(v25 + 38) != 0 )
        {
          while ( 1 )
          {
            v14 = *(_QWORD *)(v12 + 8);
            v15 = v13;
            if ( v13 >= (unsigned __int64)((__int64)(*(_QWORD *)(v12 + 16) - v14) >> 2)
              || (v9 = *(unsigned int *)(v14 + 4LL * v13),
                  v15 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1,
                  v14 = v15 / 40,
                  v9 >= v15 / 40) )
            {
              sub_14005A4C0(a1: v15, a2: v14, a3: v9);
            }
            if ( v9 >= v14 )
              break;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 40 * v9) + 112LL))(
              a1: *(_QWORD *)(*(_QWORD *)a1 + 40 * v9),
              a2: a3,
              a3: a4);
            v12 = v25;
            if ( ++v13 >= *(_WORD *)(v25 + 38) )
              goto LABEL_12;
          }
LABEL_13:
          __fastfail(5u);
        }
LABEL_12:
        v16 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 24) == v16 )
          goto LABEL_13;
        v8 = v16 - 16;
        *(_QWORD *)(a1 + 32) = v8;
      }
      else
      {
        v17 = sub_140621240(a1: a3);
        sub_1405F8B50(a1: v23, a2: a2 + 30);
        v18 = 0;
        for ( LODWORD(v8) = sub_140603BB0(a1: v17, a2: v23);
              v18 < (unsigned int)v8;
              LODWORD(v8) = sub_140603BB0(a1: v17, a2: v23) )
        {
          v19 = sub_1406038A0(a1: v17, a2: v24, a3: v23, a4: v18);
          v20 = sub_1405F8DE0(a1: v19);
          v21 = v20;
          if ( v20 != 0 )
          {
            if ( sub_1406888B0(a1, a2: v20 + 136) == 0
              || *(_DWORD *)(v21 + 136) == -1
              || (*(_BYTE *)(v21 + 140) & 1) == 0
              || (*(_BYTE *)(v21 + 148) & 0x10) != 0 )
            {
              if ( *(_BYTE *)(a1 + 128) != 0 )
                sub_1406885A0(a1, a2: v21, a3, a4);
              else
                sub_1406887E0(a1, a2: v21, a3, a4);
            }
            else
            {
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 112LL))(a1: v21, a2: a3, a3: a4);
            }
          }
          ++v18;
        }
      }
    }
  }
  return v8;
}
