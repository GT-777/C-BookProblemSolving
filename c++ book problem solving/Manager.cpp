#include "Manager.h"


namespace HR
{
	void Manager::Print()
	{
		std::cout << "Manager: " << name << ", Age: " << age << ", ID: " << employeeID << std::endl;
	}

	std::string Manager::toString()
	{
		return "Manager -> " + Employee::toString();
	}

	Manager* PromoteToManager(Employee* emp)
	{
		if (!emp) return nullptr;

		
		if (typeid(*emp) == typeid(Manager))
			return nullptr;

		return new Manager(emp->GetName(), emp->GetAge());
	}
}