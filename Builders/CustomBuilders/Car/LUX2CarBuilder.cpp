#include "LUX2CarBuilder.h"

std::string LUX2CarBuilder::GetName()
{
    return "LUX Car v2";
}

MediumEngine * LUX2CarBuilder::CreateCarEngine()
{
    return new MediumEngine_B1();
}

PersonalCarBody * LUX2CarBuilder::CreateCarBody()
{
    return new PersonalCarBodyLUX2();
}

CarWheels * LUX2CarBuilder::CreateLowerCarPart()
{
    return new LUXCarWheels();
}
