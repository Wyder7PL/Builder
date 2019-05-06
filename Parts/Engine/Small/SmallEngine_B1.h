#pragma once

#include "SmallEngine.h"

class SmallEngine_B1:public SmallEngine
{
public:
    SmallEngine_B1();
    virtual float GetEnginePower();
    virtual float GetEngineMass();
};
