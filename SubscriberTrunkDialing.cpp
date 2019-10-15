#include "SubscriberTrunkDialing.h"


map<map<int, string>, list<LocalPhoneNumberDirectory>> SubscriberTrunkDialling::getSubscriberTrunkDiallingDetails()
{
	map<map<int, string>, list<LocalPhoneNumberDirectory>>::iterator states_itr = subscriberTrunkDialling.begin();
	//map<int, string>::iterator itr_mid = (*states_itr).first.begin();
	list<LocalPhoneNumberDirectory> localPhoneDirectoryList;
	while (states_itr != subscriberTrunkDialling.end())
	{
		map<int, string>::iterator itr_mid = states_itr->first.begin();
		states_itr++;
	}
}

void SubscriberTrunkDialling::addLocalPhoneNumberDirectoryDetails(LocalPhoneNumberDirectory)
{
}
