// Read-only Hex-Rays export, client 645.348067.
__int64 __fastcall sub_1406FC710(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx

  result = *(unsigned int *)(a2 + 16);
  if ( (unsigned int)result < 0x10 )
  {
    v7 = 2LL * (unsigned int)result;
    result = sub_14074EDA0(a1: *(_QWORD *)(a1 + 16LL * (unsigned int)result));
    if ( (_BYTE)result != 0 )
    {
      v8 = *(_QWORD *)(a1 + 8 * v7);
      if ( v8 != 0 )
        return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 16LL))(a1: v8, a2, a3);
    }
  }
  return result;
}