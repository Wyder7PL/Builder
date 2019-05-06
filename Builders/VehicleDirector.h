#pragma once

#include "VehicleBuilder.h"
#include <sys/types.h>
#include <memory>

class VehicleDirector
{
    std::unique_ptr<VehicleBuilder> Builder;
public:
    VehicleDirector();
    void SetBuilder(VehicleBuilder * VBptr);
    Vehicle * GetVehicle();
};
