#pragma once
#include <iostream>
#include "Employee.h"

namespace HR
{

	class Manager : public Employee
	{
	public:
		Manager(std::string name, int age)
			: Employee(name, age) {}

		virtual void Print() override;
		virtual std::string toString()override;

	};
}

