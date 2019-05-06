#pragma once

#include "../../SmallLandVehicleBuilder.h"
#include "../../../Parts/Engine/Small/SmallEngine_B1.h"
#include "../../../Parts/VehicleBody/Small/ScooterBody.h"
#include "../../../Parts/EnvironmentInteractionPart/Land/Small/Motorbike/MotorbikeWheels.h"

class ScooterBuilder : public SmallLandVehicleBuilder
{
protected:
    virtual std::string GetName() final;
    virtual SmallEngine * CreateSmallEngine() final;
    virtual SmallVehicleBody * CreateSmallVehicleBody() final;
    virtual SmallLandVehicleWheels * CreateLowerSmallLandVehiclePart() final;
};
