/// 1.
// Search @ bool CShopManager::StartShopping
	if (pkChr->GetShopOwner() == pkChrShopKeeper)
		return false;

// Add above
#if defined(__QUEST_EVENT_BUY_SELL__)
	if (pkChr->GetShop())
		return false;
#endif

/// 2.
// Search
	DBManager::instance().SendMoneyLog(MONEY_LOG_SHOP, item->GetVnum(), iPrice);

// Add below
#if defined(__QUEST_EVENT_BUY_SELL__)
	CShop* pkShop = ch->GetShop();
	if (pkShop)
	{
		ch->SetQuestNPCID(ch->GetShopOwner() ? ch->GetShopOwner()->GetVID() : 0);
		quest::CQuestManager::instance().SellItem(ch->GetPlayerID(), pkShop->GetNPCVnum(), item);
	}
#endif
