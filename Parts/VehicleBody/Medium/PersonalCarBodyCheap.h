#pragma once

#include "PersonalCarBody.h"

class PersonalCarBodyCheap:public PersonalCarBody
{
    public:
        virtual int GetPassagersStorage();
        virtual float GetItemsStorage();
        virtual float GetMass();
};
