#pragma once

#include "SmallVehicleBody.h"

class ScooterBody:public SmallVehicleBody
{
    public:
        virtual int GetPassagersStorage();
        virtual float GetItemsStorage();
        virtual float GetMass();
};
