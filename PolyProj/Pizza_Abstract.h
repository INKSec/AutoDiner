#pragma once

#include <iostream>

#include "Dishes_Abstract.h"

class Pizza_Abstract : public Dishes_Abstract {

    

public:
    
    
    virtual void preparePizza() = 0;
    virtual ~Pizza_Abstract() = default;
    
};