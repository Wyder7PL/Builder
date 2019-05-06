#pragma once

#include "SmallEngine.h"

class Pedals:public SmallEngine
{
public:
    Pedals();
    virtual float GetEnginePower();
    virtual float GetEngineMass();
};
