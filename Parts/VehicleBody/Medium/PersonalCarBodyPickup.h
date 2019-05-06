#pragma once

#include "PersonalCarBody.h"

class PersonalCarBodyPickup:public PersonalCarBody
{
    public:
        virtual int GetPassagersStorage();
        virtual float GetItemsStorage();
        virtual float GetMass();
};
