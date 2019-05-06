#pragma once

#include "PersonalCarBody.h"

class PersonalCarBodyCheapPickup:public PersonalCarBody
{
    public:
        virtual int GetPassagersStorage();
        virtual float GetItemsStorage();
        virtual float GetMass();
};
