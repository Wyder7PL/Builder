cmake_minimum_required(VERSION 3.1)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "-std=c++11")
project(Builder)
add_executable(Builder main.cpp Vehicle.h
	Parts/Engine/Engine.h 
	
	Parts/Engine/Small/Pedals.h
	Parts/Engine/Small/Pedals.cpp
	Parts/Engine/Small/SmallEngine.h
	Parts/Engine/Small/SmallEngine.cpp
	Parts/Engine/Small/SmallEngine_A1.h
	Parts/Engine/Small/SmallEngine_A1.cpp
	Parts/Engine/Small/SmallEngine_B1.h
	Parts/Engine/Small/SmallEngine_B1.cpp
	
	Parts/Engine/Medium/MediumEngine.h
	Parts/Engine/Medium/MediumEngine_A1.h
	Parts/Engine/Medium/MediumEngine_A1.cpp
	Parts/Engine/Medium/MediumEngine_A2.h
	Parts/Engine/Medium/MediumEngine_A2.cpp
	Parts/Engine/Medium/MediumEngine_B1.h
	Parts/Engine/Medium/MediumEngine_B1.cpp
	Parts/Engine/Medium/MediumEngine_C1.h
	Parts/Engine/Medium/MediumEngine_C1.cpp
	Parts/Engine/Medium/MediumEngine_C2.h
	Parts/Engine/Medium/MediumEngine_C2.cpp
	Parts/Engine/Medium/MediumEngine_C3.h
	Parts/Engine/Medium/MediumEngine_C3.cpp
	
	
	Parts/EnvironmentInteractionPart/EnvironmentInteractionPart.h
	
	Parts/EnvironmentInteractionPart/Land/LandEnvironmentInteractionPart.h
	Parts/EnvironmentInteractionPart/Land/Wheel.h
	Parts/EnvironmentInteractionPart/Land/Wheel.cpp
	
	Parts/EnvironmentInteractionPart/Land/Small/BicycleWheel.h
	Parts/EnvironmentInteractionPart/Land/Small/BicycleWheel.cpp
	Parts/EnvironmentInteractionPart/Land/Small/SmallLandVehicleWheels.h
	Parts/EnvironmentInteractionPart/Land/Small/SmallLandVehicleWheels.cpp
	
	Parts/EnvironmentInteractionPart/Land/Small/Bicycle/BicycleWheels.h
	Parts/EnvironmentInteractionPart/Land/Small/Bicycle/BicycleWheels.cpp
	
	Parts/EnvironmentInteractionPart/Land/Small/Motorbike/MotorbikeWheels.h
	Parts/EnvironmentInteractionPart/Land/Small/Motorbike/MotorbikeWheels.cpp
	
	Parts/EnvironmentInteractionPart/Land/Medium/CarWheels.h
	Parts/EnvironmentInteractionPart/Land/Medium/CarWheels.cpp
	Parts/EnvironmentInteractionPart/Land/Medium/CheapCarWheels.h
	Parts/EnvironmentInteractionPart/Land/Medium/CheapCarWheels.cpp
	Parts/EnvironmentInteractionPart/Land/Medium/LUXCarWheels.h
	Parts/EnvironmentInteractionPart/Land/Medium/LUXCarWheels.cpp
	Parts/EnvironmentInteractionPart/Land/Medium/StandardCarWheels.h
	Parts/EnvironmentInteractionPart/Land/Medium/StandardCarWheels.cpp
	
	Parts/EnvironmentInteractionPart/Water/WaterEnvironmentInteractionPart.h
	Parts/EnvironmentInteractionPart/Water/WaterRotor.h
	Parts/EnvironmentInteractionPart/Water/WaterRotor.cpp
	
	Parts/EnvironmentInteractionPart/Water/Small/SmallBoatShell.h
	Parts/EnvironmentInteractionPart/Water/Small/SmallBoatShell_A.h
	Parts/EnvironmentInteractionPart/Water/Small/SmallBoatShell_A.cpp
	
	Parts/EnvironmentInteractionPart/Water/Medium/BoatShell_A.h
	Parts/EnvironmentInteractionPart/Water/Medium/BoatShell_A.cpp
	Parts/EnvironmentInteractionPart/Water/Medium/BoatShell_B.h
	Parts/EnvironmentInteractionPart/Water/Medium/BoatShell_B.cpp
	Parts/EnvironmentInteractionPart/Water/Medium/MediumBoatShell.h
	
	
	Parts/VehicleBody/VehicleBody.h
	Parts/VehicleBody/VehicleBody.cpp
	
	Parts/VehicleBody/Small/BicycleBody.h
	Parts/VehicleBody/Small/BicycleBody.cpp
	Parts/VehicleBody/Small/MotorbikeBody.h
	Parts/VehicleBody/Small/MotorbikeBody.cpp
	Parts/VehicleBody/Small/ScooterBody.h
	Parts/VehicleBody/Small/ScooterBody.cpp
	Parts/VehicleBody/Small/SmallVehicleBody.h
	
	Parts/VehicleBody/Medium/BoatBody.h
	Parts/VehicleBody/Medium/BoatBody.cpp
	Parts/VehicleBody/Medium/PersonalCarBody.h
	Parts/VehicleBody/Medium/PersonalCarBodyCheap.h
	Parts/VehicleBody/Medium/PersonalCarBodyCheap.cpp
	Parts/VehicleBody/Medium/PersonalCarBodyCheapPickup.h
	Parts/VehicleBody/Medium/PersonalCarBodyCheapPickup.cpp
	Parts/VehicleBody/Medium/PersonalCarBodyLUX1.h
	Parts/VehicleBody/Medium/PersonalCarBodyLUX1.cpp
	Parts/VehicleBody/Medium/PersonalCarBodyLUX2.h
	Parts/VehicleBody/Medium/PersonalCarBodyLUX2.cpp
	Parts/VehicleBody/Medium/PersonalCarBodyPickup.h
	Parts/VehicleBody/Medium/PersonalCarBodyPickup.cpp
	Parts/VehicleBody/Medium/PersonalCarBodyStandard1.h
	Parts/VehicleBody/Medium/PersonalCarBodyStandard1.cpp
	Parts/VehicleBody/Medium/PersonalCarBodyStandard2.h
	Parts/VehicleBody/Medium/PersonalCarBodyStandard2.cpp
	Parts/VehicleBody/Medium/YachtBody.h
	Parts/VehicleBody/Medium/YachtBody.cpp
	
	
	Builders/CarBuilder.h
	Builders/CarBuilder.cpp
	Builders/LandVehicleBuilder.h
	Builders/LandVehicleBuilder.cpp
	Builders/SmallLandVehicleBuilder.h
	Builders/SmallLandVehicleBuilder.cpp
	Builders/SmallWaterVehicleBuilder.h
	Builders/SmallWaterVehicleBuilder.cpp
	Builders/VehicleBuilder.h
	Builders/VehicleDirector.h
	Builders/VehicleDirector.cpp
	Builders/WaterVehicleBuilder.h
	Builders/WaterVehicleBuilder.cpp
	
	Builders/CustomBuilders/Car/CheapCarBuilder.h
	Builders/CustomBuilders/Car/CheapCarBuilder.cpp
	Builders/CustomBuilders/Car/CheapPickupBuilder.h
	Builders/CustomBuilders/Car/CheapPickupBuilder.cpp
	Builders/CustomBuilders/Car/LUX2CarBuilder.h
	Builders/CustomBuilders/Car/LUX2CarBuilder.cpp
	Builders/CustomBuilders/Car/LUXCarBuilder.h
	Builders/CustomBuilders/Car/LUXCarBuilder.cpp
	Builders/CustomBuilders/Car/PickupBuilder.h
	Builders/CustomBuilders/Car/PickupBuilder.cpp
	Builders/CustomBuilders/Car/Standard1CarBuilder.h
	Builders/CustomBuilders/Car/Standard1CarBuilder.cpp
	Builders/CustomBuilders/Car/Standard2CarBuilder.h
	Builders/CustomBuilders/Car/Standard2CarBuilder.cpp
	
	Builders/CustomBuilders/SmallLandVehicles/BicycleBuilder.h
	Builders/CustomBuilders/SmallLandVehicles/BicycleBuilder.cpp
	Builders/CustomBuilders/SmallLandVehicles/MotorbikeBuilder.h
	Builders/CustomBuilders/SmallLandVehicles/MotorbikeBuilder.cpp
	Builders/CustomBuilders/SmallLandVehicles/ScooterBuilder.h
	Builders/CustomBuilders/SmallLandVehicles/ScooterBuilder.cpp

	Builders/CustomBuilders/Water/BoatBuilder.h
	Builders/CustomBuilders/Water/BoatBuilder.cpp
	Builders/CustomBuilders/Water/WaterBicycleBuilder.h
	Builders/CustomBuilders/Water/WaterBicycleBuilder.cpp
	Builders/CustomBuilders/Water/WaterScooterBuilder.h
	Builders/CustomBuilders/Water/WaterScooterBuilder.cpp
	Builders/CustomBuilders/Water/YachtBuilder.h
	Builders/CustomBuilders/Water/YachtBuilder.cpp
)