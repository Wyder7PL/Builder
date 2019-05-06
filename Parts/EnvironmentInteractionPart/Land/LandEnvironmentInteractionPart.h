#pragma once

#include "../EnvironmentInteractionPart.h"

class LandEnvironmentInteractionPart: public EnvironmentInteractionPart
{
    public:
        virtual float GetFraction()=0;
        virtual float GetMass()=0;
};
