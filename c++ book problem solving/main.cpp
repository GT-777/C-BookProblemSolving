#include <iostream>
#include "Manager.h"
#include "Director.h"
#include <vector>
#include "namespace.h"


using namespace HR;

int main()
{


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

	return 0;
}