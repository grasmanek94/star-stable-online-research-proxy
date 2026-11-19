// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_140106200(__int64 a1)
{
  __int64 v2; // rax

  v2 = sub_1405F8CF0(a1: a1 + 8);
  if ( v2 == 0 )
  {
    if ( (unsigned __int8)sub_140059AF0(
                            a1: off_140EFEB70,
                            a2: "Delegate called, but was bound to a destroyed actor. Please call IsBound() on the delegate first") != 0 )
      __debugbreak();
    sub_1409E7D98(a1: 999);
    JUMPOUT(0x140106258LL);
  }
  return (*(__int64 (__fastcall **)(__int64))(a1 + 24))(a1: v2);
}