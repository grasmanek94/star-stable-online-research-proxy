HKEY __fastcall sub_140A4C0A0(HKEY a1)
{
  DWORD cbData; // [rsp+30h] [rbp-138h] BYREF
  DWORD Type; // [rsp+34h] [rbp-134h] BYREF
  HKEY hKey[3]; // [rsp+38h] [rbp-130h] BYREF
  BYTE Data[256]; // [rsp+50h] [rbp-118h] BYREF

  hKey[1] = a1;
  *(_OWORD *)a1 = 0;
  *((_QWORD *)a1 + 2) = 0;
  *((_QWORD *)a1 + 3) = 15;
  *(_BYTE *)a1 = 0;
  if ( RegOpenKeyExA(
         hKey: HKEY_LOCAL_MACHINE,
         lpSubKey: "SOFTWARE\\Microsoft\\Cryptography",
         ulOptions: 0,
         samDesired: 0x20119u,
         phkResult: hKey) == 0 )
  {
    sub_140E827B0(a1: Data, a2: 0, a3: 255);
    cbData = 255;
    Type = 1;
    RegQueryValueExA(
      hKey: hKey[0],
      lpValueName: "MachineGuid",
      lpReserved: nullptr,
      lpType: &Type,
      lpData: Data,
      lpcbData: &cbData);
    RegCloseKey(hKey: hKey[0]);
    sub_140018D50(a1, a2: Data);
  }
  return a1;
}