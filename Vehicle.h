#pragma once

#include "Parts/Engine/Engine.h"
#include "Parts/VehicleBody/VehicleBody.h"
#include "Parts/EnvironmentInteractionPart/EnvironmentInteractionPart.h"

#include <sys/types.h>
#include <memory>
#include <string>

class Vehicle
{
    public:
        std::string name;

        std::unique_ptr<Engine> engine;

        std::unique_ptr<VehicleBody> vehiclebody;

        std::unique_ptr<EnvironmentInteractionPart> lowervehiclepart;///Wheels or rotors

        int GetPassagersStorage()
        {
            if(vehiclebody.get()==nullptr)
                return 0;
            return vehiclebody.get()->GetPassagersStorage();
        }

        float GetVehicleItemStorage()
        {
            if(vehiclebody.get()==nullptr)
                return 0;
            return vehiclebody.get()->GetItemsStorage();
        }
};
