#include "WaterScooterBuilder.h"

std::string WaterScooterBuilder::GetName()
{
    return "Water Scooter";
}

SmallEngine * WaterScooterBuilder::CreateSmallEngine()
{
    return new SmallEngine_B1();
}
SmallVehicleBody * WaterScooterBuilder::CreateSmallVehicleBody()
{
    return new ScooterBody();
}
SmallBoatShell * WaterScooterBuilder::CreateLowerSmallLandVehiclePart()
{
    return new SmallBoatShell_A();
}
