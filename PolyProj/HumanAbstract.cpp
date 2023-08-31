#include "HumanAbstract.h"


// Constructor
HumanAbstract::HumanAbstract()
{
	name = "unknown";
}

HumanAbstract::HumanAbstract(std::string n)
{
	name = n;
}

std::string HumanAbstract::getName()
{
	return name;
}
