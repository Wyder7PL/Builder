#pragma once

#include "MediumEngine.h"

class MediumEngine_A2:public MediumEngine
{
public:
    MediumEngine_A2();
    virtual float GetEnginePower();
    virtual float GetEngineMass();
};
