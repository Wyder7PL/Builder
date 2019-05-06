#pragma once

#include "../../CarBuilder.h"
#include "../../../Parts/EnvironmentInteractionPart/Land/Medium/LUXCarWheels.h"
#include "../../../Parts/Engine/Medium/MediumEngine_B1.h"
#include "../../../Parts/VehicleBody/Medium/PersonalCarBodyLUX2.h"

class LUX2CarBuilder:public CarBuilder
{
public:
    virtual std::string GetName() final;
    virtual MediumEngine * CreateCarEngine();
    virtual PersonalCarBody * CreateCarBody();
    virtual CarWheels * CreateLowerCarPart();
};
