#include "Director.h"

namespace HR
{
	void Director::Print()
	{
		std::cout << "Director: " << name << ", Age: " << age << ", ID: " << employeeID << std::endl;
	}

	std::string Director::toString()
	{
		return "Director -> " + Employee::toString();
	}

	Director* PromoteToDirector(Employee* emp)
	{
		if (!emp) return nullptr;

		if (typeid(*emp) == typeid(Director))
			return nullptr;


		return new Director(emp->GetName(), emp->GetAge());
	}
}
