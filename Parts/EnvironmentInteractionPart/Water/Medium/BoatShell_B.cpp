#include "BoatShell_B.h"

BoatShell_B::BoatShell_B()
{
    BaseMass = 200;
    BaseFraction = 30;
    rotor.reset(new WaterRotor(30));
}
