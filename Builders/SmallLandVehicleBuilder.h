#pragma once

#include "LandVehicleBuilder.h"
#include "../Parts/EnvironmentInteractionPart/Land/Small/SmallLandVehicleWheels.h"
#include "../Parts/Engine/Small/SmallEngine.h"
#include "../Parts/VehicleBody/Small/SmallVehicleBody.h"

class SmallLandVehicleBuilder:public LandVehicleBuilder
{
public:
    virtual Engine * CreateEngine() final;
    virtual VehicleBody * CreateVehicleBody() final;
    virtual LandEnvironmentInteractionPart * CreateLandEnvironmentInteractionPart() final;
protected:
    virtual SmallEngine * CreateSmallEngine()=0;
    virtual SmallVehicleBody * CreateSmallVehicleBody()=0;
    virtual SmallLandVehicleWheels * CreateLowerSmallLandVehiclePart()=0;
};
