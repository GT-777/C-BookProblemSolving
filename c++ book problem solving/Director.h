#pragma once
#include <iostream>
#include "Employee.h"

namespace HR
{
	 

	class Director : public Employee
	{
	public:
		Director(std::string name, int age)
			: Employee(name, age) {}
		virtual void Print() override;
		virtual std::string toString()override;

	};
}

