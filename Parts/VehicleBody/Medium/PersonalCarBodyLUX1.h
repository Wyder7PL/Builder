#pragma once

#include "PersonalCarBody.h"

class PersonalCarBodyLUX1:public PersonalCarBody
{
    public:
        virtual int GetPassagersStorage();
        virtual float GetItemsStorage();
        virtual float GetMass();
};
