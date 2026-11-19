__int64 __fastcall sub_1403D0B10(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rbx
  char **v7; // rbx
  char **v8; // rdi
  unsigned __int64 v9; // rcx
  char *v10; // rax
  char *v11; // r8
  char **v12; // rcx
  LPVOID lpMem[2]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v14; // [rsp+30h] [rbp-39h]
  _QWORD v15[3]; // [rsp+38h] [rbp-31h] BYREF
  int v16; // [rsp+50h] [rbp-19h]
  __int16 v17; // [rsp+58h] [rbp-11h]
  _BYTE v18[32]; // [rsp+60h] [rbp-9h] BYREF
  __int16 v19; // [rsp+80h] [rbp+17h] BYREF
  char v20[32]; // [rsp+88h] [rbp+1Fh] BYREF
  char v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+D0h] [rbp+67h] BYREF

  if ( *(_QWORD *)(a1 + 208) != 0 )
    sub_1403D1520();
  v4 = (_QWORD *)(a1 + 200);
  result = sub_14005AB40(a1: a1 + 200, a2: lpMem, a3: a2);
  v6 = v14;
  if ( *(_BYTE *)(v14 + 25) == 0 )
  {
    result = sub_14005C290(a1: v4, a2, a3: v14 + 32);
    if ( (_BYTE)result == 0 && v6 != *v4 )
    {
      result = (unsigned int)++*(_DWORD *)(v6 + 64);
      v22 = *(_DWORD *)(v6 + 64);
      if ( *(_QWORD *)&nExitCode != 0 )
      {
        *(_OWORD *)lpMem = 0;
        v14 = 0;
        sub_1403CEC20(a1: lpMem, a2: 0, a3: a2, a4: &v22);
        v15[1] = 0;
        v15[2] = 0;
        v16 = 0;
        v15[0] = &PXEngine::ByteStreamWriter::`vftable';
        if ( (unsigned __int8)sub_1403CE360(a1: v15, a2: lpMem) != 0 )
        {
          v17 = word_141313D34;
          sub_140A255B0(a1: v18, a2: v15);
          v19 = v17;
          sub_140A255B0(a1: v20, a2: v18);
          v21 = 1;
          sub_140A25690(a1: v18);
        }
        else
        {
          v21 = 0;
        }
        sub_140A25690(a1: v15);
        result = sub_1407EE6B0(a1: &v19);
        v7 = (char **)lpMem[0];
        if ( lpMem[0] != nullptr )
        {
          v8 = (char **)lpMem[1];
          if ( lpMem[0] != lpMem[1] )
          {
            do
            {
              v9 = (unsigned __int64)v7[3];
              if ( v9 > 0xF )
              {
                v10 = *v7;
                if ( v9 + 1 < 0x1000 )
                {
                  v11 = *v7;
                }
                else
                {
                  v11 = *((char **)v10 - 1);
                  if ( (unsigned __int64)(v10 - v11 - 8) > 0x1F )
                    goto LABEL_22;
                }
                sub_1409DB4C0(lpMem: v11);
              }
              *v7 = (char *)19937;
              v7[2] = nullptr;
              v7[3] = (char *)31;
              v7 += 5;
            }
            while ( v7 != v8 );
            v7 = (char **)lpMem[0];
          }
          if ( (unsigned __int64)(40 * ((v14 - (__int64)v7) / 40)) < 0x1000 )
          {
            v12 = v7;
          }
          else
          {
            v12 = (char **)*(v7 - 1);
            if ( (unsigned __int64)((char *)v7 - (char *)v12 - 8) > 0x1F )
LABEL_22:
              __fastfail(5u);
          }
          return sub_1409DB4C0(lpMem: v12);
        }
      }
    }
  }
  return result;
}