#pragma once
#include <iostream>
#include "Person.h"

namespace HR 
{

	class Employee : public Person
	{
	public:
		Employee(std::string name, int age);
		virtual void Print() override;
		virtual std::string toString() override;
		~Employee() override;

		class Manager* manager = nullptr;
		class Director* director = nullptr;
	protected:
		int employeeID;
		static int nextID;
	};
}

