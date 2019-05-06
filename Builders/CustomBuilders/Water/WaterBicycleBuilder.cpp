#include "WaterBicycleBuilder.h"

std::string WaterBicycleBuilder::GetName()
{
    return "Water Bicycle";
}

SmallEngine * WaterBicycleBuilder::CreateSmallEngine()
{
    return new Pedals();
}
SmallVehicleBody * WaterBicycleBuilder::CreateSmallVehicleBody()
{
    return new BicycleBody();
}
SmallBoatShell * WaterBicycleBuilder::CreateLowerSmallLandVehiclePart()
{
    return new SmallBoatShell_A();
}

