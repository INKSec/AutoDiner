// PolyProj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include <vector>

#include "Dish_Factory.h"
#include "Dishes_Abstract.h"
#include "Pizza_Abstract.h"
#include "Pizza_Salami.h"
#include "Pizza_Funghi.h"

#include "HumanAbstract.h"
#include "Customer.h"

int main()
{
    
    //using AbsPizza = std::unique_ptr<Dishes_Abstract>;
    using AbsPizza = std::unique_ptr<Dish_Factory>;
    std::vector<AbsPizza> list2;

    list2.emplace_back(std::make_unique<Pizza_Salami>());
    list2.emplace_back(std::make_unique<Pizza_Funghi>());
    list2.emplace_back(std::make_unique<Pizza_Funghi>());

    for (auto& AbsPizza : list2) {
        std::cout << AbsPizza->getDishName() << std::endl;
    }

    Customer h("Manny");
    std::cout << h.getName() << std::endl;

    using AbsCustomer = std::unique_ptr<HumanAbstract>;
    std::vector<AbsCustomer> list3;

    list3.emplace_back(std::make_unique<Customer>("Herbert"));
    std::cout << list3[0]->getName() << std::endl;
    
    
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
