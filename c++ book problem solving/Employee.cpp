#include "Employee.h"
#include <string>
#include "Manager.h"
#include "Director.h"


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
		return Person::toString() + ", EmployeeID: " + std::to_string(employeeID);
	}

	Employee::~Employee()
	{
	}
}


