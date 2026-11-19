// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_1402413C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  _QWORD *v10; // rdx
  _QWORD *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rax
  void **v15; // [rsp+20h] [rbp-D8h] BYREF
  int v16; // [rsp+28h] [rbp-D0h]
  int v17; // [rsp+2Ch] [rbp-CCh]
  _BYTE v18[16]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v19[7]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD *v20; // [rsp+78h] [rbp-80h]
  _QWORD v21[7]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD *v22; // [rsp+B8h] [rbp-40h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 640LL))(a1);
  if ( (_BYTE)result != 0 )
  {
    v7 = sub_1405F8CF0(a1: a1 + 152);
    v8 = v7;
    if ( v7 != 0 )
    {
      v9 = *(_DWORD *)(v7 + 264);
      if ( v9 != *(_DWORD *)(a1 + 168) )
      {
        *(_BYTE *)(a1 + 172) = 1;
        *(_DWORD *)(a1 + 168) = v9;
      }
    }
    if ( *(_BYTE *)(a1 + 522) != 0 )
    {
      sub_1402427F0(a1, a2: a3);
      v19[0] = ___7___Func_impl_no_alloc_V_lambda_1___O___Draw_CPXViewportEffect__UEAAXAEBVActorContext_PXEngine__AEAVCPXScene___Z_XPEAV6__std__6B_;
      v19[1] = a1;
      v20 = v19;
      sub_14069CCB0(a1: a3, a2: v19);
      if ( v20 != nullptr )
      {
        v10 = v19;
        LOBYTE(v10) = v20 != v19;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v20 + 32LL))(a1: v20, a2: v10);
      }
    }
    if ( *(_BYTE *)(a1 + 523) != 0 )
    {
      sub_140243140(a1, a2: a3);
      v21[0] = ___7___Func_impl_no_alloc_V_lambda_2___BB___Draw_CPXViewportEffect__UEAAXAEBVActorContext_PXEngine__AEAVCPXScene___Z_XPEAV6__std__6B_;
      v21[1] = a1;
      v22 = v21;
      sub_14069CCB0(a1: a3, a2: v21);
      if ( v22 != nullptr )
      {
        v11 = v21;
        LOBYTE(v11) = v22 != v21;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v22 + 32LL))(a1: v22, a2: v11);
      }
    }
    if ( v8 != 0 && *(_BYTE *)(a1 + 521) != 0 )
    {
      v12 = sub_140621240(a1: a2);
      v13 = sub_1406040E0(a1: v12, a2: v18, a3: "World");
      if ( (unsigned __int8)sub_140607410(a1: v12, a2: v13, a3: 60) != 0 )
      {
        sub_1405F8B70(a1: &v15, a2: *(unsigned int *)(v13 + 12), a3: *(unsigned int *)(v13 + 8));
      }
      else
      {
        v16 = 0;
        v17 = 195948557;
      }
      v15 = &PXEngine::SafeActorPtrAs<CPXTerrain>::`vftable';
      v14 = sub_1405F8CF0(a1: (__int64)&v15);
      if ( v14 != 0 && (unsigned __int8)sub_1401A7C20(a1: v14) == 0 )
        sub_1402415D0(a1, a2: a3, a3: a2);
    }
    *(_BYTE *)(a1 + 172) = 0;
    return sub_1400B3390(a1, a2, a3);
  }
  return result;
}