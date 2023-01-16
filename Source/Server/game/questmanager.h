/// 1.
// Search
		void QuestButton(unsigned int pc, unsigned int quest_index);

// Add above
#if defined(__QUEST_EVENT_FISH__)
		void Fish(unsigned int pc);
#endif
#if defined(__QUEST_EVENT_MINE__)
		void Mine(unsigned int pc);
#endif
#if defined(__QUEST_EVENT_BUY_SELL__)
		void BuyItem(unsigned int pc, unsigned int npc, LPITEM item);
		void SellItem(unsigned int pc, unsigned int npc, LPITEM item);
#endif
#if defined(__QUEST_EVENT_CRAFT__)
		void CraftItem(unsigned int pc, unsigned int npc, LPITEM item);
#endif
#if defined(__QUEST_EVENT_EMOTION__)
		void Emotion(unsigned int pc, unsigned int target);
#endif
