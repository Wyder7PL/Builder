#pragma once

#include "../VehicleBody.h"

class YachtBody:public VehicleBody
{
    public:
        virtual int GetPassagersStorage();
        virtual float GetItemsStorage();
        virtual float GetMass();
};
