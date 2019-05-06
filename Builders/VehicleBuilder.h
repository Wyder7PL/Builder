#pragma once

#include "../Vehicle.h"

class VehicleBuilder
{
public:
    virtual std::string GetName()=0;
    virtual Engine * CreateEngine()=0;
    virtual VehicleBody * CreateVehicleBody()=0;
    virtual EnvironmentInteractionPart * CreateLowerVehiclePart()=0;
};
