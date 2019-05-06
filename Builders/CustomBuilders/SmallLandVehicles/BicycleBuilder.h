#pragma once

#include "../../SmallLandVehicleBuilder.h"
#include "../../../Parts/Engine/Small/Pedals.h"
#include "../../../Parts/VehicleBody/Small/BicycleBody.h"
#include "../../../Parts/EnvironmentInteractionPart/Land/Small/Bicycle/BicycleWheels.h"

class BicycleBuilder : public SmallLandVehicleBuilder
{
protected:
    virtual std::string GetName() final;
    virtual SmallEngine * CreateSmallEngine() final;
    virtual SmallVehicleBody * CreateSmallVehicleBody() final;
    virtual SmallLandVehicleWheels * CreateLowerSmallLandVehiclePart() final;
};
