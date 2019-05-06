#pragma once

#include "../LandEnvironmentInteractionPart.h"
#include "../Wheel.h"
#include <sys/types.h>
#include <memory>

class CarWheels:public LandEnvironmentInteractionPart
{
protected:
    std::unique_ptr<Wheel> First;
    std::unique_ptr<Wheel> Second;
    std::unique_ptr<Wheel> Third;
    std::unique_ptr<Wheel> Fourth;
public:
    float GetFraction() override
    {
        float friction = 0;
        friction += First.get()->Friction;
        friction += Second.get()->Friction;
        friction += Third.get()->Friction;
        friction += Fourth.get()->Friction;
        return friction;
    }

    float GetMass() override
    {
        float mass = 0;
        mass += First.get()->Mass;
        mass += Second.get()->Mass;
        mass += Third.get()->Mass;
        mass += Fourth.get()->Mass;
        return mass;
    }

};
