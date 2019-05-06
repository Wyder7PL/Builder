#pragma once

#include "MediumEngine.h"

class MediumEngine_B1:public MediumEngine
{
public:
    MediumEngine_B1();
    virtual float GetEnginePower();
    virtual float GetEngineMass();
};
