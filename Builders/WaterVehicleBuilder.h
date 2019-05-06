#pragma once

#include "VehicleBuilder.h"
#include "../Parts/EnvironmentInteractionPart/Water/WaterEnvironmentInteractionPart.h"

class WaterVehicleBuilder:public VehicleBuilder
{
public:
    virtual EnvironmentInteractionPart * CreateLowerVehiclePart() final;
protected:
    virtual WaterEnvironmentInteractionPart * CreateLowerWaterVehiclePart()=0;
};
