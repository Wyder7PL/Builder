#include "YachtBuilder.h"

std::string YachtBuilder::GetName()
{
    return "Yacht";
}

Engine * YachtBuilder::CreateEngine()
{
    return new MediumEngine_B1();
}
VehicleBody * YachtBuilder::CreateVehicleBody()
{
    return new YachtBody();
}
WaterEnvironmentInteractionPart * YachtBuilder::CreateLowerWaterVehiclePart()
{
    return new BoatShell_A();
}
