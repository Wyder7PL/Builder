#include "BoatShell_A.h"

BoatShell_A::BoatShell_A()
{
    BaseMass = 150;
    BaseFraction = 35;
    rotor.reset(new WaterRotor(25));
}
