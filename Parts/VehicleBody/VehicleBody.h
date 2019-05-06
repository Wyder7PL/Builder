#pragma once

class VehicleBody
{
public:
    virtual int GetPassagersStorage()=0;
    virtual float GetItemsStorage()=0;
    virtual float GetMass()=0;
};
