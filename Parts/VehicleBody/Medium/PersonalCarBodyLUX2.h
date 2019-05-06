#pragma once

#include "PersonalCarBody.h"

class PersonalCarBodyLUX2:public PersonalCarBody
{
    public:
        virtual int GetPassagersStorage();
        virtual float GetItemsStorage();
        virtual float GetMass();
};
