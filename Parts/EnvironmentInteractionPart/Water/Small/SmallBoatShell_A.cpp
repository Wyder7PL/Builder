#include "SmallBoatShell_A.h"

SmallBoatShell_A::SmallBoatShell_A()
{
    BaseMass = 10;
    BaseFraction = 10;
    rotor.reset(new WaterRotor(10));
}
