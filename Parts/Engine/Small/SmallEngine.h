#pragma once

#include "../Engine.h"

///Bike engine,1-30 horsepower
class SmallEngine:public Engine
{
    virtual float GetEngineMass()=0;
    virtual float GetEnginePower()=0;
};
