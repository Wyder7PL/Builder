#pragma once

#include "../Wheel.h"

class BicycleWheel:public Wheel
{
public:
    BicycleWheel(float mass,float friction);
    float Mass;
    float Friction;
};
