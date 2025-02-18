#include <iostream>
#include "Account.h"
#include "BA_checking.h"
#include "BA_savings.h"
//#include "BusinessAccount.h"
#include "CAPersonal.h"
#include "FCABusiness.h"
#include "HVCABusiness.h"
//#include "PersonalAccount.h"
#include "PersonalMoneyMarket.h"
#include "SAPersonal.h"
//#include "Transaction.h"
#include "PersonalCD.h"
#include "TrafficGenerator.h"
#include "Customer.h"
#include "Bank.h"


int main()
{
	Bank mybank;
	int ATMs, time;
	string fname;
	cout << "Please specify input file name:\n";
	cin >> fname;
	mybank.set_inputfile(fname);
	cout << "Number of ATMs:\n";
	cin >> ATMs; // input 1 for this part
	mybank.set_atm_num(ATMs);
	cout << "Simulation time:\n";
	cin >> time;
	mybank.set_sim_time(time);
	mybank.generate_customerbase(); // Traffic Generator
	//mybank.generate_initial_traffic(); // Traffic Generator
	//mybank.simulate(); // System Controller
	mybank.report(); // Statistic Keeper



	//Create base class pointer array
	/*Account* accounts[8];
	Customer* cust1 = new Customer(4,5);
	//Hard code or randomly create the child objects
	accounts[0] = new SAPersonal();
	accounts[1] = new FCABusiness();
	accounts[2] = new BA_savings();
	accounts[3] = new CAPersonal();
	accounts[4] = new PersonalCD(); 
	accounts[5] = new HVCABusiness();
	accounts[6] = new BA_checking();
	accounts[7] = new PersonalMoneyMarket();*/
	
	//Testing PersonalMoneyMarket:
	/*accounts[7]->BalanceInquiry();
	accounts[4]->BalanceInquiry();
	cout << "Interest: " <<accounts[7]->getInterest() << endl;;
	accounts[7]->Deposit(500);
	accounts[7]->Transfer(200, accounts[4]);
	accounts[4]->BalanceInquiry();
	accounts[7]->Withdraw(200);
	accounts[7]->Withdraw(200);
	accounts[7]->Withdraw(200);
	accounts[7]->Withdraw(200);

	//Testing PersonalCD:
	accounts[4]->BalanceInquiry();
	cout << "Interest: " << accounts[4]->getInterest() << endl;;
	accounts[4]->Deposit(500);
	accounts[4]->Transfer(200, accounts[7]);
	accounts[4]->BalanceInquiry();
	accounts[4]->Withdraw(200);
	accounts[4]->Withdraw(200);
	accounts[4]->Withdraw(200);
	accounts[4]->Deposit(200);
	accounts[4]->BalanceInquiry();
	accounts[4]->Withdraw(200);*/

	//Testing Business Checking:
	/*accounts[6]->BalanceInquiry();
	cout << "Interest: " << accounts[6]->getInterest() << endl;
	accounts[6]->Deposit(500);
	cout << "Account 4 balance before Transfer: ";
	accounts[4]->BalanceInquiry();
	accounts[6]->Transfer(200, accounts[4]);
	cout << "Account 4 balance: ";
	accounts[4]->BalanceInquiry();
	cout << "Account 6";
	accounts[6]->BalanceInquiry();
	accounts[6]->Withdraw(200);
	accounts[6]->BalanceInquiry();*/
	

	/*cout << "*********************************************" << endl;
	cout << "             Personal Saving Testing         " << endl;
	cout << "*********************************************" << endl;
	// Personal Saving Testing
	accounts[0]->BalanceInquiry();
	accounts[1]->BalanceInquiry();
	cout << "Interest: " << accounts[0]->getInterest() << endl;;
	accounts[0]->Deposit(500);
	accounts[0]->BalanceInquiry();
	accounts[0]->Transfer(200, accounts[1]);
	accounts[0]->BalanceInquiry();
	accounts[0]->Withdraw(200);
	accounts[0]->BalanceInquiry();*/

	
	// Business Saving Testig

	// Foreign Currency Testing
	/*cout << "*********************************************" << endl;
	cout << "             Foreign Currency Testing        " << endl;
	cout << "*********************************************" << endl;
	accounts[1]->BalanceInquiry();
	accounts[1]->Deposit(500);
	accounts[1]->Transfer(200, accounts[7]);
	accounts[1]->BalanceInquiry();
	accounts[1]->Withdraw(200);
	accounts[1]->Withdraw(200);
	accounts[1]->Withdraw(200);
	accounts[1]->Deposit(200);
	accounts[1]->BalanceInquiry();
	accounts[1]->Withdraw(200);*/

	// High Volume Checking Accouting Testing


	// Customer Testing
	/*cout << "*********************************************" << endl;
	cout << "              Customer Class Testing         " << endl;
	cout << "*********************************************" << endl;

	cust1->addAccount("PMM", accounts[7]);
	cust1->addAccount("PCD", accounts[4]);
	cust1->addAccount("BCA", accounts[6]);
	cust1->addAccount("BFC", accounts[1]);
	cust1->addAccount("BHVC", accounts[5]);


	Account* newAcc = cust1->getAccount("BFC");
	cout << "New Balance Inquiry" << endl;
	newAcc->BalanceInquiry();

	cout << "******************  Done  *******************" << endl;

	//	display the type and id by calling a polymorphic method display
	for (int i = 0; i < 8; i++)
	{
		accounts[i]->display();
	}*/

	return 0;
}