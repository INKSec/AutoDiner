#pragma once

#include "Pizza_Abstract.h"
#include <iostream>

class Pizza_Salami : public Pizza_Abstract
{
private:
    

public:
    void preparePizza() override;
    Pizza_Salami();
    ~Pizza_Salami() {};


};