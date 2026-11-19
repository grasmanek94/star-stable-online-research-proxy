__int64 __fastcall sub_1407F3630(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 result; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  if ( a1 != a2 )
  {
    v4 = (_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(a2 + 32) > 0xFu )
      v4 = (_QWORD *)*v4;
    sub_14001CF20(a1: a1 + 8, a2: v4, a3: *(_QWORD *)(a2 + 24));
  }
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 220) = *(_QWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 228) = *(_DWORD *)(a2 + 60);
  *(_OWORD *)(a1 + 244) = *(_OWORD *)(a2 + 64);
  sub_1401D4D40(a1: a1 + 152, a2: a2 + 96);
  *(_QWORD *)(a1 + 132) = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 88);
  *(_BYTE *)(a1 + 144) = *(_BYTE *)(a2 + 92);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 164);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 168);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 172);
  *(_DWORD *)(a1 + 56) ^= ((unsigned __int8)*(_DWORD *)(a1 + 56) ^ *(_BYTE *)(a2 + 191)) & 1;
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 176);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(a1 + 68) ^= ((unsigned __int8)*(_DWORD *)(a1 + 68) ^ *(_BYTE *)(a2 + 192)) & 1;
  *(_BYTE *)(a1 + 44) = *(_BYTE *)(a2 + 184);
  *(_BYTE *)(a1 + 294) = *(_BYTE *)(a2 + 185);
  *(_BYTE *)(a1 + 295) = *(_BYTE *)(a2 + 186);
  *(_DWORD *)(a1 + 100) = *(unsigned __int8 *)(a2 + 187);
  *(_DWORD *)(a1 + 288) = *(unsigned __int8 *)(a2 + 188);
  *(_BYTE *)(a1 + 292) = *(_BYTE *)(a2 + 189);
  *(_DWORD *)(a1 + 40) = *(unsigned __int8 *)(a2 + 190);
  *(_BYTE *)(a1 + 293) ^= (*(_BYTE *)(a2 + 193) ^ *(_BYTE *)(a1 + 293)) & 1;
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 216);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 220);
  *(_BYTE *)(a1 + 88) = *(_BYTE *)(a2 + 224);
  *(_BYTE *)(a1 + 89) = *(_BYTE *)(a2 + 225);
  *(_BYTE *)(a1 + 90) = *(_BYTE *)(a2 + 226);
  *(_DWORD *)(a1 + 112) = *(unsigned __int8 *)(a2 + 227);
  *(_DWORD *)(a1 + 116) = *(unsigned __int8 *)(a2 + 228);
  *(_DWORD *)(a1 + 120) = *(unsigned __int8 *)(a2 + 229);
  *(_DWORD *)(a1 + 124) = *(unsigned __int8 *)(a2 + 230);
  result = *(unsigned __int8 *)(a2 + 231);
  *(_DWORD *)(a1 + 128) = result;
  return result;
}