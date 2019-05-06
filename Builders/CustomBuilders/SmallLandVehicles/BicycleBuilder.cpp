#include "BicycleBuilder.h"

std::string BicycleBuilder::GetName()
{
    return "Bicycle";
}

SmallEngine * BicycleBuilder::CreateSmallEngine()
{
    return new Pedals();
}
SmallVehicleBody * BicycleBuilder::CreateSmallVehicleBody()
{
    return new BicycleBody();
}
SmallLandVehicleWheels * BicycleBuilder::CreateLowerSmallLandVehiclePart()
{
    return new BicycleWheels();
}
