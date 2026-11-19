__int64 __fastcall sub_14001D770(HINSTANCE a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rax
  DWORD TickCount; // eax
  LPWSTR CommandLineW; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  const CHAR *v12; // rdi
  const CHAR *v13; // rcx
  unsigned int v14; // r14d
  LPVOID *v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // ebx
  unsigned __int64 v18; // rcx
  LPVOID *v19; // rcx
  unsigned __int64 v20; // rdx
  LPVOID *v21; // r9
  _WORD *v22; // rdi
  unsigned __int64 i; // rcx
  void *v24; // rcx
  LPVOID *v25; // r8
  char v26; // bl
  void *v27; // rcx
  char v28; // bl
  _BYTE *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  char *v36; // rdi
  char *v37; // rbx
  _BYTE *v38; // rcx
  int nWidth; // r13d
  int nHeight; // r14d
  const char *v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rax
  void *v60; // rcx
  HICON IconA; // rdi
  const CHAR *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // r8
  unsigned __int64 v65; // rbx
  _BYTE *v66; // rsi
  const CHAR *v67; // rcx
  unsigned __int64 v68; // r9
  __int64 v69; // rdi
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  const CHAR *v74; // rax
  const CHAR *v75; // r8
  const CHAR *v76; // rdx
  __int64 v77; // rsi
  HWND Window; // rax
  int v79; // r15d
  int SystemMetrics; // ebx
  int v81; // edi
  LONG v82; // r15d
  LONG v83; // r14d
  LONG X; // esi
  int Y; // ebx
  LONG v86; // ecx
  DWORD v87; // edi
  HWND hWndParent; // rax
  const CHAR *v89; // r8
  const CHAR *v90; // rdx
  void *v91; // rcx
  unsigned __int8 v92; // al
  void *v93; // rcx
  __int64 v94; // rax
  void (__fastcall ***v95)(_QWORD, __int64); // rdi
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  HWND v100; // rax
  __int64 v101; // rax
  __int128 *v102; // rdx
  __int128 *v103; // rdx
  unsigned int v104; // r13d
  __int128 *v105; // rdx
  __int128 *v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  int wParam; // ebx
  __int64 v113; // r15
  __int64 v114; // r14
  __int64 v115; // rbx
  LPVOID *v116; // r9
  unsigned __int64 v117; // rax
  char v118; // bl
  int v119; // eax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rbx
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rdx
  const char *v129; // r8
  const CHAR *v130; // rdx
  __int64 v131; // rax
  __int64 v132; // rax
  __int128 *v133; // rdx
  __int64 v134; // rsi
  __int128 *v135; // rdx
  __int128 *v136; // rdx
  __int64 v137; // rax
  char v138; // bl
  __int64 v139; // rbx
  const char *v140; // rax
  char **v141; // rcx
  char v142; // bl
  __int64 v143; // rbx
  __int64 v144; // rax
  _QWORD *v145; // rax
  _QWORD *v146; // rbx
  LPVOID *v147; // r9
  void *v148; // rcx
  CHAR *v149; // rcx
  void *v150; // rcx
  void *v151; // rcx
  void *v152; // rcx
  void *v153; // rcx
  void *v154; // rcx
  void *v155; // rcx
  void *v156; // rcx
  unsigned __int8 v158; // [rsp+70h] [rbp-90h]
  bool v159; // [rsp+70h] [rbp-90h]
  _BYTE v160[24]; // [rsp+78h] [rbp-88h] BYREF
  bool v161; // [rsp+90h] [rbp-70h]
  bool v162; // [rsp+91h] [rbp-6Fh]
  int v163; // [rsp+94h] [rbp-6Ch]
  const char *v164; // [rsp+98h] [rbp-68h] BYREF
  __int64 v165; // [rsp+A0h] [rbp-60h]
  int v166; // [rsp+A8h] [rbp-58h]
  int v167; // [rsp+ACh] [rbp-54h]
  __int64 v168; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID *v169; // [rsp+B8h] [rbp-48h]
  _BYTE v170[16]; // [rsp+D0h] [rbp-30h] BYREF
  void **v171; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v172[2]; // [rsp+E8h] [rbp-18h] BYREF
  struct tagMSG Msg; // [rsp+F8h] [rbp-8h] BYREF
  int v174; // [rsp+128h] [rbp+28h] BYREF
  __int64 v175; // [rsp+130h] [rbp+30h]
  __int64 v176; // [rsp+138h] [rbp+38h]
  char v177; // [rsp+140h] [rbp+40h]
  WNDCLASSEXA hInstance; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v179[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  void **v180; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v181; // [rsp+1B8h] [rbp+B8h]
  __int64 v182; // [rsp+1C8h] [rbp+C8h]
  void **v183; // [rsp+1D0h] [rbp+D0h] BYREF
  int v184; // [rsp+1D8h] [rbp+D8h]
  int v185; // [rsp+1DCh] [rbp+DCh]
  __int128 v186; // [rsp+1E0h] [rbp+E0h]
  __int128 v187; // [rsp+1F0h] [rbp+F0h]
  __int128 v188; // [rsp+200h] [rbp+100h]
  __int128 v189; // [rsp+210h] [rbp+110h]
  __int128 v190; // [rsp+220h] [rbp+120h]
  __int128 v191; // [rsp+230h] [rbp+130h]
  __int128 v192; // [rsp+240h] [rbp+140h]
  __int64 v193; // [rsp+250h] [rbp+150h]
  _BYTE v194[48]; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v195[128]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v196[1072]; // [rsp+310h] [rbp+210h] BYREF
  LPVOID lpMem[2]; // [rsp+740h] [rbp+640h] BYREF
  unsigned __int64 v198; // [rsp+750h] [rbp+650h]
  unsigned __int64 v199; // [rsp+758h] [rbp+658h]
  __int64 (__fastcall *v200)(); // [rsp+760h] [rbp+660h]
  _BYTE lpWindowName[12]; // [rsp+780h] [rbp+680h] BYREF
  int v202; // [rsp+78Ch] [rbp+68Ch]
  unsigned __int64 v203; // [rsp+790h] [rbp+690h]
  unsigned __int64 v204; // [rsp+798h] [rbp+698h]
  struct tagRECT Rect; // [rsp+7A0h] [rbp+6A0h] BYREF
  LPCSTR v206[2]; // [rsp+7B0h] [rbp+6B0h] BYREF
  unsigned __int64 v207; // [rsp+7C0h] [rbp+6C0h]
  unsigned __int64 v208; // [rsp+7C8h] [rbp+6C8h]
  __int128 v209; // [rsp+7D0h] [rbp+6D0h] BYREF
  __int64 v210; // [rsp+7E0h] [rbp+6E0h]
  unsigned __int64 v211; // [rsp+7E8h] [rbp+6E8h]
  __int128 v212; // [rsp+7F0h] [rbp+6F0h] BYREF
  __int64 v213; // [rsp+800h] [rbp+700h]
  unsigned __int64 v214; // [rsp+808h] [rbp+708h]
  __int128 v215; // [rsp+810h] [rbp+710h] BYREF
  __int64 v216; // [rsp+820h] [rbp+720h]
  unsigned __int64 v217; // [rsp+828h] [rbp+728h]
  __int128 v218; // [rsp+830h] [rbp+730h] BYREF
  __int64 v219; // [rsp+840h] [rbp+740h]
  unsigned __int64 v220; // [rsp+848h] [rbp+748h]
  __int128 v221; // [rsp+850h] [rbp+750h] BYREF
  __int64 v222; // [rsp+860h] [rbp+760h]
  unsigned __int64 v223; // [rsp+868h] [rbp+768h]
  LPCSTR lpText[3]; // [rsp+870h] [rbp+770h] BYREF
  unsigned __int64 v225; // [rsp+888h] [rbp+788h]
  char v226; // [rsp+890h] [rbp+790h]
  __int128 v227; // [rsp+8B0h] [rbp+7B0h] BYREF
  __int64 v228; // [rsp+8C0h] [rbp+7C0h]
  unsigned __int64 v229; // [rsp+8C8h] [rbp+7C8h]
  _BYTE v230[64]; // [rsp+8D0h] [rbp+7D0h] BYREF
  _BYTE v231[64]; // [rsp+910h] [rbp+810h] BYREF
  _BYTE v232[16]; // [rsp+950h] [rbp+850h] BYREF
  __int64 v233; // [rsp+960h] [rbp+860h]
  _BYTE v234[64]; // [rsp+990h] [rbp+890h] BYREF
  char v235[8]; // [rsp+9D0h] [rbp+8D0h] BYREF
  char v236[264]; // [rsp+9D8h] [rbp+8D8h] BYREF
  _QWORD v237[6]; // [rsp+AE0h] [rbp+9E0h] BYREF
  _BYTE v238[248]; // [rsp+B10h] [rbp+A10h] BYREF
  char v239[24]; // [rsp+C08h] [rbp+B08h] BYREF
  _BYTE v240[120]; // [rsp+C20h] [rbp+B20h] BYREF
  _BYTE v241[568]; // [rsp+C98h] [rbp+B98h] BYREF
  __int64 v242; // [rsp+ED0h] [rbp+DD0h]
  bool v243; // [rsp+ED8h] [rbp+DD8h]
  char v244; // [rsp+F80h] [rbp+E80h]
  __int64 v245; // [rsp+1000h] [rbp+F00h]
  _QWORD *v246; // [rsp+1090h] [rbp+F90h]
  _BYTE *v247; // [rsp+10A8h] [rbp+FA8h]
  __int64 v248; // [rsp+10E8h] [rbp+FE8h]
  _QWORD v249[103]; // [rsp+1118h] [rbp+1018h] BYREF
  _BYTE v250[512]; // [rsp+1450h] [rbp+1350h] BYREF
  _BYTE v251[384]; // [rsp+1650h] [rbp+1550h] BYREF
  _BYTE v252[1312]; // [rsp+17D0h] [rbp+16D0h] BYREF
  _BYTE v253[1008]; // [rsp+1CF0h] [rbp+1BF0h] BYREF
  CHAR v254[1008]; // [rsp+20E0h] [rbp+1FE0h] BYREF
  CHAR Filename[32768]; // [rsp+24D0h] [rbp+23D0h] BYREF

  v168 = a3;
  SetProcessDpiAwarenessContext(a1: -4);
  sub_14006B2F0(a1: "Main Thread");
  sub_1409E3140(a1: "Process started");
  v4 = 1;
  v5 = sub_1409E2B30(a1: 1);
  sub_1409E2FF0(a1: v5);
  TickCount = GetTickCount();
  sub_1409E29F0(a1: TickCount);
  v202 = 0;
  v203 = 11;
  v204 = 15;
  strcpy(lpWindowName, "Star Stable");
  v215 = 0;
  v216 = 0;
  v217 = 15;
  LOBYTE(v215) = 0;
  v218 = 0;
  v219 = 0;
  v220 = 15;
  LOBYTE(v218) = 0;
  v221 = 0;
  v222 = 0;
  v223 = 15;
  LOBYTE(v221) = 0;
  v212 = 0;
  v213 = 0;
  v214 = 15;
  LOBYTE(v212) = 0;
  CommandLineW = GetCommandLineW();
  sub_1400617A0(a1: v160, a2: CommandLineW);
  if ( (unsigned __int8)sub_140060730(a1: v160, a2: "Version") != 0 )
  {
    sub_1409CB830(a1: v9, a2: v8);
    v4 = 0;
    goto LABEL_321;
  }
  if ( (unsigned __int8)sub_140060730(a1: v160, a2: "ApplicationName") != 0 )
  {
    v10 = sub_140060EC0(a1: v160, a2: "ApplicationName");
    v11 = sub_140E82CD0(a1: v10);
    sub_14000D680(a1: lpWindowName, a2: v10, a3: v11);
  }
  v12 = lpWindowName;
  if ( v204 > 0xF )
    v12 = *(const CHAR **)lpWindowName;
  v13 = lpWindowName;
  if ( v204 > 0xF )
    v13 = *(const CHAR **)lpWindowName;
  if ( FindWindowA(lpClassName: v13, lpWindowName: v12) != nullptr )
  {
    v4 = 0;
    goto LABEL_321;
  }
  *(_OWORD *)lpMem = 0;
  v198 = 0;
  v199 = 7;
  LOWORD(lpMem[0]) = 0;
  sub_140012870(a1: (unsigned int)lpMem, a2: 260, a3: v158, a4: 260, a5: 0);
  do
  {
    v14 = v198;
    v15 = lpMem;
    if ( v199 > 7 )
      v15 = (LPVOID *)lpMem[0];
    v16 = sub_1409D3770(a1: (unsigned int)v198, a2: v15);
    v17 = v16;
    v164 = (const char *)v16;
    v18 = v198;
    if ( (unsigned int)v16 > v198 )
    {
      v20 = (unsigned int)v16 - v198;
      if ( v20 > v199 - v198 )
      {
        sub_140012870(a1: (unsigned int)lpMem, a2: v20, a3: v158, a4: v16 - v198, a5: 0);
      }
      else
      {
        v198 = (unsigned int)v16;
        v21 = lpMem;
        if ( v199 > 7 )
          v21 = (LPVOID *)lpMem[0];
        v22 = (_WORD *)v21 + v18;
        if ( v20 != 0 )
        {
          for ( i = (unsigned int)v16 - v18; i != 0; --i )
            *v22++ = 0;
        }
        *((_WORD *)v21 + (unsigned int)v16) = 0;
      }
    }
    else
    {
      v198 = (unsigned int)v16;
      v19 = lpMem;
      if ( v199 > 7 )
        v19 = (LPVOID *)lpMem[0];
      *((_WORD *)v19 + (unsigned int)v16) = 0;
    }
  }
  while ( v17 >= v14 );
  sub_14004F830(a1: v230, a2: lpMem);
  if ( v199 > 7 )
  {
    v24 = lpMem[0];
    if ( 2 * v199 + 2 >= 0x1000 )
    {
      if ( (unsigned __int64)lpMem[0] - *((_QWORD *)lpMem[0] - 1) - 8 > 0x1F )
        goto LABEL_347;
      v24 = *((void **)lpMem[0] - 1);
    }
    sub_1409DB4C0(lpMem: v24);
  }
  lpMem[0] = (LPVOID)19937;
  v198 = 0;
  v199 = 15;
  if ( HIDWORD(v164) == 0 )
  {
    v162 = false;
    v159 = false;
    v28 = 1;
    v29 = lpWindowName;
    if ( v204 > 0xF )
      v29 = *(_BYTE **)lpWindowName;
    sub_14001A2C0(a1: v232, a2: v29);
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "ProjectPath") != 0 )
    {
      v30 = sub_140060EC0(a1: v160, a2: "ProjectPath");
    }
    else
    {
      if ( (unsigned __int8)sub_140060730(a1: v160, a2: "DataPath") == 0 )
        goto LABEL_50;
      v30 = sub_140060EA0(a1: v160, a2: "DataPath", a3: &byte_140EEC5C5);
    }
    v31 = sub_140019F70(a1: lpMem, a2: v30, a3: 1);
    sub_1400500D0(a1: v230, a2: v31);
    sub_14001B610(a1: lpMem);
    v199 = 15;
    v198 = 0;
    lpMem[0] = (LPVOID)19937;
LABEL_50:
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "AccessToken") != 0 )
    {
      v32 = sub_140060EC0(a1: v160, a2: "AccessToken");
      v33 = sub_140E82CD0(a1: v32);
      sub_14000D680(a1: &v212, a2: v32, a3: v33);
    }
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "WhatsNewDev") != 0 )
      v162 = (unsigned int)sub_140060E70(a1: v160, a2: "WhatsNewDev", a3: 1) != 0;
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "UseTerrainPatchFiles") != 0 )
      v159 = (unsigned int)sub_140060E70(a1: v160, a2: "UseTerrainPatchFiles", a3: 0) != 0;
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "DisableSentryDebugMessages") != 0 )
      v28 = (unsigned int)sub_140060E70(a1: v160, a2: "DisableSentryDebugMessages", a3: 0) != 1;
    sub_140058A60();
    sub_140E827B0(a1: Filename, a2: 0, a3: 0x7FFF);
    GetModuleFileNameA(hModule: nullptr, lpFilename: Filename, nSize: 0x7FFFu);
    v34 = sub_14004F9A0(a1: lpMem, a2: Filename);
    sub_140051250(a1: v34, a2: v231);
    sub_14004FE80(a1: lpMem);
    *(_OWORD *)lpMem = 0;
    v198 = 0;
    v35 = sub_140060EC0(a1: v160, a2: "ServiceBaseUrl");
    sub_1406078C0(
      a1: (unsigned int)lpText,
      a2: (unsigned int)"SSOClient",
      a3: (unsigned int)v231,
      a4: (unsigned int)v230,
      a5: v35,
      a6: v28,
      a7: (__int64)lpMem);
    v36 = (char *)lpMem[0];
    if ( lpMem[0] != nullptr )
    {
      v37 = (char *)lpMem[1];
      if ( lpMem[0] != lpMem[1] )
      {
        do
        {
          sub_14004FE80(a1: v36);
          v36 += 64;
        }
        while ( v36 != v37 );
        v36 = (char *)lpMem[0];
      }
      if ( ((v198 - (_QWORD)v36) & 0xFFFFFFFFFFFFFFC0uLL) < 0x1000 )
      {
        v38 = v36;
      }
      else
      {
        v38 = *((_BYTE **)v36 - 1);
        if ( (unsigned __int64)(v36 - v38 - 8) > 0x1F )
          goto LABEL_347;
      }
      sub_1409DB4C0(lpMem: v38);
    }
    LODWORD(v164) = 0;
    v167 = 0;
    v161 = false;
    nWidth = 1366;
    nHeight = 768;
    v163 = 768;
    v166 = 0;
    *(__m128i *)lpMem = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
    v198 = 19937;
    if ( v226 == 0 )
    {
      v41 = (const char *)lpText;
      if ( v225 > 0xF )
        v41 = lpText[0];
      if ( (unsigned __int8)sub_140059D90(a1: off_140EECCE8, a2: "Can't initialize crash handler. %s", v41) != 0 )
        __debugbreak();
    }
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "EditorPerforceUser") != 0 )
    {
      v42 = sub_140060EC0(a1: v160, a2: "EditorPerforceUser");
      sub_140607FE0(a1: "editor_p4user", a2: v42);
    }
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "AutotestRunId") != 0 )
    {
      v43 = sub_140060EC0(a1: v160, a2: "AutotestRunId");
      sub_140607FE0(a1: "autotest_run_id", a2: v43);
    }
    if ( v226 == 0 )
    {
      sub_14001B5A0(a1: lpText);
      lpText[0] = (LPCSTR)19937;
      lpText[2] = nullptr;
      v225 = 31;
    }
    sub_14004FE80(a1: v231);
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "ProjectUserDataPath") != 0 && v233 == 0 )
    {
      v44 = sub_140060EC0(a1: v160, a2: "ProjectUserDataPath");
      v45 = sub_140019F70(a1: lpMem, a2: v44, a3: 1);
      sub_1400500D0(a1: v232, a2: v45);
      sub_14001B610(a1: lpMem);
      lpMem[0] = (LPVOID)19937;
      v198 = 0;
      v199 = 15;
    }
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "GraphicsWidth") != 0
      && (unsigned __int8)sub_140060730(a1: v160, a2: "GraphicsHeight") != 0 )
    {
      nWidth = sub_140060E50(a1: v160, a2: "GraphicsWidth");
      nHeight = sub_140060E50(a1: v160, a2: "GraphicsHeight");
      v163 = nHeight;
    }
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "GraphicsWindow") != 0
      || (unsigned __int8)sub_140060730(a1: v160, a2: "Window") != 0 )
    {
      byte_141310000 = 0;
    }
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "Emulate") != 0 )
      v166 = sub_140060E50(a1: v160, a2: "Emulate");
    v46 = sub_140060EA0(a1: v160, a2: "StudioRegionCode", a3: &byte_140EEC5C5);
    v227 = 0;
    v228 = 0;
    v229 = 0;
    v47 = sub_140E82CD0(a1: v46);
    sub_14000D7F0(a1: &v227, a2: v46, a3: v47);
    v48 = sub_140060EA0(a1: v160, a2: "Language", a3: &byte_140EEC5C5);
    v209 = 0;
    v210 = 0;
    v211 = 0;
    v49 = sub_140E82CD0(a1: v48);
    sub_14000D7F0(a1: &v209, a2: v48, a3: v49);
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "StudioLanguageCode") != 0 )
    {
      v50 = sub_140060EC0(a1: v160, a2: "StudioLanguageCode");
      v51 = sub_140E82CD0(a1: v50);
      sub_14000D680(a1: &v209, a2: v50, a3: v51);
    }
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "NetworkUserName") != 0 )
    {
      v52 = sub_140060EC0(a1: v160, a2: "NetworkUserName");
      v53 = sub_140E82CD0(a1: v52);
      sub_14000D680(a1: &v215, a2: v52, a3: v53);
    }
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "NetworkUserId") != 0 )
      LODWORD(v164) = sub_140060E50(a1: v160, a2: "NetworkUserId");
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "NetworkTicket") != 0 )
    {
      v54 = sub_140060EC0(a1: v160, a2: "NetworkTicket");
      v55 = sub_140E82CD0(a1: v54);
      sub_14000D680(a1: &v218, a2: v54, a3: v55);
    }
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "NetworkServer") != 0 )
    {
      v56 = sub_140060EC0(a1: v160, a2: "NetworkServer");
      v57 = sub_140E82CD0(a1: v56);
      sub_14000D680(a1: &v221, a2: v56, a3: v57);
    }
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "NetworkServerPort") != 0 )
      v167 = sub_140060E50(a1: v160, a2: "NetworkServerPort");
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "NetworkResetProgress") != 0 )
      v161 = (unsigned int)sub_140060E50(a1: v160, a2: "NetworkResetProgress") != 0;
    if ( byte_141310000 != 0 )
    {
      nWidth = GetSystemMetrics(nIndex: 0);
      nHeight = GetSystemMetrics(nIndex: 1);
      v163 = nHeight;
    }
    sub_140608550(a1: v170);
    if ( sub_140060BB0(a1: v160, a2: "FeatureFlags") != 0 )
    {
      v58 = sub_140060BB0(a1: v160, a2: "FeatureFlags");
      *(_OWORD *)lpMem = 0;
      v198 = 0;
      v199 = 0;
      v59 = sub_140E82CD0(a1: v58);
      sub_14000D7F0(a1: lpMem, a2: v58, a3: v59);
      if ( v199 > 0xF )
      {
        v60 = lpMem[0];
        if ( v199 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)lpMem[0] - *((_QWORD *)lpMem[0] - 1) - 8 > 0x1F )
            goto LABEL_347;
          v60 = *((void **)lpMem[0] - 1);
        }
        sub_1409DB4C0(lpMem: v60);
      }
      lpMem[0] = (LPVOID)19937;
      v198 = 0;
      v199 = 31;
    }
    IconA = LoadIconA(hInstance: a1, lpIconName: (LPCSTR)0x6B);
    hInstance.cbSize = 80;
    hInstance.style = 72;
    hInstance.lpfnWndProc = (WNDPROC)sub_14001A5B0;
    *(_QWORD *)&hInstance.cbClsExtra = 0;
    hInstance.hInstance = GetModuleHandleA(lpModuleName: nullptr);
    hInstance.hIcon = IconA;
    memset(&hInstance.hCursor, 0, 24);
    v62 = lpWindowName;
    if ( v204 > 0xF )
      v62 = *(const CHAR **)lpWindowName;
    hInstance.lpszClassName = v62;
    hInstance.hIconSm = IconA;
    RegisterClassExA(a1: &hInstance);
    Rect = 0;
    *(_OWORD *)v206 = 0;
    v207 = 0;
    v208 = 0;
    v65 = v203;
    v66 = lpWindowName;
    v67 = *(const CHAR **)lpWindowName;
    v68 = v204;
    if ( v204 > 0xF )
      v66 = *(_BYTE **)lpWindowName;
    v69 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v203 > 0x7FFFFFFFFFFFFFFFLL )
      sub_14001B680(a1: *(_QWORD *)lpWindowName, a2: v63);
    if ( v203 <= 0xF )
    {
      v207 = v203;
      v70 = 15;
      v208 = 15;
      *(_OWORD *)v206 = *(_OWORD *)v66;
      goto LABEL_131;
    }
    if ( (v203 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v71 = 0x8000000000000027uLL;
LABEL_121:
      v72 = sub_1409DB470(a1: v71);
      v73 = v72;
      if ( v72 == 0 )
        goto LABEL_347;
      v74 = (const CHAR *)((v72 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v74 - 1) = v73;
      goto LABEL_130;
    }
    v69 = v203 | 0xF;
    if ( (v203 | 0xF) < 0x16 )
      v69 = 22;
    v74 = (const CHAR *)(v69 + 1);
    if ( v69 != -1 )
    {
      if ( (unsigned __int64)v74 >= 0x1000 )
      {
        v71 = v69 + 40;
        if ( v69 + 40 < (unsigned __int64)(v69 + 1) )
        {
          sub_14001B170(a1: v71, a2: v63, a3: v64, a4: v204);
          __debugbreak();
        }
        goto LABEL_121;
      }
      v74 = (const CHAR *)sub_1409DB470(a1: v69 + 1);
    }
LABEL_130:
    v206[0] = v74;
    v207 = v65;
    v208 = v69;
    sub_140E82100(a1: v74, a2: v66, a3: v65 + 1);
    v68 = v204;
    v67 = *(const CHAR **)lpWindowName;
    v70 = v208;
LABEL_131:
    if ( byte_141310000 != 0 )
    {
      v75 = (const CHAR *)v206;
      if ( v70 > 0xF )
        v75 = v206[0];
      v76 = lpWindowName;
      if ( v68 > 0xF )
        v76 = v67;
      v77 = 0;
      Window = CreateWindowExA(
                 dwExStyle: 0x40000u,
                 lpClassName: v76,
                 lpWindowName: v75,
                 dwStyle: 0x80080000,
                 X: 0,
                 Y: 0,
                 nWidth,
                 nHeight,
                 hWndParent: nullptr,
                 hMenu: nullptr,
                 hInstance: hInstance.hInstance,
                 lpParam: nullptr);
    }
    else
    {
      v79 = 2 * GetSystemMetrics(nIndex: 7);
      SystemMetrics = GetSystemMetrics(nIndex: 8);
      v81 = GetSystemMetrics(nIndex: 4);
      SetRect(lprc: &rc, xLeft: 0, yTop: 0, xRight: 0, yBottom: 0);
      EnumDisplayMonitors(hdc: nullptr, lprcClip: nullptr, lpfnEnum: fnEnum, dwData: 0);
      v82 = nWidth + v79;
      v83 = v81 + 2 * SystemMetrics + nHeight;
      X = GetSystemMetrics(nIndex: 0) / 2 - v82 / 2;
      Y = GetSystemMetrics(nIndex: 1) / 2 - v83 / 2;
      Rect.left = X;
      v86 = 0;
      if ( Y > 0 )
        v86 = Y;
      Rect.top = v86;
      Rect.right = v82;
      Rect.bottom = v83;
      v87 = 655360;
      if ( rc.right == rc.left )
        v87 = 13565952;
      hWndParent = GetDesktopWindow();
      v89 = (const CHAR *)v206;
      if ( v208 > 0xF )
        v89 = v206[0];
      v90 = lpWindowName;
      if ( v204 > 0xF )
        v90 = *(const CHAR **)lpWindowName;
      Window = CreateWindowExA(
                 dwExStyle: 0,
                 lpClassName: v90,
                 lpWindowName: v89,
                 dwStyle: v87,
                 X,
                 Y,
                 nWidth: v82,
                 nHeight: v83,
                 hWndParent,
                 hMenu: nullptr,
                 hInstance: hInstance.hInstance,
                 lpParam: nullptr);
      nHeight = v163;
      v77 = 0;
    }
    hWnd = Window;
    if ( Window == nullptr )
      goto LABEL_304;
    ShowWindow(hWnd: Window, nCmdShow: 5);
    UpdateWindow(hWnd: hWnd);
    if ( byte_141310000 == 0 )
    {
      AdjustWindowRectEx(lpRect: &Rect, dwStyle: 0xCA0000u, bMenu: false, dwExStyle: 0x40000u);
      SetWindowPos(
        hWnd: hWnd,
        hWndInsertAfter: nullptr,
        X: Rect.left,
        Y: Rect.top,
        cx: Rect.right,
        cy: Rect.bottom,
        uFlags: 0x41u);
    }
    SetFocus(hWnd: hWnd);
    *(_OWORD *)lpMem = 0;
    v198 = 0;
    sub_14009A070(a1: v195, a2: lpMem);
    if ( lpMem[0] != nullptr )
    {
      sub_14000DBD0(a1: lpMem[0], a2: lpMem[1], a3: lpMem);
      if ( ((v198 - (unsigned __int64)lpMem[0]) & 0xFFFFFFFFFFFFFFC0uLL) < 0x1000 )
      {
        v91 = lpMem[0];
      }
      else
      {
        v91 = *((void **)lpMem[0] - 1);
        if ( (unsigned __int64)((char *)lpMem[0] - (char *)v91 - 8) > 0x1F )
          goto LABEL_347;
      }
      sub_1409DB4C0(lpMem: v91);
    }
    *(__m128i *)lpMem = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
    v198 = 19937;
    qword_141389CA0 = GetTickCount64();
    RegisterHotKey(hWnd: hWnd, id: -2, fsModifiers: 0, vk: 0x2Cu);
    RegisterHotKey(hWnd: hWnd, id: -1, fsModifiers: 0, vk: 0x2Cu);
    if ( v233 == 0 )
      sub_14004FFF0(a1: v232, a2: v230);
    sub_14005FBF0(a1: (unsigned int)v230, a2: (unsigned int)v232, a3: (unsigned int)v230, a4: 0, a5: 4, a6: 0);
    sub_140612FD0(a1: v238);
    sub_14004F6B0(a1: lpText, a2: v230, a3: "PackFiles", a4: 0);
    *(_OWORD *)lpMem = 0;
    v198 = 0;
    v199 = 15;
    LOBYTE(lpMem[0]) = 0;
    v92 = sub_140614190(a1: v238, a2: lpText, a3: lpMem, a4: 1);
    if ( v92 != 0 )
    {
      v147 = lpMem;
      if ( v199 > 0xF )
        v147 = (LPVOID *)lpMem[0];
      wParam = v92;
      if ( (unsigned __int8)sub_140059D90(
                              a1: off_140EECD10,
                              a2: "Failed to load pack file! Error code = %u, msg = %s",
                              v92,
                              (const char *)v147) != 0 )
        __debugbreak();
      if ( v199 > 0xF )
      {
        v148 = lpMem[0];
        if ( v199 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)lpMem[0] - *((_QWORD *)lpMem[0] - 1) - 8 > 0x1F )
            goto LABEL_347;
          v148 = *((void **)lpMem[0] - 1);
        }
        sub_1409DB4C0(lpMem: v148);
      }
      lpMem[0] = (LPVOID)19937;
      v198 = 0;
      v199 = 31;
      sub_14004FE80(a1: lpText);
      goto LABEL_303;
    }
    sub_140066BA0(a1: v238);
    if ( v199 > 0xF )
    {
      v93 = lpMem[0];
      if ( v199 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)lpMem[0] - *((_QWORD *)lpMem[0] - 1) - 8 > 0x1F )
          goto LABEL_347;
        v93 = *((void **)lpMem[0] - 1);
      }
      sub_1409DB4C0(lpMem: v93);
    }
    lpMem[0] = (LPVOID)19937;
    v198 = 0;
    v199 = 31;
    sub_14004FE80(a1: lpText);
    if ( (unsigned __int8)sub_140060730(a1: v160, a2: "CreateStackTraces") != 0
      && (unsigned int)sub_140060E70(a1: v160, a2: "CreateStackTraces", a3: 0) != 0 )
    {
      v94 = sub_1409DB470(a1: 104);
      v95 = (void (__fastcall ***)(_QWORD, __int64))v94;
      if ( v94 != 0 )
      {
        *(_DWORD *)(v94 + 9) = 0;
        *(_WORD *)(v94 + 13) = 0;
        *(_BYTE *)(v94 + 15) = 0;
        *(_QWORD *)(v94 + 24) = 2;
        *(_QWORD *)v94 = &PXEngine::StackTraceSystemWin::`vftable';
        *(_BYTE *)(v94 + 8) = 0;
        *(_QWORD *)(v94 + 16) = 0;
        *(_OWORD *)(v94 + 48) = 0;
        *(_OWORD *)(v94 + 64) = 0;
        *(_OWORD *)(v94 + 80) = 0;
        *(_QWORD *)(v94 + 32) = 0;
        *(_QWORD *)(v94 + 40) = 0;
        *(_DWORD *)(v94 + 96) = -1;
        *(_DWORD *)(v94 + 100) = 0;
LABEL_170:
        v96 = sub_1409DB470(a1: 984);
        if ( v96 != 0 )
          v77 = sub_14063D700(a1: v96);
        sub_14063DC10(a1: v77, a2: v239);
        sub_140060EE0(a1: v77 + 616, a2: v168);
        v97 = sub_140060EA0(a1: v160, a2: "LoginQueueToken", a3: &byte_140EEC5C5);
        sub_14063DC80(a1: v77, a2: v97);
        *(_BYTE *)(v77 + 5) = byte_141310000 != 0;
        *(_DWORD *)(v77 + 24) = nWidth;
        *(_DWORD *)(v77 + 28) = nHeight;
        if ( (unsigned __int8)sub_140060730(a1: v160, a2: "GraphicsFreq") != 0 )
          *(_DWORD *)(v77 + 32) = sub_140060E50(a1: v160, a2: "GraphicsFreq");
        *(_BYTE *)(v77 + 644) = (unsigned int)sub_140060E70(a1: v160, a2: "FMODLiveLink", a3: 0) != 0;
        *(_BYTE *)(v77 + 645) = (unsigned int)sub_140060E70(a1: v160, a2: "AudioDebug", a3: 0) != 0;
        if ( (unsigned __int8)sub_140060730(a1: v160, a2: "GraphicsVSync") != 0 )
          *(_BYTE *)(v77 + 48) = (unsigned int)sub_140060E50(a1: v160, a2: "GraphicsVSync") != 0;
        if ( (unsigned __int8)sub_140060730(a1: v160, a2: "SimulateMissingGPUFeature") != 0 )
        {
          v98 = sub_140060EA0(a1: v160, a2: "SimulateMissingGPUFeature", a3: &byte_140EEC5C5);
          sub_140017090(a1: lpMem, a2: v98);
          v99 = sub_140016F80(a1: &v168, a2: lpMem);
          sub_14063DDC0(a1: v77, a2: v99);
          sub_14001B5A0(a1: lpMem);
          lpMem[0] = (LPVOID)19937;
          v198 = 0;
          v199 = 31;
        }
        v100 = hWnd;
        *(_QWORD *)(v77 + 592) = hWnd;
        *(_QWORD *)(v77 + 600) = v100;
        *(_BYTE *)(v77 + 641) = v166;
        *(_BYTE *)(v77 + 49) = 0;
        v101 = sub_140060EC0(a1: v160, a2: "ServiceBaseUrl");
        sub_140018D50(a1: v77 + 208, a2: v101);
        if ( (__int128 *)(v77 + 240) != &v221 )
        {
          v102 = &v221;
          if ( v223 > 0xF )
            v102 = (__int128 *)v221;
          sub_14000D680(a1: v77 + 240, a2: v102, a3: v222);
        }
        *(_DWORD *)(v77 + 272) = v167;
        if ( (__int128 *)(v77 + 280) != &v215 )
        {
          v103 = &v215;
          if ( v217 > 0xF )
            v103 = (__int128 *)v215;
          sub_14000D680(a1: v77 + 280, a2: v103, a3: v216);
        }
        v104 = (unsigned int)v164;
        *(_DWORD *)(v77 + 312) = (_DWORD)v164;
        if ( (__int128 *)(v77 + 320) != &v218 )
        {
          v105 = &v218;
          if ( v220 > 0xF )
            v105 = (__int128 *)v218;
          sub_14000D680(a1: v77 + 320, a2: v105, a3: v219);
        }
        *(_BYTE *)(v77 + 384) = v161;
        if ( (__int128 *)(v77 + 352) != &v212 )
        {
          v106 = &v212;
          if ( v214 > 0xF )
            v106 = (__int128 *)v212;
          sub_14000D680(a1: v77 + 352, a2: v106, a3: v213);
        }
        *(_BYTE *)(v77 + 588) = v162;
        *(_BYTE *)(v77 + 143) = v159;
        if ( (unsigned __int8)sub_140060730(a1: v160, a2: "MetricsServer") != 0 )
        {
          v107 = sub_140060EC0(a1: v160, a2: "MetricsServer");
          sub_140018D50(a1: v77 + 464, a2: v107);
        }
        if ( (unsigned __int8)sub_140060730(a1: v160, a2: "ReportPlayerServer") != 0 )
        {
          v108 = sub_140060EC0(a1: v160, a2: "ReportPlayerServer");
          sub_140018D50(a1: v77 + 520, a2: v108);
        }
        v109 = *(_QWORD *)(v77 + 496);
        if ( v109 != *(_QWORD *)(v77 + 504) )
          *(_QWORD *)(v77 + 504) = v109;
        if ( (unsigned __int8)sub_140060730(a1: v160, a2: "MetricsGroup") != 0 )
        {
          v110 = sub_140060EC0(a1: v160, a2: "MetricsGroup");
          sub_140017090(a1: lpMem, a2: v110);
          v111 = sub_140016F80(a1: &v168, a2: lpMem);
          if ( (unsigned __int8)sub_140610C50(a1: v111, a2: v77 + 496) == 0 )
          {
            if ( (unsigned __int8)sub_140059D90(a1: off_140EECD38, a2: "Invalid format on argument 'MetricsGroup'") != 0 )
              __debugbreak();
            sub_14001B5A0(a1: lpMem);
            wParam = 1;
            sub_140018750(a1: v77);
            sub_1409DB4C0(lpMem: (LPVOID)v77);
            goto LABEL_291;
          }
          if ( v199 > 0xF )
            sub_14001A8F0(a1: lpMem, a2: lpMem[0]);
          lpMem[0] = (LPVOID)19937;
          v198 = 0;
          v199 = 31;
        }
        v113 = sub_140066A30();
        v114 = (unsigned int)sub_1409D2FD0();
        *(_OWORD *)lpMem = 0;
        v198 = 0;
        v199 = 7;
        LOWORD(lpMem[0]) = 0;
        v115 = sub_1409D3000(a1: v114, a2: "renderdoc.dll", a3: 13, a4: 0, a5: 0);
        if ( HIDWORD(v115) != 0 )
          ((void (__noreturn *)(void))sub_14001B250)();
        sub_14001D370(a1: lpMem, a2: (int)v115, a3: 0);
        v116 = lpMem;
        if ( v199 > 7 )
          v116 = (LPVOID *)lpMem[0];
        v117 = (unsigned __int64)sub_1409D3000(a1: (unsigned int)v114, a2: "renderdoc.dll", a3: 13, a4: v116, a5: v115) >> 32;
        if ( (_DWORD)v117 != 0 )
          sub_14001B250(a1: (unsigned int)v117);
        v118 = sub_14006C9C0(a1: lpMem, a2: v113);
        if ( v199 > 7 )
          sub_14001A930(a1: lpMem, a2: lpMem[0]);
        lpMem[0] = (LPVOID)19937;
        v198 = 0;
        v199 = 15;
        if ( v118 != 0 )
          goto LABEL_217;
        if ( (unsigned __int8)sub_140060730(a1: v160, a2: "GLDebugOutput") == 0 )
        {
LABEL_219:
          if ( (unsigned __int8)sub_140060730(a1: v160, a2: "GLDebugSynchronous") != 0
            && (unsigned int)sub_140060E50(a1: v160, a2: "GLDebugSynchronous") != 0 )
          {
            *(_DWORD *)(v77 + 16) = 2;
          }
          else if ( (unsigned __int8)sub_140060730(a1: v160, a2: "GLDebugAsynchronous") != 0
                 && (unsigned int)sub_140060E50(a1: v160, a2: "GLDebugAsynchronous") != 0 )
          {
            *(_DWORD *)(v77 + 16) = 1;
          }
          if ( (unsigned __int8)sub_140060730(a1: v160, a2: "ScriptDebugging") != 0 )
            *(_BYTE *)(v77 + 647) = (unsigned int)sub_140060E50(a1: v160, a2: "ScriptDebugging") != 0;
          if ( (unsigned __int8)sub_140060730(a1: v160, a2: "ScriptVersion") != 0 )
            *(_DWORD *)(v77 + 652) = sub_140060E50(a1: v160, a2: "ScriptVersion");
          if ( (unsigned __int8)sub_140060730(a1: v160, a2: "test") != 0 )
          {
            *(_BYTE *)(v77 + 656) = 1;
            v120 = sub_140060EA0(a1: v160, a2: "TestSuites", a3: &byte_140EEC5C5);
            sub_140018D50(a1: v77 + 664, a2: v120);
            v121 = sub_140060EA0(a1: v160, a2: "TestSet", a3: &byte_140EEC5C5);
            sub_140018D50(a1: v77 + 696, a2: v121);
            if ( (unsigned __int8)sub_140060730(a1: v160, a2: "AssertScreenshotsFolder") != 0 )
            {
              *(_BYTE *)(v77 + 728) = 1;
              v122 = sub_140060EA0(a1: v160, a2: "AssertScreenshotsFolder", a3: &byte_140EEC5C5);
              sub_140018D50(a1: v77 + 736, a2: v122);
            }
            if ( (unsigned __int8)sub_140060730(a1: v160, a2: "DataSetActorPath") != 0 )
            {
              v123 = sub_140060EA0(a1: v160, a2: "DataSetActorPath", a3: &byte_140EEC5C5);
              sub_140018D50(a1: v77 + 768, a2: v123);
            }
            if ( (unsigned __int8)sub_140060730(a1: v160, a2: "SendPerformanceResultsToGrafana") != 0 )
              *(_BYTE *)(v77 + 800) = sub_140060DD0(a1: v160, a2: "SendPerformanceResultsToGrafana", a3: 0);
          }
          if ( (unsigned __int8)sub_140060730(a1: v160, a2: "debugFontScale") != 0 )
            *(float *)(v77 + 804) = sub_140060E10(a1: v160, a2: "debugFontScale");
          if ( (unsigned __int8)sub_140060730(a1: v160, a2: "EnableNebula") != 0
            && (unsigned int)sub_140060E50(a1: v160, a2: "EnableNebula") != 0 )
          {
            v198 = 13;
            v199 = 15;
            strcpy((char *)lpMem, "enable_nebula");
            HIWORD(lpMem[1]) = 0;
            sub_1406085B0(a1: v170, a2: lpMem);
            sub_14001B5A0(a1: lpMem);
            lpMem[0] = (LPVOID)19937;
            v198 = 0;
            v199 = 31;
          }
          v171 = &PXEngine::SystemTime::`vftable';
          v184 = 0;
          v185 = 195948557;
          v183 = &PXEngine::SafeActorPtrAs<CPXStudio>::`vftable';
          v186 = 0;
          v187 = 0;
          v188 = 0;
          v189 = 0;
          v190 = 0;
          v191 = 0;
          v192 = 0;
          v193 = 0;
          sub_140633110(a1: v194, a2: &v183);
          sub_14005B490(a1: v250);
          sub_1409DB310(a1: v253, a2: 24, a3: 42, a4: sub_140017230, a5: sub_140018380);
          sub_1409DB310(a1: v254, a2: 24, a3: 42, a4: sub_140017230, a5: sub_140018160);
          sub_1405F64D0(
            a1: (unsigned int)v252,
            a2: (unsigned int)v250,
            a3: (unsigned int)v253,
            a4: (unsigned int)&v183,
            a5: (__int64)v95,
            a6: 0,
            a7: 0);
          v124 = sub_14005FA40();
          v125 = sub_140016F80(a1: lpMem, a2: v124);
          v126 = sub_14005FB90();
          v127 = sub_140016F80(a1: &v168, a2: v126);
          sub_140765B90(a1: v251, a2: v127, a3: v125);
          sub_140642E40(a1: v235);
          sub_140635220(a1: v196, a2: v235, a3: v250, a4: &v183);
          if ( (unsigned __int8)sub_140060730(a1: v160, a2: "EnableActorStreaming") != 0
            && (unsigned int)sub_140060E50(a1: v160, a2: "EnableActorStreaming") != 0 )
          {
            sub_1405FA540(a1: v252);
          }
          v180 = &PXEngine::WGL_WindowData::`vftable';
          v181 = 0;
          v182 = 0;
          *(_QWORD *)(v77 + 608) = &v180;
          v168 = v77;
          sub_14061ABF0(
            a1: (unsigned int)v240,
            a2: (unsigned int)v251,
            a3: (unsigned int)&v168,
            a4: (unsigned int)v235,
            a5: (__int64)v196,
            a6: (__int64)v250,
            a7: (__int64)v252,
            a8: (__int64)v170,
            a9: (__int64)v194,
            a10: (__int64)v253,
            a11: (__int64)&v183,
            a12: (__int64)&v171,
            a13: (__int64)sub_140019F20,
            a14: (__int64)sub_140019F10);
          sub_140620340(a1: v240);
          v247 = v195;
          if ( *(_BYTE *)(v242 + 641) == 3 )
            v244 = 1;
          sub_140603CB0(a1: v252, a2: *(_QWORD *)&nExitCode);
          sub_1406279F0(a1: v240);
          if ( (unsigned __int8)sub_140060730(a1: v160, a2: "EnableActorSerializationOnDemand") != 0
            && (unsigned int)sub_140060E50(a1: v160, a2: "EnableActorSerializationOnDemand") != 0
            || (unsigned __int8)sub_140608600(a1: v170, a2: 6) != 0 )
          {
            *(_BYTE *)(v248 + 219) = 0;
            LOBYTE(v128) = 1;
            sub_1405FA530(a1: v252, a2: v128);
          }
          sub_1406223D0(a1: v240, a2: lpText);
          if ( v226 != 0 )
          {
            v131 = sub_14060B810(a1: qword_141389CB8);
            sub_140608E20(a1: v131);
            sub_1409CB830(a1: v240, a2: v160);
            sub_140608000(a1: v104, a2: &byte_140EEC5C5);
            v132 = sub_140060EC0(a1: v160, a2: "ServiceBaseUrl");
            sub_140607FB0(a1: 3, a2: v132);
            v133 = &v209;
            if ( v211 > 0xF )
              v133 = (__int128 *)v209;
            sub_140607FB0(a1: 14, a2: v133);
            v134 = v245;
            v135 = &v209;
            if ( v211 > 0xF )
              v135 = (__int128 *)v209;
            sub_1406429B0(a1: v245, a2: v135);
            v136 = &v227;
            if ( v229 > 0xF )
              v136 = (__int128 *)v227;
            sub_140642C10(a1: v134, a2: v136);
            if ( (unsigned __int8)sub_140640E90(a1: v134) != 0 )
            {
              v143 = sub_14005FBA0();
              v144 = sub_14005FA50();
              sub_14004F6B0(a1: v234, a2: v144, a3: "Global", a4: v143);
              if ( (unsigned int)sub_140631130(a1: v248, a2: (unsigned int)v240, a3: (unsigned int)v234, a4: 0, a5: 5) == 1 )
              {
                if ( (unsigned __int8)sub_140060730(a1: v160, a2: "EnableHotReload") != 0 )
                  sub_1405FA520(a1: v252);
                v176 = 0;
                v177 = 1;
                v174 = 1304;
                v175 = 0;
                sub_1405F1D40(a1: (__int64)&v168, a2: (__int64)v241);
                sub_140602E20(a1: v252, a2: &v168, a3: &v174);
                v174 = 1305;
                sub_1405F1D40(a1: (__int64)&v164, a2: (__int64)v241);
                sub_140602E20(a1: v252, a2: &v164, a3: &v174);
                v172[0] = &PXEngine::GuiWindowsAdapter::`vftable';
                v172[1] = hWnd;
                *v246 = v172;
                PeekMessageA(lpMsg: &Msg, hWnd: nullptr, wMsgFilterMin: 0, wMsgFilterMax: 0, wRemoveMsg: 1u);
                sub_140608020(a1: v179, a2: hWnd);
                sub_140619470(a1: &v183, a2: v179);
                while ( Msg.message != 18 )
                {
                  v146 = v246;
                  while ( PeekMessageA(lpMsg: &Msg, hWnd: nullptr, wMsgFilterMin: 0, wMsgFilterMax: 0, wRemoveMsg: 1u) )
                  {
                    if ( Msg.message == 18 )
                      break;
                    TranslateMessage(lpMsg: &Msg);
                    DispatchMessageA(lpMsg: &Msg);
                    if ( Msg.hwnd == hWnd && (unsigned __int8)sub_140608990(a1: v172, a2: v146, a3: &Msg) == 0 )
                      sub_14060BDD0(a1: qword_141389CB8, a2: &Msg);
                  }
                  v243 = IsIconic(hWnd: hWnd);
                  sub_14062BE20(a1: (unsigned int)v240, a2: 0, a3: 0, a4: 0, a5: 0);
                  sub_14009AAD0(a1: v195, a2: 0);
                  sub_14060B780(a1: qword_141389CB8);
                }
                wParam = Msg.wParam;
              }
              else
              {
                v145 = v249;
                if ( v249[3] > 0xFu )
                  v145 = (_QWORD *)v249[0];
                v198 = (unsigned __int64)v145;
                lpMem[0] = (LPVOID)0xB000000000000000LL;
                v199 = (unsigned __int64)v234;
                v200 = sub_140010A00;
                lpMem[1] = (LPVOID)0xD000000000000008LL;
                v168 = 2;
                v169 = lpMem;
                v164 = "{}\nUnable to load the startup file: '{}'";
                v165 = 40;
                if ( (unsigned __int8)sub_140059F60(a1: off_140EECDD8, a2: &v164, a3: &v168) != 0 )
                  __debugbreak();
                wParam = 1;
              }
              sub_14004FE80(a1: v234);
              goto LABEL_290;
            }
            v137 = sub_140640600(a1: v134, a2: v231);
            v138 = sub_140053630(a1: v137);
            sub_14004FE80(a1: v231);
            if ( v138 != 0 )
            {
              lpMem[1] = (LPVOID)sub_140640600(a1: v134, a2: v231);
              v198 = (unsigned __int64)sub_140010A00;
              lpMem[0] = (LPVOID)0xD000000000000000LL;
              v168 = 1;
              v169 = lpMem;
              v140 = "Unable to load translations from file '{}'.";
              v165 = 43;
              v141 = off_140EECDB0;
            }
            else
            {
              v139 = sub_1406409B0(a1: v134, a2: *(unsigned int *)(v134 + 8));
              v198 = sub_140640600(a1: v134, a2: v231);
              v199 = (unsigned __int64)sub_140010A00;
              lpMem[0] = (LPVOID)0xD000000000000000LL;
              v200 = (__int64 (__fastcall *)())v139;
              lpMem[1] = (LPVOID)0xB000000000000010LL;
              v168 = 2;
              v169 = lpMem;
              v140 = "Unable to load translations from file '{}'. Translation file not found for language '{}'. Please re"
                     "place the missing file or switch to English.";
              v165 = 143;
              v141 = off_140EECD88;
            }
            v164 = v140;
            v142 = sub_140059F60(a1: v141, a2: &v164, a3: &v168);
            sub_14004FE80(a1: v231);
            if ( v142 != 0 )
              __debugbreak();
          }
          else
          {
            v129 = (const char *)lpText;
            if ( v225 > 0xF )
              v129 = lpText[0];
            if ( (unsigned __int8)sub_140059D90(a1: off_140EECD60, a2: "%s", v129) != 0 )
              __debugbreak();
            v130 = (const CHAR *)lpText;
            if ( v225 > 0xF )
              v130 = lpText[0];
            MessageBoxA(hWnd: nullptr, lpText: v130, lpCaption: "Initialization error", uType: 0x30u);
            if ( v226 == 0 )
            {
              sub_14001B5A0(a1: lpText);
              wParam = 1;
LABEL_290:
              sub_14061E430(a1: v240);
              sub_140620490();
              sub_140635E00(a1: v196);
              sub_14001B5A0(a1: v237);
              v237[0] = 19937;
              v237[2] = 0;
              v237[3] = 31;
              sub_140070AE0(a1: v236);
              sub_140766260(a1: v251);
              sub_1405F6D50(a1: v252);
              sub_1409DB390(a1: v254, a2: 24, a3: 42, a4: sub_140018160);
              sub_1409DB390(a1: v253, a2: 24, a3: 42, a4: sub_140018380);
              sub_14005BF70(a1: v250);
              sub_1406331E0(a1: v194);
LABEL_291:
              if ( v95 != nullptr )
                (**v95)(a1: v95, a2: 1);
LABEL_303:
              sub_140613370(a1: v238);
              UnregisterHotKey(hWnd: hWnd, id: -2);
              UnregisterHotKey(hWnd: hWnd, id: -1);
              sub_140018560(a1: v195);
              v4 = wParam;
LABEL_304:
              if ( v208 > 0xF )
              {
                v149 = (CHAR *)v206[0];
                if ( v208 + 1 >= 0x1000 )
                {
                  if ( (unsigned __int64)&v206[0][-*((_QWORD *)v206[0] - 1) - 8] > 0x1F )
                    goto LABEL_347;
                  v149 = *((CHAR **)v206[0] - 1);
                }
                sub_1409DB4C0(lpMem: v149);
              }
              v206[0] = (LPCSTR)19937;
              v207 = 0;
              v208 = 31;
              sub_140608570(a1: v170);
              if ( v211 > 0xF )
              {
                v150 = (void *)v209;
                if ( v211 + 1 >= 0x1000 )
                {
                  if ( (unsigned __int64)(v209 - *(_QWORD *)(v209 - 8) - 8) > 0x1F )
                    goto LABEL_347;
                  v150 = *(void **)(v209 - 8);
                }
                sub_1409DB4C0(lpMem: v150);
              }
              *(_QWORD *)&v209 = 19937;
              v210 = 0;
              v211 = 31;
              if ( v229 > 0xF )
              {
                v151 = (void *)v227;
                if ( v229 + 1 >= 0x1000 )
                {
                  if ( (unsigned __int64)(v227 - *(_QWORD *)(v227 - 8) - 8) > 0x1F )
                    goto LABEL_347;
                  v151 = *(void **)(v227 - 8);
                }
                sub_1409DB4C0(lpMem: v151);
              }
              *(_QWORD *)&v227 = 19937;
              v228 = 0;
              v229 = 31;
              sub_140607550();
              sub_14004FE80(a1: v232);
              goto LABEL_320;
            }
          }
          wParam = 1;
          goto LABEL_290;
        }
        v119 = sub_140060E50(a1: v160, a2: "GLDebugOutput");
        if ( v119 != 0 )
LABEL_217:
          LOBYTE(v119) = 1;
        *(_BYTE *)(v77 + 13) = v119;
        goto LABEL_219;
      }
    }
    else
    {
      v95 = (void (__fastcall ***)(_QWORD, __int64))sub_1409DB470(a1: 8);
      if ( v95 != nullptr )
      {
        *v95 = (void (__fastcall **)(_QWORD, __int64))&PXEngine::StackTraceSystem::`vftable';
        goto LABEL_170;
      }
    }
    v95 = nullptr;
    goto LABEL_170;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(), LPVOID *))off_141310018[2])(a1: &off_141310018, a2: lpMem);
  v25 = lpMem;
  if ( v199 > 0xF )
    v25 = (LPVOID *)lpMem[0];
  v26 = sub_140059D90(a1: off_140EECCB8, a2: "Failed to get current path: %s", (const char *)v25);
  if ( v199 > 0xF )
  {
    v27 = lpMem[0];
    if ( v199 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)lpMem[0] - *((_QWORD *)lpMem[0] - 1) - 8 > 0x1F )
        goto LABEL_347;
      v27 = *((void **)lpMem[0] - 1);
    }
    sub_1409DB4C0(lpMem: v27);
  }
  lpMem[0] = (LPVOID)19937;
  v199 = 31;
  if ( v26 != 0 )
    __debugbreak();
