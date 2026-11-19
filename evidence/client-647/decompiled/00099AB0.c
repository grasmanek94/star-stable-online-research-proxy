__int64 *__fastcall sub_140099AB0(__int64 *a1, __int64 *a2)
{
  char v3; // al
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2[1] != 0 )
  {
    v4 = *a2;
    v7[1] = a2[1];
    v5 = *a1;
    v7[0] = v4;
    v7[2] = 1;
    if ( (unsigned int)sub_140952850(a1: v5, a2: 40309, a3: v7) == 0 )
      return a1;
    v3 = sub_140059D90(a1: off_140F30158, a2: "Http: Failed to apply CA certificate.");
  }
  else
  {
    v3 = sub_140059D90(a1: off_140F30108, a2: "Http: Empty CA certificate.");
  }
  if ( v3 != 0 )
    __debugbreak();
  return a1;
}