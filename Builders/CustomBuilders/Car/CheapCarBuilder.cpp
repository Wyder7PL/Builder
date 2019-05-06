#include "CheapCarBuilder.h"

std::string CheapCarBuilder::GetName()
{
    return "Cheap Car";
}

MediumEngine * CheapCarBuilder::CreateCarEngine()
{
    return new MediumEngine_C2();
}

PersonalCarBody * CheapCarBuilder::CreateCarBody()
{
    return new PersonalCarBodyCheap();
}

CarWheels * CheapCarBuilder::CreateLowerCarPart()
{
    return new CheapCarWheels();
}
