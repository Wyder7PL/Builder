#include "CheapPickupBuilder.h"

std::string CheapPickupBuilder::GetName()
{
    return "Cheap Pickup";
}

MediumEngine * CheapPickupBuilder::CreateCarEngine()
{
    return new MediumEngine_C3();
}

PersonalCarBody * CheapPickupBuilder::CreateCarBody()
{
    return new PersonalCarBodyCheapPickup();
}

CarWheels * CheapPickupBuilder::CreateLowerCarPart()
{
    return new CheapCarWheels();
}
