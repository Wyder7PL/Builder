#include "SmallWaterVehicleBuilder.h"

Engine * SmallWaterVehicleBuilder::CreateEngine()
{
    return CreateSmallEngine();
}

VehicleBody * SmallWaterVehicleBuilder::CreateVehicleBody()
{
    return CreateSmallVehicleBody();
}

WaterEnvironmentInteractionPart * SmallWaterVehicleBuilder::CreateWaterEnvironmentInteractionPart()
{
    return CreateLowerSmallWaterVehiclePart();
}
