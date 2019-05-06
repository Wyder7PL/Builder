#include "VehicleDirector.h"

VehicleDirector::VehicleDirector()
:Builder(nullptr){}

void VehicleDirector::SetBuilder(VehicleBuilder * VBptr)
{
    Builder.reset(VBptr);
}

Vehicle * VehicleDirector::GetVehicle()
{
    VehicleBuilder * builder = Builder.get();
    Vehicle * newVehicle = new Vehicle;
    newVehicle->name = builder->GetName();
    newVehicle->engine.reset(builder->CreateEngine());
    newVehicle->vehiclebody.reset(builder->CreateVehicleBody());
    newVehicle->lowervehiclepart.reset(builder->CreateLowerVehiclePart());
    return newVehicle;
}
