__int64 __fastcall sub_14082B7F0(__int64 a1, _DWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v10; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  int v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+88h] [rbp+28h] BYREF
  int v16; // [rsp+90h] [rbp+30h] BYREF
  int v17; // [rsp+98h] [rbp+38h] BYREF

  v10 = a2;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v9 = 0;
  if ( sub_1402AF380(a1: a2, a2: &v9) != 0 )
  {
    v11 = v9;
    v15 = v12;
    if ( sub_1401D0820(a1: a2, a2: &v15) != 0 )
    {
      LODWORD(v12) = v15;
      v16 = HIDWORD(v12);
      if ( sub_1401D0820(a1: a2, a2: &v16) != 0 )
      {
        HIDWORD(v12) = v16;
        v17 = v13;
        if ( sub_1401D0820(a1: a2, a2: &v17) != 0 )
        {
          LODWORD(v13) = v17;
          if ( sub_1402B7CD0(a1: &v10, a2: (int *)&v13 + 1) != 0 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
            {
              v8 = 0;
              if ( sub_140200540(a1: a2, a2: &v8) != 0 )
              {
                v14 = v8;
LABEL_10:
                v4 = *(_QWORD *)(a1 + 216);
                v5 = v4;
                for ( result = *(_QWORD *)(v4 + 8); *(_BYTE *)(result + 25) == 0; result = *(_QWORD *)result )
                {
                  if ( *(_QWORD *)(result + 32) >= v11 )
                    v5 = result;
                  else
                    result += 16;
                }
                if ( *(_BYTE *)(v5 + 25) == 0 && v11 >= *(_QWORD *)(v5 + 32) && v5 != v4 )
                {
                  v7 = sub_1405F1EE0(a1: v5 + 40);
                  if ( v7 == 0 )
                  {
                    if ( (unsigned __int8)sub_140059CA0(a1: off_141024990) != 0 )
                      __debugbreak();
                    sub_1409E29B8(a1: 999);
                    __debugbreak();
                  }
                  return sub_14081EF00(a1: v7, a2: &v11);
                }
                return result;
              }
            }
            else
            {
              v8 = v14;
              if ( sub_140200540(a1: a2, a2: &v8) != 0 )
                goto LABEL_10;
            }
          }
        }
      }
    }
  }
  result = sub_140059D90(
             a1: off_1410252C8,
             a2: "GardenCentre::PickItemResponse Failed to deserialize GardeningPickItemMessageResponse!");
  if ( (_BYTE)result != 0 )
    __debugbreak();
  return result;
}