LABEL_320:
  sub_14004FE80(a1: v230);
LABEL_321:
  sub_140018220(a1: v160);
  if ( v214 > 0xF )
  {
    v152 = (void *)v212;
    if ( v214 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v212 - *(_QWORD *)(v212 - 8) - 8) > 0x1F )
        goto LABEL_347;
      v152 = *(void **)(v212 - 8);
    }
    sub_1409DB4C0(lpMem: v152);
  }
  *(_QWORD *)&v212 = 19937;
  v213 = 0;
  v214 = 31;
  if ( v223 > 0xF )
  {
    v153 = (void *)v221;
    if ( v223 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v221 - *(_QWORD *)(v221 - 8) - 8) > 0x1F )
        goto LABEL_347;
      v153 = *(void **)(v221 - 8);
    }
    sub_1409DB4C0(lpMem: v153);
  }
  *(_QWORD *)&v221 = 19937;
  v222 = 0;
  v223 = 31;
  if ( v220 > 0xF )
  {
    v154 = (void *)v218;
    if ( v220 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v218 - *(_QWORD *)(v218 - 8) - 8) > 0x1F )
        goto LABEL_347;
      v154 = *(void **)(v218 - 8);
    }
    sub_1409DB4C0(lpMem: v154);
  }
  *(_QWORD *)&v218 = 19937;
  v219 = 0;
  v220 = 31;
  if ( v217 > 0xF )
  {
    v155 = (void *)v215;
    if ( v217 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v215 - *(_QWORD *)(v215 - 8) - 8) > 0x1F )
        goto LABEL_347;
      v155 = *(void **)(v215 - 8);
    }
    sub_1409DB4C0(lpMem: v155);
  }
  *(_QWORD *)&v215 = 19937;
  v216 = 0;
  v217 = 31;
  if ( v204 > 0xF )
  {
    v156 = *(void **)lpWindowName;
    if ( v204 + 1 < 0x1000 )
    {
LABEL_345:
      sub_1409DB4C0(lpMem: v156);
      return v4;
    }
    if ( (unsigned __int64)(*(_QWORD *)lpWindowName - *(_QWORD *)(*(_QWORD *)lpWindowName - 8LL) - 8LL) <= 0x1F )
    {
      v156 = *(void **)(*(_QWORD *)lpWindowName - 8LL);
      goto LABEL_345;
    }
LABEL_347:
    __fastfail(5u);
  }
  return v4;
}