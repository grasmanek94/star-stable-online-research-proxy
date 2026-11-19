// Baseline 645.348067; IDA base 0x140000000. Exported through Official IDA MCP.
void __fastcall sub_140330AE0(__int64 *a1, __int64 a2, __int64 a3)
{
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm6_4
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  double v20; // xmm0_8
  int v21; // xmm11_4
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  float *v26; // rax
  float v27; // xmm9_4
  float v28; // xmm8_4
  float v29; // xmm6_4
  float v30; // xmm4_4
  float v31; // xmm7_4
  float v32; // xmm3_4
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rbx
  __int64 v42; // rdx
  _QWORD *v43; // rsi
  _QWORD *v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rax
  void (__fastcall ***v52)(_QWORD, __int64); // rcx
  float v53; // [rsp+28h] [rbp-89h] BYREF
  float v54; // [rsp+2Ch] [rbp-85h]
  float v55; // [rsp+30h] [rbp-81h]
  unsigned int v56; // [rsp+34h] [rbp-7Dh]
  _BYTE v57[16]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v58[2]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v59; // [rsp+58h] [rbp-59h]
  int v60; // [rsp+68h] [rbp-49h]
  __int128 v61; // [rsp+70h] [rbp-41h]
  void (__fastcall ***v62)(_QWORD, __int64); // [rsp+118h] [rbp+67h] BYREF
  _QWORD *v63; // [rsp+130h] [rbp+7Fh]

  if ( (a1[18] & 0x40) == 0 )
    return;
  if ( sub_1406214A0(a1: a2) != 0 )
    sub_1406214A0(a1: a2);
  if ( *((_BYTE *)a1 + 466) != 0 )
    goto LABEL_15;
  *((_DWORD *)a1 + 77) = 2123789977;
  v6 = sub_1400B3260(a1, a2: a3);
  *((float *)a1 + 77) = v6;
  v7 = 20.0;
  if ( (float)(*(float *)&dword_1412FF68C * 60.0) >= 20.0 )
  {
    if ( (float)(*(float *)&dword_1412FF68C * 60.0) <= 60.0 )
      v7 = *(float *)&dword_1412FF68C * 60.0;
    else
      v7 = 60.0;
  }
  v8 = v7 - (float)(v7 * 0.1);
  v9 = v7 - (float)(v7 * 0.2);
  v10 = *((_DWORD *)a1 + 78);
  if ( v10 != 0 )
  {
    v11 = v10 - 1;
    if ( v11 != 0 )
    {
      v12 = v11 - 1;
      if ( v12 != 0 )
      {
        if ( v12 == 1 && v6 > (float)(v9 + 1.0) )
          *((_DWORD *)a1 + 78) = 2;
      }
      else
      {
        if ( v6 > (float)(v8 + 1.0) )
          *((_DWORD *)a1 + 78) = 1;
        sub_1400CF6C0(a1);
        if ( v9 > *((float *)a1 + 77) )
          *((_DWORD *)a1 + 78) = 3;
      }
LABEL_15:
      v13 = (_QWORD *)sub_140101670(a1);
      v15 = v13;
      if ( v13 != nullptr )
      {
        v16 = *v13;
        v17 = sub_140101B20(a1: v14);
        LOBYTE(v18) = *((_DWORD *)a1 + 76) != 0;
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v16 + 632))(a1: v15, a2: v18, a3: v17);
      }
      if ( (unsigned __int8)sub_1405F8C30(a1: &off_141300CF0) == 0 && *((_DWORD *)a1 + 76) != 0 && a1[56] != 0 )
      {
        v19 = sub_1400D3900(a1: a1 + 56);
        if ( (unsigned __int8)sub_1406529A0(a1: v19) != 0 )
        {
          v20 = (*(double (__fastcall **)(__int64 *))(*a1 + 720))(a1);
          v21 = LODWORD(v20);
          v22 = *a1;
          v25 = sub_1400B5440(a1: v24, a2: v23);
          v26 = (float *)(*(__int64 (__fastcall **)(__int64 *, __int64))(v22 + 696))(a1, a2: v25);
          v27 = v26[14];
          v28 = *((float *)a1 + 86) * v26[10];
          v29 = *((float *)a1 + 84) * v26[2];
          v30 = v26[6];
          v31 = *((float *)a1 + 85);
          v32 = (float)((float)((float)(v31 * v26[5]) + (float)(*((float *)a1 + 84) * v26[1]))
                      + (float)(*((float *)a1 + 86) * v26[9]))
              + v26[13];
          v53 = (float)((float)((float)(v31 * v26[4]) + (float)(*((float *)a1 + 84) * *v26))
                      + (float)(*((float *)a1 + 86) * v26[8]))
              + v26[12];
          v54 = v32;
          v55 = (float)((float)((float)(v31 * v30) + v29) + v28) + v27;
          sub_1400B50C0(a1);
          v54 = v54 + (float)(sub_140A003B0(a1: v33) * 0.050000001);
          sub_1400B50C0(a1);
          sub_140096450(a1: v57);
          if ( a1 == (__int64 *)-348LL
            || (sub_14009D930(a1: (char *)a1 + 348, a2: v57, a3: &v53), v58[0] = a1[56], v58[0] == 0) )
          {
            sub_14005A4C0(a1: v35, a2: v34, a3: v36);
          }
          v59 = 0;
          v61 = 0;
          v58[1] = (char *)a1 + 348;
          v60 = v21;
          sub_14069EBC0(a1: a3, a2: v58);
        }
      }
      v37 = sub_1405F8CF0(a1: (__int64)(a1 + 30));
      v38 = v37;
      if ( v37 != 0 )
      {
        *(_WORD *)(v37 + 166) = 0;
        *(_BYTE *)(v37 + 169) = 1;
        sub_1401072B0(a1: v37, a2: 1);
        *(_DWORD *)(v38 + 152) = 1045220557;
        *(_DWORD *)(v38 + 156) = 1065017672;
        *(_QWORD *)(v38 + 692) = 0;
        *(_DWORD *)(v38 + 700) = 0;
        v39 = sub_1405F8CF0(a1: (__int64)(a1 + 40));
        v40 = v39;
        if ( v39 != 0 && *(_QWORD *)(v39 + 352) != 0 )
        {
          v62 = nullptr;
          v41 = sub_1405F8CF0(a1: (__int64)(a1 + 30));
          if ( v41 == 0 )
          {
            if ( (unsigned __int8)sub_140059A00(a1: off_140F14498) != 0 )
              __debugbreak();
            sub_1409E7D98(a1: 999);
            JUMPOUT(0x1403310ACLL);
          }
          v43 = (_QWORD *)sub_1409E0850(a1: 32);
          v63 = v43;
          if ( v43 != nullptr )
          {
            *v43 = &PXEngine::Delegate<void,float>::CallbackActor<CPXReinsSimulator,void (CPXReinsSimulator::*)(float)>::`vftable';
            sub_1405F8B50(a1: &v53, a2: v41 + 120);
            sub_1405F8B70(a1: v43 + 1, a2: v56, a3: LODWORD(v55));
            v43[1] = &PXEngine::SafeActorPtrAs<CPXReinsSimulator>::`vftable';
            v43[3] = sub_1401072C0;
          }
          else
          {
            v43 = nullptr;
          }
          v52 = v62;
          v62 = (void (__fastcall ***)(_QWORD, __int64))v43;
          if ( v52 != nullptr )
            (**v52)(a1: v52, a2: 1);
          LOBYTE(v42) = 4;
          sub_1400E6550(a1: v40, a2: v42, a3: &v62);
          if ( v62 != nullptr )
            (**v62)(a1: v62, a2: 1);
        }
        else
        {
          sub_1400B4560(a1);
          sub_1401072C0(a1: v38);
        }
      }
      sub_1400D6040(a1, a2, a3);
      return;
    }
    if ( v6 <= (float)(v7 + 1.0) )
    {
      if ( v8 > v6 )
      {
        *((_DWORD *)a1 + 78) = 2;
        v50 = sub_1405F8CF0(a1: (__int64)(a1 + 40));
        if ( v50 != 0 )
        {
          v51 = sub_140101B20(a1: v49);
          sub_1400B64D0(a1: v50, a2: v51);
        }
        else
        {
          sub_1403322A0(a1, a2, a3: 0);
        }
      }
    }
    else
    {
      *((_DWORD *)a1 + 78) = 0;
      v44 = (_QWORD *)sub_1405F8CF0(a1: (__int64)(a1 + 40));
      v46 = v44;
      if ( v44 != nullptr )
      {
        v47 = *v44;
        v48 = sub_140101B20(a1: v45);
        (*(void (__fastcall **)(_QWORD *, __int64))(v47 + 208))(a1: v46, a2: v48);
      }
    }
  }
  else if ( v7 > v6 )
  {
    *((_DWORD *)a1 + 78) = 1;
  }
}
