#pragma once

#include "../LandEnvironmentInteractionPart.h"
#include "../Wheel.h"
#include <sys/types.h>
#include <memory>

class SmallLandVehicleWheels:public LandEnvironmentInteractionPart
{
protected:
    std::unique_ptr<Wheel> TwoWheels[2];
public:
    float GetFraction() override
    {
        float friction = 0;
        for(int i = 0; i < 2; i++)
            friction += TwoWheels[i].get()->Friction;
        return friction;
    }

    float GetMass() override
    {
        float mass = 0;
        for(int i = 0; i < 2; i++)
            mass += TwoWheels[i].get()->Mass;
        return mass;
    }
};
