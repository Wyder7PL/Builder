#pragma once

#include "SmallVehicleBody.h"

class BicycleBody:public SmallVehicleBody
{
    public:
        virtual int GetPassagersStorage();
        virtual float GetItemsStorage();
        virtual float GetMass();
};
