#pragma once

#include "../../CarBuilder.h"
#include "../../../Parts/EnvironmentInteractionPart/Land/Medium/StandardCarWheels.h"
#include "../../../Parts/Engine/Medium/MediumEngine_A2.h"
#include "../../../Parts/VehicleBody/Medium/PersonalCarBodyPickup.h"

class PickupBuilder:public CarBuilder
{
public:
    virtual std::string GetName() final;
    virtual MediumEngine * CreateCarEngine();
    virtual PersonalCarBody * CreateCarBody();
    virtual CarWheels * CreateLowerCarPart();
};
