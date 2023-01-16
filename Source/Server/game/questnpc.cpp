/// 1.
// Add at the bottom of the file above }
#if defined(__QUEST_EVENT_FISH__)
	bool NPC::OnFish(PC& pc) { return HandleReceiveAllEvent(pc, QUEST_FISH_EVENT); }
#endif
#if defined(__QUEST_EVENT_MINE__)
	bool NPC::OnMine(PC& pc) { return HandleReceiveAllEvent(pc, QUEST_MINE_EVENT); }
#endif
#if defined(__QUEST_EVENT_BUY_SELL__)
	bool NPC::OnBuyItem(PC& pc) { return HandleEvent(pc, QUEST_ITEM_BUY_EVENT); }
	bool NPC::OnSellItem(PC& pc) { return HandleEvent(pc, QUEST_ITEM_SELL_EVENT); }
#endif
#if defined(__QUEST_EVENT_CRAFT__)
	bool NPC::OnCraftItem(PC& pc) { return HandleEvent(pc, QUEST_ITEM_CRAFT_EVENT); }
#endif
