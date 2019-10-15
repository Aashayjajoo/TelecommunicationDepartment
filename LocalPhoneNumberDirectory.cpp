#include "LocalPhoneNumberDirectory.h"
#include<iterator>
void LocalPhoneNumberDirectory::addCustomerDetails(TelephoneExchangeCustomer& TEC)
{
	TEC.acceptCustomer();
}

map<int,TelephoneExchangeCustomer> LocalPhoneNumberDirectory::getCustomerDetails()
{
	map<int, TelephoneExchangeCustomer>::iterator itr1 = localphonenumberdirectory.begin();
	while(itr1!=localphonenumberdirectory.end())
	{
		cout << "Customer mobile no " << (*itr1).first << endl;
		cout << "Customer name " << (*itr1).second.getCustomerName() << endl;
		cout << "Customer address " << (*itr1).second.getCustomerAddress() << endl;
		itr1++;
	}
}

int LocalPhoneNumberDirectory::searchByName(string name)
{
	return 0;
}
