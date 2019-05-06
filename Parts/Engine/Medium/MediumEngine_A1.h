#pragma once

#include "MediumEngine.h"

class MediumEngine_A1:public MediumEngine
{
public:
    MediumEngine_A1();
    virtual float GetEnginePower();
    virtual float GetEngineMass();
};
