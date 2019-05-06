#pragma once

#include "../../SmallWaterVehicleBuilder.h"
#include "../../../Parts/Engine/Small/SmallEngine_B1.h"
#include "../../../Parts/VehicleBody/Small/ScooterBody.h"
#include "../../../Parts/EnvironmentInteractionPart/Water/Small/SmallBoatShell_A.h"

class WaterScooterBuilder : public SmallWaterVehicleBuilder
{
    public:
        WaterScooterBuilder();

    protected:

    virtual std::string GetName() final;
    virtual SmallEngine * CreateSmallEngine() final;
    virtual SmallVehicleBody * CreateSmallVehicleBody() final;
    virtual SmallBoatShell * CreateLowerSmallLandVehiclePart() final;
};
