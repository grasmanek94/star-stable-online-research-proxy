// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_1401F5E60(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-19h]
  __int64 v5; // [rsp+30h] [rbp-19h]
  __int64 v6; // [rsp+30h] [rbp-19h]
  __int64 v7; // [rsp+30h] [rbp-19h]
  __int64 v8; // [rsp+30h] [rbp-19h]
  __int64 v9; // [rsp+30h] [rbp-19h]
  __int64 v10; // [rsp+30h] [rbp-19h]
  __int64 v11; // [rsp+30h] [rbp-19h]
  __int64 v12; // [rsp+30h] [rbp-19h]
  __int64 v13; // [rsp+30h] [rbp-19h]
  __int64 v14; // [rsp+30h] [rbp-19h]
  __int64 v15; // [rsp+38h] [rbp-11h]
  __int64 v16; // [rsp+38h] [rbp-11h]
  __int64 v17; // [rsp+38h] [rbp-11h]
  __int64 v18; // [rsp+38h] [rbp-11h]
  __int64 v19; // [rsp+38h] [rbp-11h]
  __int64 v20; // [rsp+38h] [rbp-11h]
  __int64 v21; // [rsp+38h] [rbp-11h]
  __int64 v22; // [rsp+38h] [rbp-11h]
  __int64 v23; // [rsp+38h] [rbp-11h]
  __int64 v24; // [rsp+38h] [rbp-11h]
  __int64 v25; // [rsp+38h] [rbp-11h]
  __int64 v26; // [rsp+40h] [rbp-9h]
  __int64 v27; // [rsp+40h] [rbp-9h]
  LPVOID v28[2]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v29; // [rsp+60h] [rbp+17h]
  __int64 v30; // [rsp+68h] [rbp+1Fh]
  __int128 v31; // [rsp+70h] [rbp+27h]
  __int64 v32; // [rsp+80h] [rbp+37h]
  unsigned __int64 v33; // [rsp+88h] [rbp+3Fh]

  sub_14005D710(
    a1,
    a2: (unsigned int)"Horse",
    a3: 120,
    a4: (unsigned int)sub_1401E08D0,
    a5: (__int64)sub_1401ED750,
    a6: 2,
    227,
    1);
  sub_14005D4B0(a1);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseStrengthSkillBaseValue",
    a3: 120000,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseStrengthSkillBaseValueUInt",
    a3: 120002,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseStrengthSkillSkillPickValue",
    a3: 120003,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseStrengthSkillSkillPickValueUInt",
    a3: 120005,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseStrengthSkillItemValue", a3: 120006, a4: 3, a5: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseStrengthSkillItemValueUInt",
    a3: 120007,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseStrengthSkillBonusValue",
    a3: 120008,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseStrengthSkillMaxValue",
    a3: 120010,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseStrengthSkillTotalValue", a3: 120012, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseDisciplineSkillBaseValue",
    a3: 120013,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseDisciplineSkillBaseValueUInt",
    a3: 120015,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseDisciplineSkillSkillPickValue",
    a3: 120016,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseDisciplineSkillSkillPickValueUInt",
    a3: 120018,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseDisciplineSkillItemValue", a3: 120019, a4: 3, a5: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseDisciplineSkillItemValueUInt",
    a3: 120020,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseDisciplineSkillBonusValue",
    a3: 120021,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseDisciplineSkillMaxValue",
    a3: 120023,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseDisciplineSkillTotalValue",
    a3: 120025,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseSwiftnessSkillBaseValue",
    a3: 120026,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseSwiftnessSkillBaseValueUInt",
    a3: 120028,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseSwiftnessSkillSkillPickValue",
    a3: 120029,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseSwiftnessSkillSkillPickValueUInt",
    a3: 120031,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseSwiftnessSkillItemValue", a3: 120032, a4: 3, a5: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseSwiftnessSkillItemValueUInt",
    a3: 120033,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseSwiftnessSkillBonusValue",
    a3: 120034,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseSwiftnessSkillMaxValue",
    a3: 120036,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseSwiftnessSkillTotalValue", a3: 120038, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseEnduranceSkillBaseValue",
    a3: 120039,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseEnduranceSkillBaseValueUInt",
    a3: 120041,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseEnduranceSkillSkillPickValue",
    a3: 120042,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseEnduranceSkillSkillPickValueUInt",
    a3: 120044,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseEnduranceSkillItemValue", a3: 120045, a4: 3, a5: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseEnduranceSkillItemValueUInt",
    a3: 120046,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseEnduranceSkillBonusValue",
    a3: 120047,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseEnduranceSkillMaxValue",
    a3: 120049,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseEnduranceSkillTotalValue", a3: 120051, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseAgilitySkillBaseValue",
    a3: 120052,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseAgilitySkillBaseValueUInt",
    a3: 120054,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseAgilitySkillSkillPickValue",
    a3: 120055,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseAgilitySkillSkillPickValueUInt",
    a3: 120057,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseAgilitySkillItemValue", a3: 120058, a4: 3, a5: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseAgilitySkillItemValueUInt",
    a3: 120059,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseAgilitySkillBonusValue",
    a3: 120060,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseAgilitySkillMaxValue",
    a3: 120062,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseAgilitySkillTotalValue", a3: 120064, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseLevelSkillValue", a3: 120065, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005EF10(a1, a2: 120065);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseLevel",
    a3: 120067,
    a4: 2,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseNextLevel", a3: 120069, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseXP",
    a3: 120138,
    a4: 2,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseLevelProgress", a3: 120140, a4: 3, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorsePreviousLevelProgress", a3: 120141, a4: 3, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"HorseLevelXPAmount", a3: 120142, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"HorseLevelXPCompleted", a3: 120143, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"HorseLevelXPRemaining", a3: 120144, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"HorseLevelXPProgress", a3: 120145, a4: 19, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseLevelUpAvailable", a3: 120146, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseRequestLevelUp", a3: 120147, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005E940(a1, a2: (unsigned int)"SetHorseHealth", a3: 120086, a4: 3, a5: (__int64)off_1412FF728);
  sub_14005EF10(a1, a2: 120086);
  LODWORD(v15) = 1;
  LODWORD(v4) = 4;
  sub_14005DEE0(
    a1,
    a2: (unsigned int)"GetHorseStatistics",
    a3: 120085,
    a4: 2,
    a5: (__int64)off_1412FF728,
    a6: 2,
    v4,
    v15);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseCareBaseTime",
    a3: 120071,
    a4: 2,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseCareThirstState",
    a3: 120073,
    a4: 2,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseCareHungerState",
    a3: 120075,
    a4: 2,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseCareGroomState",
    a3: 120077,
    a4: 2,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseCareHoofScrapeState",
    a3: 120079,
    a4: 2,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"ResetHorseCareThirstConsumeValue", a3: 120081, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"ResetHorseCareHungerConsumeValue", a3: 120082, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"ResetHorseCareGroomConsumeValue", a3: 120083, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(
    a1,
    a2: (unsigned int)"ResetHorseCareHoofSkrapeConsumeValue",
    a3: 120084,
    a4: 0,
    a5: (__int64)off_1412FF728);
  sub_14005E940(a1, a2: (unsigned int)"SetHorseHealthRegenerateHealth", a3: 120087, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005EF10(a1, a2: 120087);
  sub_14005E940(a1, a2: (unsigned int)"AddHorseHealth", a3: 120088, a4: 3, a5: (__int64)off_1412FF728);
  sub_14005EF10(a1, a2: 120088);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseMounted", a3: 120316, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseClassInstanceId", a3: 120169, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseMaxSpeed",
    a3: 120089,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005EF10(a1, a2: 120089);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseCurrentMaxSpeed",
    a3: 120091,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005EF10(a1, a2: 120091);
  sub_14005E830(a1, a2: (unsigned int)"GetHorsePhysicsSpeed", a3: 120093, a4: 3, a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseSpeedMultiplier",
    a3: 120319,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseJumpEnable",
    a3: 120094,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseBreakEnable",
    a3: 120096,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseEnableExitTransport",
    a3: 227001,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseForceState", a3: 120118, a4: 4, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorsePlayAnimation", a3: 120119, a4: 4, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseNextAnimation", a3: 120120, a4: 4, a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseState",
    a3: 120098,
    a4: 2,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseWellbeingState",
    a3: 120106,
    a4: 2,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseWellbeingThirstDailyPerformed",
    a3: 120108,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseWellbeingHungerDailyPerformed",
    a3: 120110,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseWellbeingGroomDailyPerformed",
    a3: 120112,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseWellbeingHoofScrapeDailyPerformed",
    a3: 120114,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseDailyCarePerformedBySystem",
    a3: 120116,
    a4: 14,
    a5: (__int64)off_1412FF728);
  LODWORD(v16) = 2;
  LODWORD(v5) = 2;
  sub_14005DEE0(
    a1,
    a2: (unsigned int)"HorseUseWellbeingBoostItem",
    a3: 120117,
    a4: 1,
    a5: (__int64)&byte_140EE2615,
    a6: 2,
    v5,
    v16);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseLastState",
    a3: 120100,
    a4: 2,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseLocationSpeedBonus",
    a3: 120102,
    a4: 2,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseBreak", a3: 120125, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseMoveToLastValidPosition", a3: 120129, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseCall", a3: 120122, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseCanDismount",
    a3: 120317,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseFollowPlayer",
    a3: 120131,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseFarFollowPlayer",
    a3: 120133,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseAdjustToShopCamera", a3: 120135, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseStartCallHorseSetup", a3: 120136, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseStartCallHorseTeleportSetup", a3: 120137, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseName", a3: 120148, a4: 19, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseWellbeingPerformed", a3: 120149, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseInspectHorse", a3: 120150, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseNameLocked", a3: 120166, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseHairEquipSlotLocked", a3: 120167, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseBodyEquipSlotLocked", a3: 120168, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseIsThisCurrentHorse", a3: 120151, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseIsThisInspectedHorse", a3: 120152, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E940(a1, a2: (unsigned int)"HorseHideInfoWindows", a3: 120153, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseID", a3: 120154, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseType", a3: 120155, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseClass", a3: 120156, a4: 4, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseIsOriginalHorse", a3: 120157, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseHidden",
    a3: 120158,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  LODWORD(v17) = 3;
  LODWORD(v6) = 3;
  sub_14005DEE0(
    a1,
    a2: (unsigned int)"HorseStirrupWeight",
    a3: 120346,
    a4: 1,
    a5: (__int64)"Set the weight of stirrup snapping to players feet (weight [0-1], blend time [s])",
    a6: 2,
    v6,
    v17);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseBreed", a3: 120160, a4: 4, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseObjectName", a3: 120162, a4: 4, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseBreedId", a3: 120161, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseIsMagicalHorse", a3: 120163, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseRejectValidPosition",
    a3: 120164,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseRestoreAppearance", a3: 120170, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseAppearanceNormal", a3: 120171, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"IsHorseAppearanceMagical", a3: 120172, a4: 14, a5: (__int64)off_1412FF728);
  LODWORD(v18) = 1;
  LODWORD(v7) = 2;
  sub_14005DEE0(
    a1,
    a2: (unsigned int)"HorseAppearanceCustomBody",
    a3: 120173,
    a4: 1,
    a5: (__int64)off_1412FF728,
    a6: 3,
    v7,
    v18,
    2);
  LODWORD(v26) = 2;
  LODWORD(v19) = 1;
  LODWORD(v8) = 2;
  sub_14005DEE0(
    a1,
    a2: (unsigned int)"HorseAppearanceCustomHair",
    a3: 120174,
    a4: 1,
    a5: (__int64)off_1412FF728,
    a6: 3,
    v8,
    v19,
    v26);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseCustomAppearanceBodyID", a3: 120175, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseCustomAppearanceBodyIndex",
    a3: 120176,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseCustomAppearanceHairID", a3: 120177, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseCustomAppearanceHairIndex",
    a3: 120178,
    a4: 2,
    a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"IsHorseAppearanceCustom", a3: 120179, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"CloneHorseAppearance", a3: 120180, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"HorseHasConsumable", a3: 120181, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"HorseHasConsumableEffect", a3: 120182, a4: 14, a5: (__int64)off_1412FF728);
  LODWORD(v20) = 2;
  LODWORD(v9) = 2;
  sub_14005DEE0(
    a1,
    a2: (unsigned int)"HorseActivateConsumableEffect",
    a3: 120183,
    a4: 1,
    a5: (__int64)off_1412FF728,
    a6: 2,
    v9,
    v20);
  sub_14005D480(a1, a2: (unsigned int)"HorseDeactivateConsumableEffect", a3: 120184, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseGenderTranslationTag", a3: 120185, a4: 4, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseAgeTranslationTag", a3: 120186, a4: 4, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseLastAwardedXP", a3: 120187, a4: 2, a5: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseHasSpecialMoveCapability",
    a3: 120335,
    a4: 14,
    a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseHasSpecialMoveUnlocked", a3: 120336, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseHasSpecialGaitCapability",
    a3: 120337,
    a4: 14,
    a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseHasSpecialGaitUnlocked", a3: 120338, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseHasSittingTrotUnlocked", a3: 120339, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseHighestUnlockedState", a3: 120340, a4: 1, a5: (__int64)off_1412FF728);
  LODWORD(v21) = 4;
  LODWORD(v10) = 18;
  sub_14005DEE0(
    a1,
    a2: (unsigned int)"AddHorseCareXPToViewText",
    a3: 120341,
    a4: 1,
    a5: (__int64)off_1412FF728,
    a6: 2,
    v10,
    v21);
  sub_14005D480(a1, a2: (unsigned int)"ShowAllItems", a3: 120232, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"ShowReins", a3: 120233, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"ShowSaddle", a3: 120234, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"ShowBlanket", a3: 120235, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"ShowDecorationTail", a3: 120236, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"ShowDecorationHead", a3: 120237, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"ShowLeggings", a3: 120238, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"ShowSaddleBagRight", a3: 120241, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"ShowSaddleBagRightContent", a3: 120242, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"IsCurrentGaitIdle", a3: 120243, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"IsCurrentGaitWalk", a3: 120244, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"IsCurrentGaitTrot", a3: 120245, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"IsCurrentGaitCanter", a3: 120246, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"IsCurrentGaitGallop", a3: 120247, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"IsCurrentGaitFastGallop", a3: 120248, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"IsCurrentGaitReverse", a3: 120249, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"IsCurrentGaitTolt", a3: 120250, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"BlockGaitWalk", a3: 120251, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"BlockGaitTrot", a3: 120252, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"BlockGaitCanter", a3: 120253, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"BlockGaitGallop", a3: 120254, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"BlockGaitFastGallop", a3: 120255, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"BlockGaitReverse", a3: 120256, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"BlockGaitTolt", a3: 120257, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"UnblockGaits", a3: 120258, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005E940(a1, a2: (unsigned int)"SetHorseStateProperty", a3: 120259, a4: 4, a5: (__int64)off_1412FF728);
  LODWORD(v22) = 3;
  LODWORD(v11) = 4;
  sub_14005DEE0(
    a1,
    a2: (unsigned int)"SetHorseStateMachineParameter",
    a3: 120260,
    a4: 1,
    a5: (__int64)"Sets a parameter in the horse state-machine",
    a6: 2,
    v11,
    v22);
  sub_14005D480(a1, a2: (unsigned int)"HorseReduceGait", a3: 120126, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseIncreaseGait", a3: 120127, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(
    a1,
    a2: (unsigned int)"HorseJump",
    a3: 120128,
    a4: 0,
    a5: (__int64)"This is enabled only on debug and production builds.");
  sub_14005D480(a1, a2: (unsigned int)"HorseStop", a3: 120124, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorseSetStateProgress", a3: 120322, a4: 3, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseStateProgress", a3: 120323, a4: 3, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseStateRequestedProgress", a3: 120324, a4: 3, a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseTurningDisabled",
    a3: 120347,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"SetHorseTurningDisabled",
    a3: 120349,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005EF10(a1, a2: 120349);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseTypeName", a3: 120261, a4: 4, a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseHitEffectSlipBits",
    a3: 120264,
    a4: 2,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseSlipFriction",
    a3: 120262,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseMaxFallTime",
    a3: 120266,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseFollowWalkDistance",
    a3: 120268,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseFollowTrotDistance",
    a3: 120270,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"HorseFollowCanterDistance",
    a3: 120272,
    a4: 3,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"PlayerHasAccessToHorse", a3: 120130, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseIsPlayerInStable", a3: 120325, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E9B0(
    a1,
    a2: (unsigned int)"CoatToggleEnable",
    a3: 120274,
    a4: 14,
    a5: (__int64)off_1412FF728,
    a6: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"ToggleHorseCoat", a3: 120276, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"SetHorseCoatNormalLocal", a3: 120278, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"SetHorseCoatMagicalLocal", a3: 120279, a4: 0, a5: (__int64)off_1412FF728);
  LODWORD(v27) = 3;
  LODWORD(v23) = 3;
  LODWORD(v12) = 3;
  sub_14005DEE0(
    a1,
    a2: (unsigned int)"HorseJumpInitialize",
    a3: 120321,
    a4: 1,
    a5: (__int64)off_1412FF728,
    a6: 4,
    v12,
    v23,
    v27,
    3);
  sub_14005E940(a1, a2: (unsigned int)"SetHorseHideWhenMountedOnClient", a3: 120326, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E940(
    a1,
    a2: (unsigned int)"SetHorseHideWhenUnmountedOnClient",
    a3: 120327,
    a4: 14,
    a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"HorseLeadUnlocked", a3: 120328, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"HorseCallHorseUnlocked", a3: 120329, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"HorseFollowHorseUnlocked", a3: 120330, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseAtMaxLevelLevel", a3: 120331, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseCanFarFollowPlayer", a3: 120231, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseBondingAvailable", a3: 120333, a4: 14, a5: (__int64)off_1412FF728);
  sub_14005D480(a1, a2: (unsigned int)"HorsePerformBonding", a3: 120334, a4: 0, a5: (__int64)off_1412FF728);
  sub_14005E830(a1, a2: (unsigned int)"GetHorseStablePosition", a3: 120345, a4: 2, a5: (__int64)off_1412FF728);
  LODWORD(v24) = 14;
  LODWORD(v13) = 2;
  sub_14005DEE0(
    a1,
    a2: (unsigned int)"GetHorseIsCurrentHitEffectCategory",
    a3: 120228,
    a4: 2,
    a5: (__int64)&byte_140EE2615,
    a6: 2,
    v13,
    v24);
  sub_14005E830(
    a1,
    a2: (unsigned int)"GetHorseFrontHoofPositionOnLanding",
    a3: 120229,
    a4: 7,
    a5: (__int64)&byte_140EE2615);
  LODWORD(v25) = 4;
  LODWORD(v14) = 4;
  sub_14005DEE0(
    a1,
    a2: (unsigned int)"GetHorseSoundOverride",
    a3: 120351,
    a4: 2,
    a5: (__int64)&byte_140EE2615,
    a6: 2,
    v14,
    v25);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseWellbeingStateChanged", a3: 120188, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(
    a1,
    a2: (unsigned int)"OnHorseWellbeingThirstDailyPerformed",
    a3: 120189,
    a4: (_DWORD)off_1412FF728,
    a5: 0);
  sub_14005E7E0(
    a1,
    a2: (unsigned int)"OnHorseWellbeingHungerDailyPerformed",
    a3: 120190,
    a4: (_DWORD)off_1412FF728,
    a5: 0);
  sub_14005E7E0(
    a1,
    a2: (unsigned int)"OnHorseWellbeingGroomDailyPerformed",
    a3: 120191,
    a4: (_DWORD)off_1412FF728,
    a5: 0);
  sub_14005E7E0(
    a1,
    a2: (unsigned int)"OnHorseWellbeingHoofScrapeDailyPerformed",
    a3: 120192,
    a4: (_DWORD)off_1412FF728,
    a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseWellbeingTasksPerformed", a3: 120193, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseCareThirstStateChanged", a3: 120194, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseCareHungerStateChanged", a3: 120195, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseCareGroomStateChanged", a3: 120196, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseCareHoofScrapeStateChanged", a3: 120197, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseCareHorseShoeStateChanged", a3: 120198, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseDisciplineDecreaseWarning", a3: 120199, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseSpeedRequestDecrease", a3: 120200, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseSpeedRequestIncrease", a3: 120201, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseGaitDecrease", a3: 120203, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseGaitIncrease", a3: 120202, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseStartIdle", a3: 120204, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseStopIdle", a3: 120205, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseStartForwardBlocked", a3: 120206, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseStopForwardBlocked", a3: 120207, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseChangeState", a3: 120208, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseEnableExitTransport", a3: 227003, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseDisableExitTransport", a3: 227004, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseStartSwim", a3: 120209, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseStopSwim", a3: 120210, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseTookDamage", a3: 120211, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseDied", a3: 120212, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005EF10(a1, a2: 120212);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseJumpWhileJumpDisabled", a3: 120213, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseLevelUp", a3: 120214, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseGainedXP", a3: 120215, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseSwappedToThisHorse", a3: 120216, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseSwappedFromThisHorse", a3: 120217, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseFollowPlayerStarted", a3: 120218, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseFollowPlayerStopped", a3: 120219, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseFollowPlayerForceStopped", a3: 120220, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseFollowPlayerPathBlocked", a3: 120230, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseAppearanceChanged", a3: 120221, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseAppearanceChangedToNormal", a3: 120222, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseAppearanceChangedToMagical", a3: 120223, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseAppearanceChangedToCustom", a3: 120224, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseCoatCooldownStarted", a3: 120280, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseCoatCooldownFinished", a3: 120281, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseSlippingStart", a3: 120225, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseSlippingStop", a3: 120226, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseJumpLanding", a3: 120227, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseBondingRequest", a3: 120332, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E7E0(a1, a2: (unsigned int)"OnHorseMaxSpeedChanged", a3: 120342, a4: (_DWORD)off_1412FF728, a5: 0);
  sub_14005E8A0(a1, a2: 1242);
  sub_14005E8A0(a1, a2: 3);
  sub_14005DE70(a1);
  result = sub_140019D10();
  if ( (_BYTE)result != 0 )
  {
    *(_QWORD *)&v31 = sub_1409E0850(a1: 32);
    strcpy((char *)v31, "Activate leading the horse");
    v28[0] = (LPVOID)sub_1409E0850(a1: 32);
    strcpy((char *)v28[0], "horse.followplayer");
    sub_1409E08A0(lpMem: v28[0]);
    sub_1409E08A0(lpMem: (LPVOID)v31);
    *(_QWORD *)&v31 = sub_1409E0850(a1: 32);
    strcpy((char *)v31, "Activate horse following");
    v28[0] = (LPVOID)sub_1409E0850(a1: 32);
    strcpy((char *)v28[0], "horse.farfollowplayer");
    sub_1409E08A0(lpMem: v28[0]);
    sub_1409E08A0(lpMem: (LPVOID)v31);
    *(_QWORD *)&v31 = sub_1409E0850(a1: 48);
    strcpy((char *)v31, "swap between magic/normal appearance");
    *(_OWORD *)v28 = 0;
    v28[0] = (LPVOID)sub_1409E0850(a1: 32);
    strcpy((char *)v28[0], "horse.swapappearance");
    sub_1409E08A0(lpMem: v28[0]);
    v28[0] = (LPVOID)19937;
    v29 = 0;
    v30 = 31;
    sub_1409E08A0(lpMem: (LPVOID)v31);
    v31 = 0;
    v32 = 0;
    v33 = 0;
    *(_QWORD *)&v31 = sub_1409E0850(a1: 32);
    v32 = 22;
    v33 = 31;
    strcpy((char *)v31, "turn on/off debug info");
    strcpy((char *)v28, "horse.debuginfo");
    result = 111;
    v28[0] = (LPVOID)19937;
    v29 = 0;
    v30 = 31;
    if ( v33 > 0xF )
    {
      v3 = (void *)v31;
      if ( v33 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v31 - *(_QWORD *)(v31 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v3 = *(void **)(v31 - 8);
      }
      return sub_1409E08A0(lpMem: v3);
    }
  }
  return result;
}