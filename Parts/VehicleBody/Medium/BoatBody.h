#pragma once

#include "../VehicleBody.h"

class BoatBody:public VehicleBody
{
    public:
        virtual int GetPassagersStorage();
        virtual float GetItemsStorage();
        virtual float GetMass();
};
