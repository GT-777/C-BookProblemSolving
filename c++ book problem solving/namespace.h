#pragma once
#include "manager.h"
#include "director.h"

namespace HR
{
	 Manager* PromoteToManager(Employee* emp);
	 Director* PromoteToDirector(Employee* emp);
}