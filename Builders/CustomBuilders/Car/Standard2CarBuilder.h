#pragma once

#include "../../CarBuilder.h"
#include "../../../Parts/EnvironmentInteractionPart/Land/Medium/StandardCarWheels.h"
#include "../../../Parts/Engine/Medium/MediumEngine_A1.h"
#include "../../../Parts/VehicleBody/Medium/PersonalCarBodyStandard2.h"

class Standard2CarBuilder:public CarBuilder
{
public:
    virtual std::string GetName() final;
    virtual MediumEngine * CreateCarEngine();
    virtual PersonalCarBody * CreateCarBody();
    virtual CarWheels * CreateLowerCarPart();
};
