/// 1.
// Search
		QUEST_EVENT_COUNT

// Add above
#if defined(__QUEST_EVENT_FISH__)
		QUEST_FISH_EVENT,
#endif
#if defined(__QUEST_EVENT_MINE__)
		QUEST_MINE_EVENT,
#endif
#if defined(__QUEST_EVENT_BUY_SELL__)
		QUEST_ITEM_BUY_EVENT,
		QUEST_ITEM_SELL_EVENT,
#endif
#if defined(__QUEST_EVENT_CRAFT__)
		QUEST_ITEM_CRAFT_EVENT,
#endif
#if defined(__QUEST_EVENT_EMOTION__)
		QUEST_EMOTION_EVENT,
#endif
