/// 1.
// Search @ int CShop::Buy
	ch->Save();

// Add above
#if defined(__QUEST_EVENT_BUY_SELL__)
	ch->SetQuestNPCID(ch->GetShopOwner() ? ch->GetShopOwner()->GetVID() : 0);
	quest::CQuestManager::instance().BuyItem(ch->GetPlayerID(), GetNPCVnum(), item);
#endif
