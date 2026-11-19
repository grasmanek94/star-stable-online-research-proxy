// Hex-Rays export; function matched through nearby assertion-record references; confirm role in the text.
__int64 __fastcall sub_140651B80(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // r14
  unsigned int v5; // esi
  unsigned int v6; // ecx
  char *v7; // r10
  char *v8; // r8
  unsigned int v9; // edx
  __int64 v10; // rax
  int v11; // ebx
  _QWORD *v12; // r8
  __int64 v13; // rax
  __int128 v14; // xmm7
  __m128i v15; // xmm6
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  char *v18; // rax
  _BYTE *v19; // r8
  unsigned __int64 v20; // xmm6_8
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  _QWORD v25[2]; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-89h] BYREF
  __int64 v27; // [rsp+58h] [rbp-79h]
  unsigned __int64 v28; // [rsp+60h] [rbp-71h]
  _QWORD v29[3]; // [rsp+68h] [rbp-69h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp-51h]
  char v31; // [rsp+88h] [rbp-49h] BYREF
  char v32; // [rsp+BCh] [rbp-15h] BYREF
  _BYTE v33[3]; // [rsp+BDh] [rbp-14h] BYREF

  v25[1] = a1;
  sub_1409E06F0(a1, a2: 56, a3: 256, a4: sub_140650FE0, a5: sub_140651140);
  v2 = 1;
  HIDWORD(v25[0]) = 1;
  sub_14000D6E0(a1, a2: "Pelvis", a3: 6);
  sub_14000D6E0(a1: a1 + 56, a2: "LUpperLeg", a3: 9);
  sub_14000D6E0(a1: a1 + 112, a2: "LLowerLeg", a3: 9);
  sub_14000D6E0(a1: a1 + 168, a2: "LFoot", a3: 5);
  v3 = 7;
  sub_14000D6E0(a1: a1 + 224, a2: "LBigToe", a3: 7);
  sub_14000D6E0(a1: a1 + 280, a2: "LBigToe2", a3: 8);
  sub_14000D6E0(a1: a1 + 336, a2: "LBigToe3", a3: 8);
  sub_14000D6E0(a1: a1 + 392, a2: "LToe1", a3: 5);
  sub_14000D6E0(a1: a1 + 448, a2: "LToe11", a3: 6);
  sub_14000D6E0(a1: a1 + 504, a2: "LToe12", a3: 6);
  sub_14000D6E0(a1: a1 + 560, a2: "LToe2", a3: 5);
  sub_14000D6E0(a1: a1 + 616, a2: "LToe21", a3: 6);
  sub_14000D6E0(a1: a1 + 672, a2: "LToe22", a3: 6);
  sub_14000D6E0(a1: a1 + 728, a2: "LToe3", a3: 5);
  sub_14000D6E0(a1: a1 + 784, a2: "LToe31", a3: 6);
  sub_14000D6E0(a1: a1 + 840, a2: "LToe32", a3: 6);
  sub_14000D6E0(a1: a1 + 896, a2: "LToe4", a3: 5);
  sub_14000D6E0(a1: a1 + 952, a2: "LToe41", a3: 6);
  sub_14000D6E0(a1: a1 + 1008, a2: "LToe42", a3: 6);
  sub_14000D6E0(a1: a1 + 1064, a2: "RUpperLeg", a3: 9);
  sub_14000D6E0(a1: a1 + 1120, a2: "RLowerLeg", a3: 9);
  sub_14000D6E0(a1: a1 + 1176, a2: "RFoot", a3: 5);
  sub_14000D6E0(a1: a1 + 1232, a2: "RBigToe", a3: 7);
  sub_14000D6E0(a1: a1 + 1288, a2: "RBigToe1", a3: 8);
  sub_14000D6E0(a1: a1 + 1344, a2: "RBigToe2", a3: 8);
  sub_14000D6E0(a1: a1 + 1400, a2: "RToe1", a3: 5);
  sub_14000D6E0(a1: a1 + 1456, a2: "RToe11", a3: 6);
  sub_14000D6E0(a1: a1 + 1512, a2: "RToe12", a3: 6);
  sub_14000D6E0(a1: a1 + 1568, a2: "RToe2", a3: 5);
  sub_14000D6E0(a1: a1 + 1624, a2: "RToe21", a3: 6);
  sub_14000D6E0(a1: a1 + 1680, a2: "RToe22", a3: 6);
  sub_14000D6E0(a1: a1 + 1736, a2: "RToe3", a3: 5);
  sub_14000D6E0(a1: a1 + 1792, a2: "RToe31", a3: 6);
  sub_14000D6E0(a1: a1 + 1848, a2: "RToe32", a3: 6);
  sub_14000D6E0(a1: a1 + 1904, a2: "RToe4", a3: 5);
  sub_14000D6E0(a1: a1 + 1960, a2: "RToe41", a3: 6);
  sub_14000D6E0(a1: a1 + 2016, a2: "RToe42", a3: 6);
  sub_14000D6E0(a1: a1 + 2072, a2: &dword_140F568B0, a3: 5);
  sub_14000D6E0(a1: a1 + 2128, a2: &dword_140F72834, a3: 6);
  sub_14000D6E0(a1: a1 + 2184, a2: &dword_140F72854, a3: 6);
  sub_14000D6E0(a1: a1 + 2240, a2: &dword_140EFE7BC, a3: 6);
  sub_14000D6E0(a1: a1 + 2296, a2: "Spine4", a3: 6);
  sub_14000D6E0(a1: a1 + 2352, a2: "Neck", a3: 4);
  sub_14000D6E0(a1: a1 + 2408, a2: "Neck1", a3: 5);
  sub_14000D6E0(a1: a1 + 2464, a2: &dword_140EFE7C4, a3: 5);
  sub_14000D6E0(a1: a1 + 2520, a2: "Neck3", a3: 5);
  sub_14000D6E0(a1: a1 + 2576, a2: "Neck4", a3: 5);
  sub_14000D6E0(a1: a1 + 2632, a2: "Head", a3: 4);
  sub_14000D6E0(a1: a1 + 2688, a2: "LShoulder", a3: 9);
  sub_14000D6E0(a1: a1 + 2744, a2: "LUpperArm", a3: 9);
  sub_14000D6E0(a1: a1 + 2800, a2: "LLowerArm", a3: 9);
  sub_14000D6E0(a1: a1 + 2856, a2: "LHand", a3: 5);
  sub_14000D6E0(a1: a1 + 2912, a2: "LThumb", a3: 6);
  sub_14000D6E0(a1: a1 + 2968, a2: "LThumb1", a3: 7);
  sub_14000D6E0(a1: a1 + 3024, a2: "LThumb2", a3: 7);
  sub_14000D6E0(a1: a1 + 3080, a2: &qword_140EFE7A0, a3: 8);
  sub_14000D6E0(a1: a1 + 3136, a2: "LFinger11", a3: 9);
  sub_14000D6E0(a1: a1 + 3192, a2: "LFinger12", a3: 9);
  sub_14000D6E0(a1: a1 + 3248, a2: "LFinger2", a3: 8);
  sub_14000D6E0(a1: a1 + 3304, a2: "LFinger21", a3: 9);
  sub_14000D6E0(a1: a1 + 3360, a2: "LFinger22", a3: 9);
  sub_14000D6E0(a1: a1 + 3416, a2: "LFinger3", a3: 8);
  sub_14000D6E0(a1: a1 + 3472, a2: "LFinger31", a3: 9);
  sub_14000D6E0(a1: a1 + 3528, a2: "LFinger32", a3: 9);
  sub_14000D6E0(a1: a1 + 3584, a2: "LFinger4", a3: 8);
  sub_14000D6E0(a1: a1 + 3640, a2: "LFinger41", a3: 9);
  sub_14000D6E0(a1: a1 + 3696, a2: "LFinger42", a3: 9);
  sub_14000D6E0(a1: a1 + 3752, a2: "RShoulder", a3: 9);
  sub_14000D6E0(a1: a1 + 3808, a2: "RUpperArm", a3: 9);
  sub_14000D6E0(a1: a1 + 3864, a2: "RLowerArm", a3: 9);
  sub_14000D6E0(a1: a1 + 3920, a2: "RHand", a3: 5);
  sub_14000D6E0(a1: a1 + 3976, a2: "RThumb", a3: 6);
  sub_14000D6E0(a1: a1 + 4032, a2: "RThumb1", a3: 7);
  sub_14000D6E0(a1: a1 + 4088, a2: "RThumb2", a3: 7);
  sub_14000D6E0(a1: a1 + 4144, a2: &qword_140EFE7B0, a3: 8);
  sub_14000D6E0(a1: a1 + 4200, a2: &qword_140EFE770, a3: 9);
  sub_14000D6E0(a1: a1 + 4256, a2: "RFinger12", a3: 9);
  sub_14000D6E0(a1: a1 + 4312, a2: "RFinger2", a3: 8);
  sub_14000D6E0(a1: a1 + 4368, a2: "RFinger21", a3: 9);
  sub_14000D6E0(a1: a1 + 4424, a2: "RFinger22", a3: 9);
  sub_14000D6E0(a1: a1 + 4480, a2: "RFinger3", a3: 8);
  sub_14000D6E0(a1: a1 + 4536, a2: "RFinger31", a3: 9);
  sub_14000D6E0(a1: a1 + 4592, a2: "RFinger32", a3: 9);
  sub_14000D6E0(a1: a1 + 4648, a2: "RFinger4", a3: 8);
  sub_14000D6E0(a1: a1 + 4704, a2: "RFinger41", a3: 9);
  sub_14000D6E0(a1: a1 + 4760, a2: "RFinger42", a3: 9);
  sub_14000D6E0(a1: a1 + 4816, a2: "Jaw", a3: 3);
  sub_14000D6E0(a1: a1 + 4872, a2: "LMouth", a3: 6);
  sub_14000D6E0(a1: a1 + 4928, a2: "RMouth", a3: 6);
  sub_14000D6E0(a1: a1 + 4984, a2: "UpperLip", a3: 8);
  sub_14000D6E0(a1: a1 + 5040, a2: "LowerLip", a3: 8);
  sub_14000D6E0(a1: a1 + 5096, a2: "LEye", a3: 4);
  sub_14000D6E0(a1: a1 + 5152, a2: "REye", a3: 4);
  sub_14000D6E0(a1: a1 + 5208, a2: "LEyeLid", a3: 7);
  sub_14000D6E0(a1: a1 + 5264, a2: "REyeLid", a3: 7);
  sub_14000D6E0(a1: a1 + 5320, a2: "LEyeBrow", a3: 8);
  sub_14000D6E0(a1: a1 + 5376, a2: "REyeBrow", a3: 8);
  sub_14000D6E0(a1: a1 + 5432, a2: "LEar", a3: 4);
  sub_14000D6E0(a1: a1 + 5488, a2: "REar", a3: 4);
  sub_14000D6E0(a1: a1 + 5544, a2: "LChest", a3: 6);
  sub_14000D6E0(a1: a1 + 5600, a2: "RChest", a3: 6);
  sub_14000D6E0(a1: a1 + 5656, a2: "Tail", a3: 4);
  sub_14000D6E0(a1: a1 + 5712, a2: "Tail1", a3: 5);
  sub_14000D6E0(a1: a1 + 5768, a2: "Tail2", a3: 5);
  sub_14000D6E0(a1: a1 + 5824, a2: "Tail3", a3: 5);
  sub_14000D6E0(a1: a1 + 5880, a2: "Tail4", a3: 5);
  sub_14000D6E0(a1: a1 + 5936, a2: &qword_140EFE790, a3: 9);
  sub_14000D6E0(a1: a1 + 5992, a2: "PonyTail11", a3: 10);
  sub_14000D6E0(a1: a1 + 6048, a2: "PonyTail12", a3: 10);
  sub_14000D6E0(a1: a1 + 6104, a2: "PonyTail13", a3: 10);
  sub_14000D6E0(a1: a1 + 6160, a2: "PonyTail14", a3: 10);
  sub_14000D6E0(a1: a1 + 6216, a2: &qword_140EFE780, a3: 9);
  sub_14000D6E0(a1: a1 + 6272, a2: "PonyTail21", a3: 10);
  sub_14000D6E0(a1: a1 + 6328, a2: "PonyTail22", a3: 10);
  sub_14000D6E0(a1: a1 + 6384, a2: "PonyTail23", a3: 10);
  sub_14000D6E0(a1: a1 + 6440, a2: "PonyTail24", a3: 10);
  v26[1] = 0;
  v27 = 7;
  v4 = 15;
  v28 = 15;
  v26[0] = 0x6C616963657053LL;
  v5 = 116;
  while ( 1 )
  {
    v6 = v5 - 115;
    if ( v5 - 115 >= 0xA )
    {
      v7 = v33;
      do
      {
        v8 = v7;
        v9 = v6 / 0x64;
        v10 = v6 % 0x64;
        v6 = v9;
        v7 -= 2;
        *(_WORD *)v7 = *(_WORD *)&a00010203040506_0[2 * v10];
      }
      while ( v9 >= 0xA );
      if ( v9 != 0 )
      {
        v7 = v8 - 3;
        *(v8 - 3) = v9 + 48;
      }
    }
    else
    {
      v32 = v6 + 48;
      v7 = &v32;
    }
    sub_1400560E0(a1: v29, a2: v7, a3: v33, a4: v25);
    v11 = v2 | 6;
    HIDWORD(v25[0]) = v11;
    v12 = v26;
    if ( v4 > 0xF )
      v12 = (_QWORD *)v26[0];
    v13 = sub_140010C00(a1: v29, a2: 0, a3: v12, a4: v3);
    v14 = *(_OWORD *)v13;
    v15 = *(__m128i *)(v13 + 16);
    *(_QWORD *)(v13 + 16) = 0;
    *(_QWORD *)(v13 + 24) = 15;
    *(_BYTE *)v13 = 0;
    v2 = v11 | 8;
    HIDWORD(v25[0]) = v2;
    v16 = a1 + 56LL * v5;
    if ( (char *)v16 == &v31 )
    {
      v20 = _mm_srli_si128(v15, 8).m128i_u64[0];
      if ( v20 > 0xF )
      {
        v21 = (void *)v14;
        if ( v20 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v14 - *(_QWORD *)(v14 - 8) - 8) > 0x1F )
LABEL_29:
            __fastfail(5u);
          v21 = *(void **)(v14 - 8);
        }
        sub_1409E08A0(lpMem: v21);
      }
    }
    else
    {
      v17 = *(_QWORD *)(v16 + 24);
      if ( v17 <= 0xF )
        goto LABEL_16;
      v18 = *(char **)v16;
      if ( v17 + 1 < 0x1000 )
      {
        sub_1409E08A0(lpMem: *(LPVOID *)v16);
LABEL_16:
        *(_OWORD *)v16 = v14;
        *(__m128i *)(v16 + 16) = v15;
        goto LABEL_22;
      }
      v19 = *((_BYTE **)v18 - 1);
      if ( (unsigned __int64)(v18 - v19 - 8) > 0x1F )
        goto LABEL_29;
      sub_1409E08A0(lpMem: v19);
      *(_OWORD *)v16 = v14;
      *(__m128i *)(v16 + 16) = v15;
    }
LABEL_22:
    if ( v30 > 0xF )
    {
      v22 = (void *)v29[0];
      if ( v30 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v29[0] - *(_QWORD *)(v29[0] - 8LL) - 8LL) > 0x1F )
          __fastfail(5u);
        v22 = *(void **)(v29[0] - 8LL);
      }
      sub_1409E08A0(lpMem: v22);
    }
    if ( ++v5 >= 0x100 )
      break;
    v4 = v28;
    v3 = v27;
  }
  if ( v28 > 0xF )
  {
    v23 = (void *)v26[0];
    if ( v28 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v26[0] - *(_QWORD *)(v26[0] - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v23 = *(void **)(v26[0] - 8LL);
    }
    sub_1409E08A0(lpMem: v23);
  }
  return a1;
}