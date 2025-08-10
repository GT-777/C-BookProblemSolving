#pragma once
#include <iostream>

namespace HR
{


	class Person
	{
	public:
		Person(std::string name, int age);
		virtual void Print();
		virtual ~Person();
		virtual std::string toString();
		virtual int GetAge() const { return age; }
		virtual std::string GetName() const { return name; }
	protected:
		int age;
		std::string name;
	};

}

