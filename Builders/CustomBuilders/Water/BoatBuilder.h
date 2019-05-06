#pragma once

#include "../../WaterVehicleBuilder.h"
#include "../../../Parts/EnvironmentInteractionPart/Water/Medium/BoatShell_B.h"
#include "../../../Parts/Engine/Medium/MediumEngine_A1.h"
#include "../../../Parts/VehicleBody/Medium/BoatBody.h"

class BoatBuilder:public WaterVehicleBuilder
{
public:
    virtual std::string GetName() final;
    virtual Engine * CreateEngine();
    virtual VehicleBody * CreateVehicleBody();
    virtual WaterEnvironmentInteractionPart * CreateLowerWaterVehiclePart();
};
