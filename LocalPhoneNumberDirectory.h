#ifndef LocalPhoneNumberDirectory_H
#define LocalPhoneNumberDirectory_H
#include "TelephoneExchangeCustomer.h"
#include<map>
#include<iostream>
using namespace std;
class LocalPhoneNumberDirectory
{
	map<int, class TelephoneExchangeCustomer> localphonenumberdirectory;
	//pair<Mobile no, TelephoneExchangeCustomer class>
public:
	void addCustomerDetails(TelephoneExchangeCustomer &TEC);
	map<int,TelephoneExchangeCustomer> getCustomerDetails();
	int searchByName(string name);
};
#endif // !LocalPhoneNumberDirectory_H
