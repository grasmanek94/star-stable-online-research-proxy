_QWORD *__fastcall sub_140801700(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  __m128i si128; // xmm6
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rdi
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  volatile signed __int32 *v45; // rbx
  volatile signed __int32 *v46; // rbx
  volatile signed __int32 *v47; // rbx
  volatile signed __int32 *v48; // rbx
  __m128i v50; // [rsp+28h] [rbp-A9h] BYREF
  __m128i v51; // [rsp+38h] [rbp-99h] BYREF
  __m128i v52; // [rsp+48h] [rbp-89h] BYREF
  __int64 v53; // [rsp+58h] [rbp-79h]
  _QWORD v54[2]; // [rsp+68h] [rbp-69h] BYREF
  __m128i v55; // [rsp+78h] [rbp-59h] BYREF
  _QWORD *v56; // [rsp+88h] [rbp-49h] BYREF
  volatile signed __int32 *v57; // [rsp+90h] [rbp-41h]
  _QWORD *v58; // [rsp+98h] [rbp-39h]
  __int128 v59; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-19h]
  __int64 v61; // [rsp+C0h] [rbp-11h]
  __int128 v62; // [rsp+C8h] [rbp-9h] BYREF
  __int128 v63; // [rsp+D8h] [rbp+7h]
  _QWORD v64[4]; // [rsp+E8h] [rbp+17h] BYREF

  v58 = a1;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  v54[0] = "Number of processed events";
  v54[1] = 26;
  v50.m128i_i64[0] = (__int64)"event_processor_processed";
  v50.m128i_i64[1] = 25;
  (*(void (__fastcall **)(__int64, _QWORD **, __m128i *, _QWORD *))(*(_QWORD *)a2 + 16LL))(
    a1: a2,
    a2: &v56,
    a3: &v50,
    a4: v54);
  v4 = v56;
  v5 = *v56;
  v54[0] = &v59;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  sub_14000D7F0(a1: &v59, a2: "event_type", a3: 10);
  v54[0] = &v62;
  v62 = 0;
  v63 = 0;
  sub_14000D7F0(a1: &v62, a2: "receive", a3: 7);
  v50.m128i_i64[0] = (__int64)&v59;
  v50.m128i_i64[1] = (__int64)v64;
  sub_140017250(a1: &v52, a2: &v50);
  v6 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, __m128i *, __m128i *))(v5 + 8))(a1: v4, a2: &v51, a3: &v52);
  v7 = *v6;
  v8 = v6[1];
  *v6 = 0;
  v6[1] = 0;
  *a1 = v7;
  v9 = (volatile signed __int32 *)a1[1];
  a1[1] = v8;
  if ( v9 != nullptr && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v9)(a1: v9);
    if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(a1: v9);
  }
  v10 = (volatile signed __int32 *)v51.m128i_i64[1];
  if ( v51.m128i_i64[1] != 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v51.m128i_i64[1] + 8), 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v10)(a1: v10);
    if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(a1: v10);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
  v51 = si128;
  sub_14001B4A0(a1: &v52);
  v52 = si128;
  v53 = 19937;
  sub_1409DB390(a1: &v59, a2: 64, a3: 1, a4: sub_140018490);
  v12 = v56;
  v13 = *v56;
  v54[0] = &v59;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  sub_14000D7F0(a1: &v59, a2: "event_type", a3: 10);
  v54[0] = &v62;
  v62 = 0;
  v63 = 0;
  sub_14000D7F0(a1: &v62, a2: "send", a3: 4);
  v51.m128i_i64[0] = (__int64)&v59;
  v51.m128i_i64[1] = (__int64)v64;
  sub_140017250(a1: &v52, a2: &v51);
  v14 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, __m128i *, __m128i *))(v13 + 8))(a1: v12, a2: &v50, a3: &v52);
  v15 = *v14;
  v16 = v14[1];
  *v14 = 0;
  v14[1] = 0;
  a1[2] = v15;
  v17 = (volatile signed __int32 *)a1[3];
  a1[3] = v16;
  if ( v17 != nullptr && _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v17)(a1: v17);
    if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(a1: v17);
  }
  v18 = (volatile signed __int32 *)v50.m128i_i64[1];
  if ( v50.m128i_i64[1] != 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v50.m128i_i64[1] + 8), 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v18)(a1: v18);
    if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(a1: v18);
  }
  v50 = si128;
  sub_14001B4A0(a1: &v52);
  v52 = si128;
  v53 = 19937;
  sub_1409DB390(a1: &v59, a2: 64, a3: 1, a4: sub_140018490);
  v19 = v56;
  v20 = *v56;
  v54[0] = &v59;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  sub_14000D7F0(a1: &v59, a2: "event_type", a3: 10);
  v54[0] = &v62;
  v62 = 0;
  v63 = 0;
  sub_14000D7F0(a1: &v62, a2: "work", a3: 4);
  v51.m128i_i64[0] = (__int64)&v59;
  v51.m128i_i64[1] = (__int64)v64;
  sub_140017250(a1: &v52, a2: &v51);
  v21 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, __m128i *, __m128i *))(v20 + 8))(a1: v19, a2: &v50, a3: &v52);
  v22 = *v21;
  v23 = v21[1];
  *v21 = 0;
  v21[1] = 0;
  a1[4] = v22;
  v24 = (volatile signed __int32 *)a1[5];
  a1[5] = v23;
  if ( v24 != nullptr && _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v24)(a1: v24);
    if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(a1: v24);
  }
  v25 = (volatile signed __int32 *)v50.m128i_i64[1];
  if ( v50.m128i_i64[1] != 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v50.m128i_i64[1] + 8), 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v25)(a1: v25);
    if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(a1: v25);
  }
  v50 = si128;
  sub_14001B4A0(a1: &v52);
  v52 = si128;
  v53 = 19937;
  sub_1409DB390(a1: &v59, a2: 64, a3: 1, a4: sub_140018490);
  v51.m128i_i64[0] = (__int64)"Number of outstanding events";
  v51.m128i_i64[1] = 28;
  v50.m128i_i64[0] = (__int64)"event_processor_queued";
  v50.m128i_i64[1] = 22;
  (*(void (__fastcall **)(__int64, __m128i *, __m128i *, __m128i *))(*(_QWORD *)a2 + 8LL))(
    a1: a2,
    a2: &v55,
    a3: &v50,
    a4: &v51);
  v26 = v55.m128i_i64[0];
  v27 = *(_QWORD *)v55.m128i_i64[0];
  v54[0] = &v59;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  sub_14000D7F0(a1: &v59, a2: "event_type", a3: 10);
  v54[0] = &v62;
  v62 = 0;
  v63 = 0;
  sub_14000D7F0(a1: &v62, a2: "receive", a3: 7);
  v51.m128i_i64[0] = (__int64)&v59;
  v51.m128i_i64[1] = (__int64)v64;
  sub_140017250(a1: &v52, a2: &v51);
  v28 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __m128i *, __m128i *))(v27 + 8))(a1: v26, a2: &v50, a3: &v52);
  v29 = *v28;
  v30 = v28[1];
  *v28 = 0;
  v28[1] = 0;
  a1[6] = v29;
  v31 = (volatile signed __int32 *)a1[7];
  a1[7] = v30;
  if ( v31 != nullptr && _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v31)(a1: v31);
    if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(a1: v31);
  }
  v32 = (volatile signed __int32 *)v50.m128i_i64[1];
  if ( v50.m128i_i64[1] != 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v50.m128i_i64[1] + 8), 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v32)(a1: v32);
    if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(a1: v32);
  }
  v50 = si128;
  sub_14001B4A0(a1: &v52);
  v52 = si128;
  v53 = 19937;
  sub_1409DB390(a1: &v59, a2: 64, a3: 1, a4: sub_140018490);
  v33 = v55.m128i_i64[0];
  v34 = *(_QWORD *)v55.m128i_i64[0];
  v54[0] = &v59;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  sub_14000D7F0(a1: &v59, a2: "event_type", a3: 10);
  v54[0] = &v62;
  v62 = 0;
  v63 = 0;
  sub_14000D7F0(a1: &v62, a2: "send", a3: 4);
  v51.m128i_i64[0] = (__int64)&v59;
  v51.m128i_i64[1] = (__int64)v64;
  sub_140017250(a1: &v52, a2: &v51);
  v35 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __m128i *, __m128i *))(v34 + 8))(a1: v33, a2: &v50, a3: &v52);
  v36 = *v35;
  v37 = v35[1];
  *v35 = 0;
  v35[1] = 0;
  a1[8] = v36;
  v38 = (volatile signed __int32 *)a1[9];
  a1[9] = v37;
  if ( v38 != nullptr && _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v38)(a1: v38);
    if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(a1: v38);
  }
  v39 = (volatile signed __int32 *)v50.m128i_i64[1];
  if ( v50.m128i_i64[1] != 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v50.m128i_i64[1] + 8), 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v39)(a1: v39);
    if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(a1: v39);
  }
  v50 = si128;
  sub_14001B4A0(a1: &v52);
  v52 = si128;
  v53 = 19937;
  sub_1409DB390(a1: &v59, a2: 64, a3: 1, a4: sub_140018490);
  v40 = v55.m128i_i64[0];
  v41 = *(_QWORD *)v55.m128i_i64[0];
  v54[0] = &v59;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  sub_14000D7F0(a1: &v59, a2: "event_type", a3: 10);
  v54[0] = &v62;
  v62 = 0;
  v63 = 0;
  sub_14000D7F0(a1: &v62, a2: "work", a3: 4);
  v51.m128i_i64[0] = (__int64)&v59;
  v51.m128i_i64[1] = (__int64)v64;
  sub_140017250(a1: &v52, a2: &v51);
  v42 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __m128i *, __m128i *))(v41 + 8))(a1: v40, a2: &v50, a3: &v52);
  v43 = *v42;
  v44 = v42[1];
  *v42 = 0;
  v42[1] = 0;
  a1[10] = v43;
  v45 = (volatile signed __int32 *)a1[11];
  a1[11] = v44;
  if ( v45 != nullptr && _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v45)(a1: v45);
    if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(a1: v45);
  }
  v46 = (volatile signed __int32 *)v50.m128i_i64[1];
  if ( v50.m128i_i64[1] != 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v50.m128i_i64[1] + 8), 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v46)(a1: v46);
    if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(a1: v46);
  }
  v50 = si128;
  sub_14001B4A0(a1: &v52);
  v52 = si128;
  v53 = 19937;
  sub_1409DB390(a1: &v59, a2: 64, a3: 1, a4: sub_140018490);
  v47 = (volatile signed __int32 *)v55.m128i_i64[1];
  if ( v55.m128i_i64[1] != 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v55.m128i_i64[1] + 8), 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v47)(a1: v47);
    if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(a1: v47);
  }
  v55 = si128;
  v48 = v57;
  if ( v57 != nullptr && _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v48)(a1: v48);
    if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(a1: v48);
  }
  return a1;
}