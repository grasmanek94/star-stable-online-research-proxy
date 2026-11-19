// Read-only Hex-Rays export, client 645.348067.
__int64 __fastcall sub_140111F00(__int64 a1)
{
  float v2; // xmm0_4
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // ecx
  void *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // r14
  __int64 v24; // r15
  __int64 v25; // rdi
  unsigned int v26; // ebx
  unsigned int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  int v35; // ecx
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  float v44; // xmm3_4
  __int64 v45; // r9
  float v47; // [rsp+20h] [rbp-59h] BYREF
  float v48; // [rsp+24h] [rbp-55h]
  float v49; // [rsp+28h] [rbp-51h]
  float v50; // [rsp+30h] [rbp-49h] BYREF
  float v51; // [rsp+34h] [rbp-45h]
  float v52; // [rsp+38h] [rbp-41h]
  float v53[4]; // [rsp+40h] [rbp-39h] BYREF
  float v54; // [rsp+50h] [rbp-29h] BYREF
  float v55; // [rsp+54h] [rbp-25h]
  float v56; // [rsp+58h] [rbp-21h]
  _BYTE v57[8]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v58; // [rsp+68h] [rbp-11h]
  unsigned int v59; // [rsp+6Ch] [rbp-Dh]
  _BYTE v60[8]; // [rsp+70h] [rbp-9h] BYREF
  int v61; // [rsp+78h] [rbp-1h]
  int v62; // [rsp+7Ch] [rbp+3h]
  LPVOID lpMem[2]; // [rsp+80h] [rbp+7h] BYREF
  LPVOID v64; // [rsp+90h] [rbp+17h]
  __int64 v65; // [rsp+E0h] [rbp+67h] BYREF

  v2 = (float)(sub_1400B4560(a1) * 8.0) + *(float *)(a1 + 1256);
  *(float *)(a1 + 1256) = v2;
  if ( v2 > 1.0 )
  {
    if ( (unsigned __int8)sub_1405F8BA0(a1: a1 + 1296, a2: a1 + 1264) != 0 )
    {
      sub_1405F8B90(a1: a1 + 1280, a2: a1 + 1264);
      v3 = sub_1405F8CF0(a1: a1 + 1280);
      v4 = v3;
      *(_OWORD *)lpMem = 0;
      v64 = nullptr;
      if ( v3 == 0 )
      {
        while ( 1 )
        {
          if ( (unsigned __int8)sub_140059A00(a1: off_140EFF150) != 0 )
            __debugbreak();
          sub_1409E7D98(a1: 999);
LABEL_43:
          if ( (unsigned __int8)sub_140059A00(a1: off_140EFF1A8) != 0 )
            __debugbreak();
          sub_1409E7D98(a1: 999);
        }
      }
      v5 = 0;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(a1: v3) != 0 )
      {
        do
        {
          v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 256LL))(a1: v4, a2: v5);
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 152LL))(a1: v9) != 110 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 256LL))(a1: v4, a2: v5);
            v65 = v10;
            if ( lpMem[1] == v64 )
            {
              sub_140023110(a1: lpMem, a2: lpMem[1], a3: &v65);
            }
            else
            {
              *(_QWORD *)lpMem[1] = v10;
              lpMem[1] = (char *)lpMem[1] + 8;
            }
          }
          ++v5;
        }
        while ( v5 < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 248LL))(a1: v4) );
      }
      if ( lpMem[0] != lpMem[1] )
      {
        v11 = qword_141379EF0;
        v12 = sub_1409E7DA4(a1: v7, a2: v6, a3: v8);
        v13 = ((char *)lpMem[1] - (char *)lpMem[0]) >> 3;
        if ( v12 % v13 >= v13 )
          __fastfail(5u);
        v14 = *((_QWORD *)lpMem[0] + v12 % v13);
        if ( v14 != 0
          && (sub_1405F8B50(a1: v57, a2: v14 + 120), (unsigned __int8)sub_140607410(a1: v11, a2: v57, a3: 1) != 0) )
        {
          sub_1405F8B70(a1: v60, a2: v59, a3: v58);
          v15 = v62;
          v16 = v61;
        }
        else
        {
          v16 = 0;
          v15 = 195948557;
        }
        *(_DWORD *)(a1 + 1304) = v16;
        *(_DWORD *)(a1 + 1308) = v15;
      }
      *(_BYTE *)(a1 + 1364) |= 0x10u;
      if ( lpMem[0] != nullptr )
      {
        if ( (unsigned __int64)(8 * ((signed __int64)((__int64)v64 - (unsigned __int64)lpMem[0]) >> 3)) < 0x1000 )
        {
          sub_1409E08A0(lpMem: lpMem[0]);
        }
        else
        {
          v17 = *((void **)lpMem[0] - 1);
          if ( (unsigned __int64)((char *)lpMem[0] - (char *)v17 - 8) > 0x1F )
            __fastfail(5u);
          sub_1409E08A0(lpMem: v17);
        }
      }
    }
    else if ( (*(_BYTE *)(a1 + 1364) & 0x10) != 0
           && (v18 = sub_1405F8D10(a1: a1 + 1296),
               (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 248LL))(a1: v18) != 0) )
    {
      sub_1405F8B90(a1: a1 + 1280, a2: a1 + 1296);
      v19 = (_QWORD *)sub_1405F8CF0(a1: a1 + 1280);
      v23 = v19;
      if ( v19 == nullptr )
        goto LABEL_43;
      v24 = qword_141379EF0;
      v25 = *v19;
      v26 = sub_1409E7DA4(a1: v21, a2: v20, a3: v22);
      v27 = (*(__int64 (__fastcall **)(_QWORD *))(*v23 + 248LL))(a1: v23);
      v28 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v25 + 256))(a1: v23, a2: v26 % v27);
      if ( v28 != 0
        && (sub_1405F8B50(a1: v57, a2: v28 + 120), (unsigned __int8)sub_140607410(a1: v24, a2: v57, a3: 1) != 0) )
      {
        sub_1405F8B70(a1: v60, a2: v59, a3: v58);
        v29 = v62;
        v30 = v61;
      }
      else
      {
        v30 = 0;
        v29 = 195948557;
      }
      *(_DWORD *)(a1 + 1304) = v30;
      *(_DWORD *)(a1 + 1308) = v29;
      *(_BYTE *)(a1 + 1364) |= 0x10u;
    }
    else
    {
      sub_1405F8B90(a1: a1 + 1280, a2: a1 + 1296);
      v31 = qword_141379EF0;
      v32 = sub_1405F8D10(a1: a1 + 1280);
      v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 240LL))(a1: v32);
      if ( v33 != 0
        && (sub_1405F8B50(a1: v57, a2: v33 + 120), (unsigned __int8)sub_140607410(a1: v31, a2: v57, a3: 1) != 0) )
      {
        sub_1405F8B70(a1: v60, a2: v59, a3: v58);
        v34 = v62;
        v35 = v61;
      }
      else
      {
        v35 = 0;
        v34 = 195948557;
      }
      *(_DWORD *)(a1 + 1304) = v35;
      *(_DWORD *)(a1 + 1308) = v34;
      *(_BYTE *)(a1 + 1364) &= ~0x10u;
    }
    *(_DWORD *)(a1 + 1256) = 0;
  }
  v36 = sub_1405F8CF0(a1: a1 + 1280);
  v39 = sub_1400B5440(a1: v38, a2: v37);
  sub_1400CC650(a1: v36, a2: &v54, a3: v39);
  v40 = sub_1405F8CF0(a1: a1 + 1296);
  v43 = sub_1400B5440(a1: v42, a2: v41);
  sub_1400CC650(a1: v40, a2: v53, a3: v43);
  v44 = *(float *)(a1 + 1256);
  v47 = (float)((float)(v53[0] - v54) * v44) + v54;
  v48 = (float)((float)(v53[1] - v55) * v44) + v55;
  v49 = (float)((float)(v53[2] - v56) * v44) + v56;
  sub_1406A3E50(a1: qword_141379EF8, a2: &v50);
  v50 = -v50;
  v51 = -v51;
  v52 = -v52;
  v47 = v47 + (float)(v50 * 0.30000001);
  v48 = v48 + (float)(v51 * 0.30000001);
  v49 = v49 + (float)(v52 * 0.30000001);
  LOBYTE(v45) = 1;
  return (*(__int64 (__fastcall **)(__int64, float *, __int64, __int64))(*(_QWORD *)a1 + 680LL))(
           a1,
           a2: &v47,
           a3: 1,
           a4: v45);
}