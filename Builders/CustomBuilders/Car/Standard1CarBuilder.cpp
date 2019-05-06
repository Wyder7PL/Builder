#include "Standard1CarBuilder.h"

std::string Standard1CarBuilder::GetName()
{
    return "Standard Car v1";
}

MediumEngine * Standard1CarBuilder::CreateCarEngine()
{
    return new MediumEngine_C1();
}

PersonalCarBody * Standard1CarBuilder::CreateCarBody()
{
    return new PersonalCarBodyStandard1();
}

CarWheels * Standard1CarBuilder::CreateLowerCarPart()
{
    return new StandardCarWheels();
}
