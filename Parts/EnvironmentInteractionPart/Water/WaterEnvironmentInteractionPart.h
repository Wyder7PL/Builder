#pragma once

#include "../EnvironmentInteractionPart.h"

class WaterEnvironmentInteractionPart: public EnvironmentInteractionPart
{
protected:
    float BaseFraction;
    float BaseMass;
    public:
        virtual float GetFraction()=0;

        virtual float GetMass()
        {
            return BaseMass;
        }
};
