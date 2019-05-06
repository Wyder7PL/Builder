#include "MotorbikeWheels.h"

MotorbikeWheels::MotorbikeWheels()
{
    for(int i = 0; i < 2; i++)
        TwoWheels[i].reset(new Wheel(5,4));
}

