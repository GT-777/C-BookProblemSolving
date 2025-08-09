#include "Person.h"


namespace HR
{
    Person::Person(std::string name, int age) : name(name), age(age)
    {
    }

    void Person::Print()
    {
    }

    Person::~Person()
    {
    }

    std::string Person::toString()
    {
        return "Person";
    }
}