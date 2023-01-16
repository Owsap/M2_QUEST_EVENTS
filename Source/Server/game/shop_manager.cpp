/// 1.
// Search
	DBManager::instance().SendMoneyLog(MONEY_LOG_SHOP, item->GetVnum(), iPrice);

// Add below
#if defined(__QUEST_EVENT_BUY_SELL__)
	CShop* pkShop = ch->GetShop();
	if (pkShop)
		quest::CQuestManager::instance().SellItem(ch->GetPlayerID(), pkShop->GetNPCVnum(), item);
#endif
