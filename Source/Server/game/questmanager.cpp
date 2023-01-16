/// 1.
// Search @ bool CQuestManager::Initialize
		m_bNoSend = false;

// Add above
#if defined(__QUEST_EVENT_FISH__)
		m_mapEventName.insert(TEventNameMap::value_type("fish", QUEST_FISH_EVENT));
#endif
#if defined(__QUEST_EVENT_MINE__)
		m_mapEventName.insert(TEventNameMap::value_type("mine", QUEST_MINE_EVENT));
#endif
#if defined(__QUEST_EVENT_BUY_SELL__)
		m_mapEventName.insert(TEventNameMap::value_type("buy", QUEST_ITEM_BUY_EVENT));
		m_mapEventName.insert(TEventNameMap::value_type("sell", QUEST_ITEM_SELL_EVENT));
#endif
#if defined(__QUEST_EVENT_CRAFT__)
		m_mapEventName.insert(TEventNameMap::value_type("craft", QUEST_ITEM_CRAFT_EVENT));
#endif

/// 2.
// Add at the bottom of the file above }
#if defined(__QUEST_EVENT_FISH__)
	void CQuestManager::Fish(unsigned int pc)
	{
		PC* pPC;

		if ((pPC = GetPC(pc)))
		{
			if (!CheckQuestLoaded(pPC))
				return;

			m_mapNPC[QUEST_NO_NPC].OnFish(*pPC);
		}
		else
		{
			sys_err("QUEST FISH_EVENT no such pc id : %d", pc);
		}
	}
#endif

#if defined(__QUEST_EVENT_MINE__)
	void CQuestManager::Mine(unsigned int pc)
	{
		PC* pPC;

		if ((pPC = GetPC(pc)))
		{
			if (!CheckQuestLoaded(pPC))
				return;

			m_mapNPC[QUEST_NO_NPC].OnMine(*pPC);
		}
		else
		{
			sys_err("QUEST MINE_EVENT no such pc id : %d", pc);
		}
	}
#endif


#if defined(__QUEST_EVENT_BUY_SELL__)
	bool CQuestManager::BuyItem(unsigned int pc, unsigned int npc, LPITEM item)
	{
		PC* pPC;
		if ((pPC = GetPC(pc)))
		{
			if (!CheckQuestLoaded(pPC))
			{
				LPCHARACTER ch = CHARACTER_MANAGER::instance().FindByPID(pc);
				if (ch)
					ch->ChatPacket(CHAT_TYPE_INFO, LC_STRING("Äù½ºÆ®¸¦ ·ÎµåÇÏ´Â ÁßÀÔ´Ï´Ù. Àá½Ã¸¸ ±â´Ù·Á ÁÖ½Ê½Ã¿À."));

				return false;
			}

			SetCurrentItem(item);
			return m_mapNPC[npc].OnBuyItem(*pPC);
		}
		else
		{
			sys_err("QUEST ITEM_BUY_EVENT no such pc id : %d", pc);
			return false;
		}
	}

	bool CQuestManager::SellItem(unsigned int pc, unsigned int npc, LPITEM item)
	{
		PC* pPC;
		if ((pPC = GetPC(pc)))
		{
			if (!CheckQuestLoaded(pPC))
			{
				LPCHARACTER ch = CHARACTER_MANAGER::instance().FindByPID(pc);
				if (ch)
					ch->ChatPacket(CHAT_TYPE_INFO, LC_STRING("Äù½ºÆ®¸¦ ·ÎµåÇÏ´Â ÁßÀÔ´Ï´Ù. Àá½Ã¸¸ ±â´Ù·Á ÁÖ½Ê½Ã¿À."));

				return false;
			}

			SetCurrentItem(item);
			return m_mapNPC[npc].OnSellItem(*pPC);
		}
		else
		{
			sys_err("QUEST ITEM_SELL_EVENT no such pc id : %d", pc);
			return false;
		}
	}
#endif

#if defined(__QUEST_EVENT_CRAFT__)
	bool CQuestManager::CraftItem(unsigned int pc, unsigned int npc, LPITEM item)
	{
		PC* pPC;
		if ((pPC = GetPC(pc)))
		{
			if (!CheckQuestLoaded(pPC))
			{
				LPCHARACTER ch = CHARACTER_MANAGER::instance().FindByPID(pc);
				if (ch)
					ch->ChatPacket(CHAT_TYPE_INFO, LC_STRING("Äù½ºÆ®¸¦ ·ÎµåÇÏ´Â ÁßÀÔ´Ï´Ù. Àá½Ã¸¸ ±â´Ù·Á ÁÖ½Ê½Ã¿À."));

				return false;
			}

			SetCurrentItem(item);
			return m_mapNPC[npc].OnCraftItem(*pPC);
		}
		else
		{
			sys_err("QUEST ITEM_CRAFT_EVENT no such pc id : %d", pc);
			return false;
		}
	}
#endif
