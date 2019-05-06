#pragma once

#include "VehicleBuilder.h"
#include "../Parts/EnvironmentInteractionPart/Land/LandEnvironmentInteractionPart.h"

class LandVehicleBuilder:public VehicleBuilder
{
public:
    virtual EnvironmentInteractionPart * CreateLowerVehiclePart() final;
protected:
    virtual LandEnvironmentInteractionPart * CreateLowerLandVehiclePart()=0;
};
