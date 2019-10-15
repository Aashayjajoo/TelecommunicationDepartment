#ifndef SubscriberTrunkDialling_H
#define SubscriberTrunkDialling_H
#include "LocalPhoneNumberDirectory.h"
#include<map>
#include<list>
class SubscriberTrunkDialling
{
public:
	map<map<int, string>, list<LocalPhoneNumberDirectory>> getSubscriberTrunkDiallingDetails();
	void addLocalPhoneNumberDirectoryDetails(LocalPhoneNumberDirectory);
	
private:
	map<map<int, string>, list<LocalPhoneNumberDirectory>> subscriberTrunkDialling;
	//pair<areacode,areaname> -- Inside Country
};
#endif // !SubscriberTrunkDialling_H
