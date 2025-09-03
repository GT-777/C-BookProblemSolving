
#include "Manager.h"
#include "Director.h"
#include <vector>
#include "namespace.h"
import sim;

using namespace HR;
using namespace keyval;

int main()
{
	simulator::CarSimulator car;
	simulator::BikeSimulator bike;

	Manager* manager = new Manager("Valod", 25);
	Director* director = new Director("John", 40);
	

	std::vector<Person*> StoreAMix = {manager,director};

	for (const auto& Rang : StoreAMix)
	{
		//std::cout << Rang->toString() << "\n";
	}
	
	for (auto p : StoreAMix) 
	{
		delete p;
	}

	Employee* emp = new Employee("Bob", 30);

	if (Manager* mgr = PromoteToManager(emp)) 
	{
		delete emp;
		std::cout << "Promoted to Manager:\n" << mgr->toString() << std::endl;

		if (Director* dir = PromoteToDirector(mgr)) {
			delete mgr;
			std::cout << "Promoted to Director:\n" << dir->toString() << std::endl;
			delete dir;
		}
		else 
		{
			delete mgr;
		}
	}
	else 
	{
		delete emp;
	}



	/*
	*  Exercise 12-1 12-3
	*/
	/*KeyValuePair <int,double> pair1(30, 3.14);
	std::cout << pair1.getKey() << "   " << pair1.getValue() << "\n";*/

	/*
	*  Exercise 12-2
	*/

	// Specialization for const char* types
	/*KeyValuePair <const char*, const char*> pair2("Name", "Alice");
	std::cout << pair2.getKey() << "   " << pair2.getValue() << "\n";*/


	/*
	*  Exercise 12-4
	*/
	//KeyValuePair <int, double> pair1(30, 3.14);
	std::cout << KeyValuePair<int, double>::concat(42, 7) << "\n";

	return 0;
}