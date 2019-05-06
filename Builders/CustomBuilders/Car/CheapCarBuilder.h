#pragma once

#include "../../CarBuilder.h"
#include "../../../Parts/EnvironmentInteractionPart/Land/Medium/CheapCarWheels.h"
#include "../../../Parts/Engine/Medium/MediumEngine_C2.h"
#include "../../../Parts/VehicleBody/Medium/PersonalCarBodyCheap.h"

class CheapCarBuilder:public CarBuilder
{
public:
    virtual std::string GetName() final;
    virtual MediumEngine * CreateCarEngine();
    virtual PersonalCarBody * CreateCarBody();
    virtual CarWheels * CreateLowerCarPart();
};
