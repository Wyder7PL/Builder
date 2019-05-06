#pragma once

#include "../../WaterVehicleBuilder.h"
#include "../../../Parts/EnvironmentInteractionPart/Water/Medium/BoatShell_A.h"
#include "../../../Parts/Engine/Medium/MediumEngine_B1.h"
#include "../../../Parts/VehicleBody/Medium/YachtBody.h"

class YachtBuilder:public WaterVehicleBuilder
{
public:
    virtual std::string GetName();
    virtual Engine * CreateEngine();
    virtual VehicleBody * CreateVehicleBody();
    virtual WaterEnvironmentInteractionPart * CreateLowerWaterVehiclePart();
};
