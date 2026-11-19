_QWORD *__fastcall sub_140099250(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  *a1 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a1[1] = v2;
  v3 = a2[2];
  a2[1] = 0;
  a1[2] = v3;
  a2[2] = 0;
  return a1;
}