#pragma once

#include "SmallVehicleBody.h"

class MotorbikeBody:public SmallVehicleBody
{
    public:
        virtual int GetPassagersStorage();
        virtual float GetItemsStorage();
        virtual float GetMass();
};
