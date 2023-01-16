/// 1.
// Add at the bottom of the file above }
#if defined(__QUEST_EVENT_FISH__)
	bool NPC::OnFish(PC& pc) { return HandleReceiveAllEvent(pc, QUEST_FISH_EVENT); }
#endif
#if defined(__QUEST_EVENT_MINE__)
	bool NPC::OnMine(PC& pc) { return HandleReceiveAllEvent(pc, QUEST_MINE_EVENT); }
#endif
#if defined(__QUEST_EVENT_BUY_SELL__)
	bool NPC::OnBuyItem(PC& pc)
	{
		if (m_vnum == 0)
			return HandleReceiveAllEvent(pc, QUEST_ITEM_BUY_EVENT);
		else
			return HandleEvent(pc, QUEST_ITEM_BUY_EVENT);
	}
	bool NPC::OnSellItem(PC& pc)
	{
		if (m_vnum == 0)
			return HandleReceiveAllEvent(pc, QUEST_ITEM_SELL_EVENT);
		else
			return HandleEvent(pc, QUEST_ITEM_SELL_EVENT);
	}
#endif
#if defined(__QUEST_EVENT_CRAFT__)
	bool NPC::OnCraftItem(PC& pc)
	{
		if (m_vnum == 0)
			return HandleReceiveAllEvent(pc, QUEST_ITEM_CRAFT_EVENT);
		else
			return HandleEvent(pc, QUEST_ITEM_CRAFT_EVENT);
	}
#endif
#if defined(__QUEST_EVENT_EMOTION__)
	bool NPC::OnEmotion(PC& pc)
	{
		if (m_vnum == 0)
			return HandleReceiveAllEvent(pc, QUEST_EMOTION_EVENT);
		else
			return HandleEvent(pc, QUEST_EMOTION_EVENT);
	}
#endif
