#include "TrafficGenerator.h"
#include "StatisticsKeeper.h"
#include "SystemController.h"

#ifndef BANK_h
#define BANK_h

class Bank {
private:
	TrafficGenerator trafficGen;
	StatisticsKeeper statsKeeper;
	SystemController systemControl;
	int atmNum;
	int simTime;
	string inputFile;

public:
	//Bank();
	void set_inputfile(string file);
	void set_atm_num(int atm) { atmNum = atm; }
	void set_sim_time(int time) { simTime = time; }
	void report();//calls statsKeeper.report()
	void generate_customerbase(); // trafficGen.initCustomersBase();
	//void generate_initial_traffic();// trafficGen.initTraffic(); TODO: add later
	void simulate();//call systemControl.startSimulation();
};
#endif