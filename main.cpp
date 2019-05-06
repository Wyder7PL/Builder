
#include <sys/types.h>
#include <iostream>

#include "Builders/VehicleDirector.h"

///Example:

#include "Builders/CustomBuilders/Car/LUXCarBuilder.h"
#include "Builders/CustomBuilders/Car/PickupBuilder.h"
#include "Builders/CustomBuilders/Water/YachtBuilder.h"

int main()
{
    std::unique_ptr<VehicleDirector> Director(new VehicleDirector);
    Director.get()->SetBuilder(new LUXCarBuilder);

    std::unique_ptr<Vehicle> OurCar(Director.get()->GetVehicle());
    std::cout << "OurCar can contain " << OurCar.get()->GetPassagersStorage() << " passagers" << std::endl;



    Director.get()->SetBuilder(new PickupBuilder);

    std::unique_ptr<Vehicle> AnotherCar(Director.get()->GetVehicle());
    std::cout << "AnotherCar can store " << AnotherCar.get()->GetVehicleItemStorage() << " kg of items" << std::endl;



    Director.get()->SetBuilder(new YachtBuilder);

    std::unique_ptr<Vehicle> WaterVehicle(Director.get()->GetVehicle());
    std::cout << "Name of this vehicle is " << WaterVehicle.get()->name << std::endl;
    return 0;
}
