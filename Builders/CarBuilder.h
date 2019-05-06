#pragma once

#include "VehicleBuilder.h"
#include "../Parts/EnvironmentInteractionPart/Land/Medium/CarWheels.h"
#include "../Parts/Engine/Medium/MediumEngine.h"
#include "../Parts/VehicleBody/Medium/PersonalCarBody.h"

class CarBuilder:public VehicleBuilder
{
public:
    virtual Engine * CreateEngine() final;
    virtual VehicleBody * CreateVehicleBody() final;
    virtual EnvironmentInteractionPart * CreateLowerVehiclePart() final;
protected:
    virtual MediumEngine * CreateCarEngine()=0;
    virtual PersonalCarBody * CreateCarBody()=0;
    virtual CarWheels * CreateLowerCarPart()=0;
};
