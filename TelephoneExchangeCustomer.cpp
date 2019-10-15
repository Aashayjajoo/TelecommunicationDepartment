#include "TelephoneExchangeCustomer.h"

string TelephoneExchangeCustomer::getCustomerName()
{
	return name;
}

void TelephoneExchangeCustomer::setCustomerName(string name)
{
	this->name = name;
}

string TelephoneExchangeCustomer::getCustomerAddress()
{
	return address;
}

void TelephoneExchangeCustomer::setCustomerAddress(string address)
{
	this->address = address;
}

void TelephoneExchangeCustomer::acceptCustomer()
{
	cout << "Enter name"<<endl;
	cin >> name;
	cout << "Enter address" << endl;
	cin >> address;
}


