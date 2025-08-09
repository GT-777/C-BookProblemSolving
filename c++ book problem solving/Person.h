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
	protected:
		int age;
		std::string name;
	};

}

