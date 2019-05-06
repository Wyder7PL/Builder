#pragma once

#include "../Engine.h"

///Car engine,50-300 horsepower
class MediumEngine:public Engine
{
    virtual float GetEngineMass()=0;
    virtual float GetEnginePower()=0;
};
