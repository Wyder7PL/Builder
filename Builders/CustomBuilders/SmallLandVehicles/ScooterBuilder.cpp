#include "ScooterBuilder.h"

std::string ScooterBuilder::GetName()
{
    return "Scooter";
}

SmallEngine * ScooterBuilder::CreateSmallEngine()
{
    return new SmallEngine_B1();
}
SmallVehicleBody * ScooterBuilder::CreateSmallVehicleBody()
{
    return new ScooterBody();
}
SmallLandVehicleWheels * ScooterBuilder::CreateLowerSmallLandVehiclePart()
{
    return new MotorbikeWheels();
}
