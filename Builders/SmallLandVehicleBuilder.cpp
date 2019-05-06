#include "SmallLandVehicleBuilder.h"

Engine * SmallLandVehicleBuilder::CreateEngine()
{
    return CreateSmallEngine();
}

VehicleBody * SmallLandVehicleBuilder::CreateVehicleBody()
{
    return CreateSmallVehicleBody();
}

LandEnvironmentInteractionPart * SmallLandVehicleBuilder::CreateLandEnvironmentInteractionPart()
{
    return CreateLowerSmallLandVehiclePart();
}
