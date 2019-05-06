#pragma once

#include "../../CarBuilder.h"
#include "../../../Parts/EnvironmentInteractionPart/Land/Medium/StandardCarWheels.h"
#include "../../../Parts/Engine/Medium/MediumEngine_C1.h"
#include "../../../Parts/VehicleBody/Medium/PersonalCarBodyStandard1.h"

class Standard1CarBuilder:public CarBuilder
{
public:
    virtual std::string GetName() final;
    virtual MediumEngine * CreateCarEngine();
    virtual PersonalCarBody * CreateCarBody();
    virtual CarWheels * CreateLowerCarPart();
};
