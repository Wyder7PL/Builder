#pragma once

#include "../../CarBuilder.h"
#include "../../../Parts/EnvironmentInteractionPart/Land/Medium/LUXCarWheels.h"
#include "../../../Parts/Engine/Medium/MediumEngine_A2.h"
#include "../../../Parts/VehicleBody/Medium/PersonalCarBodyLUX1.h"

class LUXCarBuilder:public CarBuilder
{
public:
    virtual std::string GetName() final;
    virtual MediumEngine * CreateCarEngine();
    virtual PersonalCarBody * CreateCarBody();
    virtual CarWheels * CreateLowerCarPart();
};
