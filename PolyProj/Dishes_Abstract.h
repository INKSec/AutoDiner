#pragma once

#include "Dish_Factory.h"

#include <iostream>

class Dishes_Abstract : public Dish_Factory
{
public:
	virtual ~Dishes_Abstract() = default;
	std::string getDishname();
protected:
	std::string dishName;

};

