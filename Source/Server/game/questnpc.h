/// 1.
// Search
		bool OnItemInformer(PC& pc, unsigned int vnum);	// ���� ���� ��� �׽�Ʈ

// Add above
#if defined(__QUEST_EVENT_FISH__)
		bool OnFish(PC& pc);
#endif
#if defined(__QUEST_EVENT_MINE__)
		bool OnMine(PC& pc);
#endif
#if defined(__QUEST_EVENT_BUY_SELL__)
		bool OnBuyItem(PC& pc);
		bool OnSellItem(PC& pc);
#endif
#if defined(__QUEST_EVENT_CRAFT__)
		bool OnCraftItem(PC& pc);
#endif
#if defined(__QUEST_EVENT_EMOTION__)
		bool OnEmotion(PC& pc);
#endif
