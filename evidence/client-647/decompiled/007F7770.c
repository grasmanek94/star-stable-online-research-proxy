__int64 __fastcall sub_1407F7770(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &PXEngine::NetManagerObject::`vftable';
  result = a1[1];
  if ( result != 0 )
    return sub_1407F4240(a1: a1[1], a2: a1);
  return result;
}