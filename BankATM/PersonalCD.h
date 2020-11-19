#pragma once
#include "PersonalAccount.h"

using namespace std;


class PersonalCD : public PersonalAccount 
{
private:
	int numWithdrawalAllowed;
	double numWithdrawalDone;
	double frozenamount;//will join balance upon the next deposit
	double depositInterest;
	double withdrawInterest;

protected:
	void activateFrozen();

public:
	//uses default values, so constructor can be called without any parameters

	PersonalCD(string f = "John", string l = "Snow");
	bool Deposit(double checkAmount); //deposit check
	bool Transfer(double amount, Account* receiverAccount);
	bool Withdraw(double amount);
	void ApplyInterest();
	void BalanceInquiry();
	void display();

};
