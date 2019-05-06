#include "BoatBuilder.h"

std::string BoatBuilder::GetName()
{
    return "Standard Boat";
}

Engine * BoatBuilder::CreateEngine()
{
    return new MediumEngine_A1();
}
VehicleBody * BoatBuilder::CreateVehicleBody()
{
    return new BoatBody();
}
WaterEnvironmentInteractionPart * BoatBuilder::CreateLowerWaterVehiclePart()
{
    return new BoatShell_B();
}
