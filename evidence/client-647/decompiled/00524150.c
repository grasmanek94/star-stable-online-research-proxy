__int64 __fastcall sub_140524150(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-88h] BYREF
  int v10; // [rsp+38h] [rbp-70h]
  __int16 v11; // [rsp+40h] [rbp-68h]
  _BYTE v12[32]; // [rsp+48h] [rbp-60h] BYREF
  __int16 v13; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v14[32]; // [rsp+70h] [rbp-38h] BYREF
  char v15; // [rsp+90h] [rbp-18h]
  unsigned int v16; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+B8h] [rbp+10h]

  v17 = a2;
  v4 = a1[42];
  for ( result = *(_QWORD *)(v4 + 8); *(_BYTE *)(result + 25) == 0; result = *(_QWORD *)result )
  {
    if ( *(_DWORD *)(result + 28) >= a2 )
      v4 = result;
    else
      result += 16;
  }
  if ( *(_BYTE *)(v4 + 25) != 0 || a2 < *(_DWORD *)(v4 + 28) )
  {
    v6 = a1[37];
    v7 = *(_QWORD *)(v6
                   + 16
                   * ((0x100000001B3LL
                     * (HIBYTE(v17)
                      ^ (0x100000001B3LL
                       * (BYTE2(v17)
                        ^ (0x100000001B3LL
                         * (BYTE1(v17) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL))))))))
                    & a1[40])
                   + 8);
    v8 = a1[35];
    if ( v7 != v8 )
    {
      if ( a2 == *(_DWORD *)(v7 + 16) )
      {
LABEL_12:
        if ( v7 == 0 )
          v7 = a1[35];
        if ( v7 != v8 )
        {
          result = sub_1405F1EE0(a1: v7 + 24);
          if ( result != 0 )
          {
            result = sub_1405293A0(a1: result);
            if ( (_BYTE)result != 0 )
            {
              v9[1] = 0;
              v9[2] = 0;
              v10 = 0;
              v9[0] = &PXEngine::ByteStreamWriter::`vftable';
              v16 = a2;
              if ( sub_1401D0820(a1: v9, a2: &v16) != 0 )
              {
                v11 = word_141313E14;
                sub_140A255B0(a1: v12, a2: v9);
                v13 = v11;
                sub_140A255B0(a1: v14, a2: v12);
                v15 = 1;
                sub_140A25690(a1: v12);
              }
              else
              {
                v15 = 0;
              }
              sub_140A25690(a1: v9);
              return sub_1407EE6B0(a1: &v13);
            }
          }
          return result;
        }
      }
      else
      {
        while ( v7 != *(_QWORD *)(v6
                                + 16
                                * ((0x100000001B3LL
                                  * (HIBYTE(v17)
                                   ^ (0x100000001B3LL
                                    * (BYTE2(v17)
                                     ^ (0x100000001B3LL
                                      * (BYTE1(v17) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL))))))))
                                 & a1[40])) )
        {
          v7 = *(_QWORD *)(v7 + 8);
          if ( a2 == *(_DWORD *)(v7 + 16) )
            goto LABEL_12;
        }
      }
    }
    result = sub_140059D90(a1: off_140FBD448, a2: "CraftingManager::RequestUnlockRecipe: Could not find recipe %u", a2);
    if ( (_BYTE)result != 0 )
      __debugbreak();
  }
  return result;
}