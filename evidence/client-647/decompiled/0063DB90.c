__int64 __fastcall sub_14063DB90(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 968);
  v3 = *(_QWORD *)(a1 + 960);
  if ( v3 != v1 )
  {
    do
    {
      sub_140017B20(a1: v3);
      v3 += 40;
    }
    while ( v3 != v1 );
    result = *(_QWORD *)(a1 + 960);
    *(_QWORD *)(a1 + 968) = result;
  }
  return result;
}