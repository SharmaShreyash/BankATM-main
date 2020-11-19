/*1. Duration of simulation ///
2. Number of ATM machines ///
3. Total no.of customers serviced
4. Total no.of customers serviced categorized by type of accounts
5. Average service time for each customer ////
6. Average waiting time for each customer
7. Total number of transactions
8. Total number of transactions categorized by type of transaction
9. Total amount of money deposited / withdrawn
10. Number of refill_cash events generated*/

#include "StatisticsKeeper.h"

StatisticsKeeper::StatisticsKeeper() {

}



void StatisticsKeeper::report(TrafficGenerator objT, int duration, int noATMS) 
{
	cout << "************************REPORT*************************" << endl;
	cout << "Duration of simulation is " << duration<<endl;
	cout << "Number of ATMs is " << noATMS<<endl;
	cout << "The average service time is "<<objT.getAvSerTime()<<endl;

}



