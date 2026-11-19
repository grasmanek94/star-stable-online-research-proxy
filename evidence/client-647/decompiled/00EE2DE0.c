void sub_140EE2DE0()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_1413143B0 > 0xF )
  {
    v0 = *(void **)aScriptbinary;
    if ( (unsigned __int64)(qword_1413143B0 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aScriptbinary - *(_QWORD *)(*(_QWORD *)aScriptbinary - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aScriptbinary - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aScriptbinary = 19937;
  qword_1413143A8 = 0;
  qword_1413143B0 = 31;
}