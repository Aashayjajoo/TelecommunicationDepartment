#ifndef TelephoneExchangeCustomer_H
#define TelephoneExchangeCustomer_H
#include<iostream>
using namespace std;
class TelephoneExchangeCustomer
{
	string name;
	string address;
public:
	TelephoneExchangeCustomer() :name(""), address(""){}
	TelephoneExchangeCustomer(string nm, string add):name(nm),address(add){}
	string getCustomerName();
	void setCustomerName(string);
	string getCustomerAddress();
	void setCustomerAddress(string);
	void acceptCustomer();
	//void display();
};
#endif