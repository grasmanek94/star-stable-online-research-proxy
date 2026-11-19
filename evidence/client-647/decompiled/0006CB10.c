__int64 __fastcall sub_14006CB10(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 128) == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140EFA078) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    JUMPOUT(0x14006CB4BLL);
  }
  return sub_14006CA30(a1: *(_QWORD *)(a1 + 128), a2: *(_QWORD *)(a1 + 120));
}