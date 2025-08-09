#include <iostream>
#include "Manager.h"
#include "Director.h"
#include <vector>


using namespace HR;


int main()
{


	Manager manager("Valod", 25);
	Director director("John", 40);
	Employee employee("Bob", 17);

	std::vector<std::string> StoreAMix = {manager.toString(),director.toString(), employee.toString()};

	for (const auto& Rang : StoreAMix)
	{
		std::cout << Rang << "\n";
	}
	manager.Print();
	director.Print();
	employee.Print();
}