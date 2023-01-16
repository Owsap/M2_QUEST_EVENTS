/// 1.
// Search
	m_pkMiningEvent = mining::CreateMiningEvent(this, chLoad, count);

// Add below
#if defined(__QUEST_EVENT_MINE__)
	quest::CQuestManager::instance().Mine(GetPlayerID());
#endif

/// 2.
// Search
	m_pkFishingEvent = fishing::CreateFishingEvent(this);

// Add below
#if defined(__QUEST_EVENT_FISH__)
	quest::CQuestManager::instance().Fish(GetPlayerID());
#endif
