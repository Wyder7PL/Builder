#pragma once

#include "Parts/Engine/Engine.h"
#include "Parts/VehicleBody/VehicleBody.h"
#include "Parts/EnvironmentInteractionPart/EnvironmentInteractionPart.h"

#include <sys/types.h>
#include <string>

class Vehicle
{
    public:
        std::string name;

        Engine * engine;

        VehicleBody * vehiclebody;

        EnvironmentInteractionPart * lowervehiclepart;///Wheels or rotors

        int GetPassagersStorage()
        {
            if(vehiclebody==nullptr)
                return 0;
            return vehiclebody->GetPassagersStorage();
        }

        float GetVehicleItemStorage()
        {
            if(vehiclebody==nullptr)
                return 0;
            return vehiclebody->GetItemsStorage();
        }
};
