#include "CarBuilder.h"

Engine * CarBuilder::CreateEngine()
{
    return CreateCarEngine();
}

VehicleBody * CarBuilder::CreateVehicleBody()
{
    return CreateCarBody();
}

EnvironmentInteractionPart * CarBuilder::CreateLowerVehiclePart()
{
    return CreateLowerCarPart();
}
