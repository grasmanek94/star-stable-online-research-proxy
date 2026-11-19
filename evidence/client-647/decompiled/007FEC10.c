char *__fastcall sub_1407FEC10(__int64 a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0LL:
      result = "compile_script_on_load";
      break;
    case 1LL:
      result = "save_metric_on_disc";
      break;
    case 2LL:
      result = "use_report_player";
      break;
    case 3LL:
      result = "use_actor_refresh_delegates";
      break;
    case 4LL:
      result = "enable_quest_cleanup";
      break;
    case 5LL:
      result = "enable_actor_streaming";
      break;
    case 6LL:
      result = "enable_actors_on_demand";
      break;
    case 7LL:
      result = "enable_space_actors_unload";
      break;
    case 8LL:
      result = "physics_60_ticks_per_second";
      break;
    case 9LL:
      result = "enable_animation_driven_jousting";
      break;
    case 10LL:
      result = (char *)&qword_140EED330;
      break;
    case 11LL:
      result = "enable_multiple_horse_locations";
      break;
    case 12LL:
      result = "enable_fashion_week";
      break;
    case 13LL:
      result = "enable_report_a_message";
      break;
    case 14LL:
      result = "enable_allow_jump_in_all_triggers";
      break;
    default:
      result = &byte_140EEC5C5;
      break;
  }
  return result;
}