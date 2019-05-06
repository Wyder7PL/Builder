#pragma once

#include "../VehicleBody.h"

class PersonalCarBody:public VehicleBody
{
    public:
        virtual int GetPassagersStorage()=0;
        virtual float GetItemsStorage()=0;
        virtual float GetMass()=0;
};
