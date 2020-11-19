#pragma once
#include <map>
#include <algorithm>
#include "Account.h"

#ifndef CUSTOMER_h
#define CUSTOMER_h

using namespace std;

class Customer {
private:
	map <string, Account*> accountMap; //Accout Type name is used for mapping to child account object
	int arrivalTime, serviceTime, exitTime;

public:
	Customer();
	Customer(int aTime, int sTime);
	void displayAccounts();
	void addAccount(string, Account*);
	Account* getAccount(string accountType);
	//void setarrivalTime(int aTime);
	int getarrivalTime();
	//void setserviceTime(int sTime);
	int getserviceTime();
	void setexitTime(int eTime);
	int getexitTime();
};
#endif
