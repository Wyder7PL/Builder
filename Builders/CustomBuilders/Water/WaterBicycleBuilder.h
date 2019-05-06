#pragma once

#include "../../SmallWaterVehicleBuilder.h"
#include "../../../Parts/Engine/Small/Pedals.h"
#include "../../../Parts/VehicleBody/Small/BicycleBody.h"
#include "../../../Parts/EnvironmentInteractionPart/Water/Small/SmallBoatShell_A.h"

class WaterBicycleBuilder : public SmallWaterVehicleBuilder
{
    public:
        WaterBicycleBuilder();

    protected:

    virtual std::string GetName() final;
    virtual SmallEngine * CreateSmallEngine() final;
    virtual SmallVehicleBody * CreateSmallVehicleBody() final;
    virtual SmallBoatShell * CreateLowerSmallLandVehiclePart() final;
};
