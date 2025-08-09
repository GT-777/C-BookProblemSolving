#include "Manager.h"


namespace HR
{
	void Manager::Print()
	{
		std::cout << "Manager: " << name << ", Age: " << age << ", ID: " << employeeID << std::endl;
	}

	std::string Manager::toString()
	{
		return "Manager";
	}
}
