#pragma once
#include <iostream>


class HumanAbstract
{
private:
public:
	HumanAbstract();
	HumanAbstract(std::string);
	std::string getName();


protected:
	std::string name;
	
};

