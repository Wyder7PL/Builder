#include "MotorbikeBuilder.h"

std::string MotorbikeBuilder::GetName()
{
    return "Motorbike";
}

SmallEngine * MotorbikeBuilder::CreateSmallEngine()
{
    return new SmallEngine_A1();
}
SmallVehicleBody * MotorbikeBuilder::CreateSmallVehicleBody()
{
    return new MotorbikeBody();
}
SmallLandVehicleWheels * MotorbikeBuilder::CreateLowerSmallLandVehiclePart()
{
    return new MotorbikeWheels();
}
