__int64 __fastcall sub_1407D2020(__int64 a1, void **a2)
{
  __int64 result; // rax
  __int64 *v4; // r8
  __int64 *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  _DWORD *v16; // rax
  unsigned __int8 v17; // cl
  __int64 v18; // rdi
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-49h]
  int v21; // [rsp+30h] [rbp-39h]
  unsigned int v22; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-25h] BYREF
  unsigned __int8 v24; // [rsp+48h] [rbp-21h] BYREF
  _DWORD v25[2]; // [rsp+4Ch] [rbp-1Dh] BYREF
  __int64 v26; // [rsp+54h] [rbp-15h]
  int v27; // [rsp+5Ch] [rbp-Dh]
  unsigned int v28; // [rsp+60h] [rbp-9h]
  char v29; // [rsp+64h] [rbp-5h]
  void **v30; // [rsp+68h] [rbp-1h] BYREF
  int v31; // [rsp+70h] [rbp+7h]
  int v32; // [rsp+74h] [rbp+Bh]
  _QWORD v33[4]; // [rsp+78h] [rbp+Fh] BYREF
  int v34; // [rsp+98h] [rbp+2Fh] BYREF
  int v35; // [rsp+9Ch] [rbp+33h]
  __int64 v36; // [rsp+A0h] [rbp+37h]
  int v37; // [rsp+A8h] [rbp+3Fh]
  unsigned int v38; // [rsp+ACh] [rbp+43h]

  v30 = a2;
  v22 = -1;
  v33[0] = v25;
  v23 = 0;
  v33[1] = &v24;
  v24 = 0;
  v33[2] = &v23;
  v29 = 0;
  v33[3] = &v22;
  if ( (unsigned __int8)sub_1407AF240(a1: v33, a2: &v30, a3: 0) == 0 )
  {
    result = sub_140059D90(a1: off_141014510, a2: "Failed to deserialize AppearanceChangePushMessage!");
    if ( (_BYTE)result != 0 )
      __debugbreak();
    return result;
  }
  v34 = 0;
  v35 = -1;
  v36 = 0;
  v37 = -1;
  v38 = 0;
  if ( v24 == 2 && v29 != 0 )
  {
    v34 = v25[0];
    v35 = v25[1];
    v36 = v26;
    v37 = v27;
    v38 = v28;
  }
  v4 = *(__int64 **)(a1 + 1912);
  v5 = v4;
  v6 = (__int64 *)v4[1];
  while ( *((_BYTE *)v6 + 25) == 0 )
  {
    if ( *((_DWORD *)v6 + 8) >= v22 )
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  if ( *((_BYTE *)v5 + 25) != 0 || v22 < *((_DWORD *)v5 + 8) || v5 == v4 )
  {
    v31 = 0;
    v32 = 195948557;
  }
  else
  {
    sub_1405F1D40(a1: (__int64)&v30, a2: (__int64)(v5 + 5));
  }
  v30 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
  result = sub_1405F1EE0(a1: (__int64)&v30);
  v7 = result;
  if ( result != 0 )
  {
    v8 = sub_1405F1EE0(a1: (__int64)&off_141311CD0);
    v9 = sub_14005D330();
    v10 = sub_1405F1EE0(a1: v7 + 1608);
    v15 = v10;
    if ( v10 != 0 && (unsigned __int8)sub_140645790(a1: v10, a2: 120, a3: v9) != 0 )
    {
      LOBYTE(v11) = 1;
      v16 = (_DWORD *)sub_1401E09C0(a1: v15, a2: v11);
      v12 = v23;
      if ( *v16 == v23 )
      {
LABEL_25:
        if ( v15 != 0 )
        {
          v17 = v24;
          if ( v24 == 2 )
          {
            v18 = 0;
            while ( 1 )
            {
              LOBYTE(v21) = 1;
              LOBYTE(v20) = 1;
              result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *, int, _QWORD, int))(*(_QWORD *)v15 + 1056LL))(
                         a1: v15,
                         a2: v17,
                         a3: 0,
                         a4: &v34 + 3 * v18++,
                         a5: v20,
                         a6: 0,
                         a7: v21);
              if ( v18 == 2 )
                break;
              v17 = v24;
            }
          }
          else
          {
            return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char, _QWORD, char))(*(_QWORD *)v15
                                                                                                  + 1056LL))(
                     a1: v15,
                     a2: v24,
                     a3: 0,
                     a4: 0,
                     a5: 1,
                     a6: 0,
                     a7: 1);
          }
        }
        else
        {
          if ( v8 == 0 )
            sub_14005A760(a1: v12, a2: v11, a3: v13, a4: v14);
          result = sub_14034FF50(a1: v8, a2: v23);
          v19 = result;
          if ( result != 0 )
          {
            *(_BYTE *)(result + 44) = v24;
            if ( v24 == 2 )
            {
              *(_DWORD *)(result + 48) = v34;
              *(_DWORD *)(result + 52) = v35;
              *(_QWORD *)(result + 56) = v36;
              *(_DWORD *)(result + 64) = v37;
              result = v38;
              *(_DWORD *)(v19 + 68) = v38;
            }
            else
            {
              *(_DWORD *)(result + 48) = 0;
              *(_DWORD *)(result + 52) = -1;
              *(_QWORD *)(result + 56) = 0;
              *(_DWORD *)(result + 64) = -1;
              *(_DWORD *)(result + 68) = 0;
            }
          }
        }
        return result;
      }
    }
    else
    {
      v15 = 0;
    }
    if ( v8 != 0 )
      v15 = sub_14034FB90(a1: v8, a2: v23);
    goto LABEL_25;
  }
  return result;
}