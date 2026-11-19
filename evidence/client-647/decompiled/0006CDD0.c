unsigned int __fastcall sub_14006CDD0(void *file)
{
  __int64 v2; // rcx

  if ( *((_QWORD *)file + 15) == 0 )
    return 0;
  v2 = *((_QWORD *)file + 16);
  if ( v2 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140EF9DB8) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    JUMPOUT(0x14006CE19LL);
  }
  return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 136LL))(a1: v2);
}