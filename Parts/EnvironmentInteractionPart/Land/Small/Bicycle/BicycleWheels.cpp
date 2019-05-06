#include "BicycleWheels.h"

BicycleWheels::BicycleWheels()
{
    for(int i = 0; i < 2; i++)
        TwoWheels[i].reset(new BicycleWheel(1,5));
}

