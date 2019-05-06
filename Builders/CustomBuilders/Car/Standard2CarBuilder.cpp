#include "Standard2CarBuilder.h"

std::string Standard2CarBuilder::GetName()
{
    return "Standard Car v2";
}

MediumEngine * Standard2CarBuilder::CreateCarEngine()
{
    return new MediumEngine_A1();
}

PersonalCarBody * Standard2CarBuilder::CreateCarBody()
{
    return new PersonalCarBodyStandard2();
}

CarWheels * Standard2CarBuilder::CreateLowerCarPart()
{
    return new StandardCarWheels();
}
