#include "StandardCarWheels.h"

StandardCarWheels::StandardCarWheels()
{
    First.reset(new Wheel(12,2.5));
    Second.reset(new Wheel(12,2.5));
    Third.reset(new Wheel(12,2.5));
    Fourth.reset(new Wheel(12,2.5));
}
