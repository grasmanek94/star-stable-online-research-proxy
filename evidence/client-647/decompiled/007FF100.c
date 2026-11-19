char *__fastcall sub_1407FF100(__int64 a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0LL:
      result = "validate_quest_update";
      break;
    case 1LL:
      result = "decouple_activities_from_groups";
      break;
    case 2LL:
      result = "kick_player_on_item_release_validation_fail";
      break;
    case 3LL:
      result = "new_slave_synchronization";
      break;
    case 4LL:
      result = "enable_archive_horse";
      break;
    case 5LL:
      result = "enable_event_outbox";
      break;
    case 6LL:
      result = "enable_crafting_system";
      break;
    case 7LL:
      result = "enable_mystable_grids";
      break;
    case 8LL:
      result = "enable_refactored_achievement_system";
      break;
    default:
      result = &byte_140EEC5C5;
      break;
  }
  return result;
}