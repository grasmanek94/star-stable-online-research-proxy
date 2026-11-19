__int64 __fastcall sub_14008AAC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 64);
  if ( result != 0 )
    return *(unsigned int *)(result + 20);
  return result;
}