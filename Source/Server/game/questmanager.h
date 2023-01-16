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
		bool BuyItem(unsigned int pc, unsigned int npc, LPITEM item);
		bool SellItem(unsigned int pc, unsigned int npc, LPITEM item);
#endif
#if defined(__QUEST_EVENT_CRAFT__)
		bool CraftItem(unsigned int pc, unsigned int npc, LPITEM item);
#endif
