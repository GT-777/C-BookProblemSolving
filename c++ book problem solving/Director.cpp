#include "Director.h"

namespace HR
{
	void Director::Print()
	{
		std::cout << "Director: " << name << ", Age: " << age << ", ID: " << employeeID << std::endl;
	}

	std::string Director::toString()
	{
		return "Director";
	}
}
