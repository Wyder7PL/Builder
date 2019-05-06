#pragma once

#include "PersonalCarBody.h"

class PersonalCarBodyStandard1:public PersonalCarBody
{
    public:
        virtual int GetPassagersStorage();
        virtual float GetItemsStorage();
        virtual float GetMass();
};
