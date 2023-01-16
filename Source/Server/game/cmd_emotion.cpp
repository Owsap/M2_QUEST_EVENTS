/// 1.
// Add at the top of the file
#if defined(__QUEST_EVENT_CRAFT__)
#	include "questmanager.h"
#endif

/// 2.
// Search @ ACMD(do_emotion)
	ch->PacketAround(buf.read_peek(), buf.size());

// Add below
#if defined(__QUEST_EVENT_EMOTION__)
	ch->SetQuestNPCID(victim ? victim->GetVID() : 0);
	quest::CQuestManager::instance().Emotion(ch->GetPlayerID(), victim ? victim->GetRaceNum() : quest::QUEST_NO_NPC);
#endif
