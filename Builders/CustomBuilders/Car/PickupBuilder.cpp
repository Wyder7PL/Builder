#include "PickupBuilder.h"

std::string PickupBuilder::GetName()
{
    return "Pickup";
}

MediumEngine * PickupBuilder::CreateCarEngine()
{
    return new MediumEngine_A2();
}

PersonalCarBody * PickupBuilder::CreateCarBody()
{
    return new PersonalCarBodyPickup();
}

CarWheels * PickupBuilder::CreateLowerCarPart()
{
    return new StandardCarWheels();
}
