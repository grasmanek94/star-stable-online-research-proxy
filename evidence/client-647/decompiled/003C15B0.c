void __fastcall sub_1403C15B0(int a1, int a2, int a3, int a4, int a5, int a6, __int64 a7)
{
  int v11; // ebx
  int v12; // eax
  int v13; // [rsp+50h] [rbp-A1h] BYREF
  int v14; // [rsp+54h] [rbp-9Dh]
  int v15; // [rsp+58h] [rbp-99h]
  int v16; // [rsp+5Ch] [rbp-95h]
  int v17; // [rsp+60h] [rbp-91h]
  int v18; // [rsp+64h] [rbp-8Dh] BYREF
  _QWORD v19[2]; // [rsp+68h] [rbp-89h] BYREF
  _QWORD v20[3]; // [rsp+78h] [rbp-79h] BYREF
  int v21; // [rsp+90h] [rbp-61h]
  __int16 v22; // [rsp+98h] [rbp-59h]
  _BYTE v23[32]; // [rsp+A0h] [rbp-51h] BYREF
  __int16 v24; // [rsp+C0h] [rbp-31h] BYREF
  _BYTE v25[32]; // [rsp+C8h] [rbp-29h] BYREF
  char v26; // [rsp+E8h] [rbp-9h]

  v11 = 0;
  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v14 = a2;
    v15 = a5;
    v16 = a3;
    v17 = a4;
    v18 = a6;
    v20[1] = 0;
    v20[2] = 0;
    v21 = 0;
    v20[0] = &PXEngine::ByteStreamWriter::`vftable';
    v19[0] = v20;
    v13 = a2;
    if ( sub_1401D0820(a1: v20, a2: &v13) != 0
      && (v14 = v13, v13 = v15, sub_1401D0820(a1: v20, a2: &v13) != 0)
      && (v15 = v13, v13 = v16, sub_1401D0820(a1: v20, a2: &v13) != 0)
      && (v16 = v13, v13 = v17, sub_140200540(a1: v20, a2: &v13) != 0)
      && (v17 = v13, (unsigned __int8)sub_1402B7CD0(a1: v19, a2: &v18) != 0) )
    {
      v22 = word_141313D74;
      sub_140A255B0(a1: v23, a2: v20);
      v24 = v22;
      sub_140A255B0(a1: v25, a2: v23);
      v26 = 1;
      sub_140A25690(a1: v23);
    }
    else
    {
      v26 = 0;
    }
    sub_140A25690(a1: v20);
    sub_1407EE6B0(a1: &v24);
    if ( a2 != 0 )
    {
      if ( a2 != 1 )
      {
        if ( a2 == 2 )
          v11 = a3;
        goto LABEL_25;
      }
      if ( a3 != 5 )
      {
        if ( a3 == 6 )
        {
          v11 = 3;
LABEL_25:
          sub_1405F1D40(a1: v19, a2: a7);
          v19[0] = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_1403C18B0)(
            a1,
            a2: (unsigned int)v19,
            a3: a5,
            a4: a2,
            a5: a3,
            a6: a4,
            a7: (float)a6,
            a8: (float)a6,
            a9: v11);
          return;
        }
        if ( a3 != 7 )
          goto LABEL_25;
LABEL_17:
        v11 = 2;
        goto LABEL_25;
      }
    }
    else
    {
      if ( a3 != 4 )
        goto LABEL_25;
      if ( a4 != 1 )
      {
        if ( a4 != 2 )
        {
          v12 = 0;
          if ( a4 == 3 )
            v12 = 3;
          v11 = v12;
          goto LABEL_25;
        }
        goto LABEL_17;
      }
    }
    v11 = 1;
    goto LABEL_25;
  }
}