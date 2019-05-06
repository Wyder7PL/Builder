#pragma once

#include "../WaterEnvironmentInteractionPart.h"
#include "../WaterRotor.h"
#include <sys/types.h>
#include <memory>

class SmallBoatShell: public WaterEnvironmentInteractionPart
{
protected:
    std::unique_ptr<WaterRotor> rotor;
public:
        virtual float GetFraction() final
        {
            WaterRotor * wr = rotor.get();
            if(wr!=nullptr)
                return BaseFraction - 0.5 * wr->Size;
            return BaseFraction;
        }
};
