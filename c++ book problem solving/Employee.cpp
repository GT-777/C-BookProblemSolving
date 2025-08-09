#include "Employee.h"

namespace HR
{
	int Employee::nextID = 0;

	Employee::Employee(std::string name, int age) : Person{ name, age }, employeeID{ ++nextID }
	{
	}

	void Employee::Print()
	{
		std::cout << "Employee ID: " << employeeID << ", Name: " << name << ", Age: " << age << std::endl;
	}

	std::string Employee::toString()
	{
		return "Employee";
	}

	Employee::~Employee()
	{
	}
}


