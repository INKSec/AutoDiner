#pragma once


#include <iostream>
#include <memory>





enum class Meal {
	Pizza_Salami, Pizza_Funghi
};


class Dish_Factory
{
public:
	
	Dish_Factory() {};
	virtual ~Dish_Factory() = default;
	std::string getDishName();
private:
protected:
	std::string dishName;

};

