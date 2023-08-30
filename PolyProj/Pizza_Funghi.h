#pragma once
#include "Pizza_Abstract.h"
class Pizza_Funghi :
    public Pizza_Abstract
{


public:
    void preparePizza() override;
    Pizza_Funghi();
    ~Pizza_Funghi() {};
};

