/// 1.
// Add at the top of the file
#if defined(__QUEST_EVENT_CRAFT__)
#	include "questmanager.h"
#endif

/// 2.
// Search
		new_item = ch->AutoGiveItem(reward_value->vnum, reward_value->count);

// Add below
#if defined(__QUEST_EVENT_CRAFT__)
		quest::CQuestManager::instance().CraftItem(ch->GetPlayerID(), npc->GetRaceNum(), new_item);
#endif
