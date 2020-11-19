#include "Bank.h"

void Bank::set_inputfile(string file)
{
	inputFile = file;
	trafficGen = TrafficGenerator(inputFile);
}

void Bank::report()
{
	statsKeeper.report(trafficGen, simTime, atmNum);
}

void Bank::generate_customerbase()
{
	trafficGen.initCustomerBase();
}
