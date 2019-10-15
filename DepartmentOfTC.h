#ifndef DepartmentOfTC_H
#define DepartmentOfTC_H
#include<iostream>
#include "SubscriberTrunkDialing.h"
#include<list>
using namespace std;
class DepartmentOfTC
{
	map<map<int, string>, list<class SubscriberTrunkDialling>> department;
	//pair<Countrycode,Countryname>	-- INTERNATIONAL
public:
	list<class SubscriberTrunkDialling> getCountryDetails();
};
#endif // !DepartmentOfTC_H
