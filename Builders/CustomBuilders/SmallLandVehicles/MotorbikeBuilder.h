#pragma once

#include "../../SmallLandVehicleBuilder.h"
#include "../../../Parts/Engine/Small/SmallEngine_A1.h"
#include "../../../Parts/VehicleBody/Small/MotorbikeBody.h"
#include "../../../Parts/EnvironmentInteractionPart/Land/Small/Motorbike/MotorbikeWheels.h"

class MotorbikeBuilder : public SmallLandVehicleBuilder
{
protected:
    virtual std::string GetName() final;
    virtual SmallEngine * CreateSmallEngine() final;
    virtual SmallVehicleBody * CreateSmallVehicleBody() final;
    virtual SmallLandVehicleWheels * CreateLowerSmallLandVehiclePart() final;
};
