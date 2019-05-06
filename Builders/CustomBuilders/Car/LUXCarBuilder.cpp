#include "LUXCarBuilder.h"

std::string LUXCarBuilder::GetName()
{
    return "LUX Car v1";
}

MediumEngine * LUXCarBuilder::CreateCarEngine()
{
    return new MediumEngine_A2();
}

PersonalCarBody * LUXCarBuilder::CreateCarBody()
{
    return new PersonalCarBodyLUX1();
}

CarWheels * LUXCarBuilder::CreateLowerCarPart()
{
    return new LUXCarWheels();
}
