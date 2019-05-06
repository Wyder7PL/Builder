#pragma once

#include "WaterVehicleBuilder.h"
#include "../Parts/EnvironmentInteractionPart/Water/Small/SmallBoatShell.h"
#include "../Parts/Engine/Small/SmallEngine.h"
#include "../Parts/VehicleBody/Small/SmallVehicleBody.h"

class SmallWaterVehicleBuilder:public WaterVehicleBuilder
{
public:
    virtual Engine * CreateEngine() final;
    virtual VehicleBody * CreateVehicleBody() final;
    virtual WaterEnvironmentInteractionPart * CreateWaterEnvironmentInteractionPart() final;
protected:
    virtual SmallEngine * CreateSmallEngine()=0;
    virtual SmallVehicleBody * CreateSmallVehicleBody()=0;
    virtual SmallBoatShell * CreateLowerSmallWaterVehiclePart()=0;
};
