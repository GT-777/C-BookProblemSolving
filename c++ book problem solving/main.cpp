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

	
	Manager* mgr = PromoteToManager(emp);
	if (mgr != nullptr)
	{
		delete emp;  
		emp = nullptr;

		std::cout << "Promoted to Manager:\n" << mgr->toString() << std::endl;
	}

	
	Director* dir = PromoteToDirector(mgr);
	if (dir != nullptr)
	{
		delete mgr;  
		mgr = nullptr;

		std::cout << "Promoted to Director:\n" << dir->toString() << std::endl;
	}

	delete dir;

	return 0;
}