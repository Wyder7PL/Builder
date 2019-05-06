#include "CheapCarWheels.h"

CheapCarWheels::CheapCarWheels()
{
    First.reset(new Wheel(14,2));
    Second.reset(new Wheel(14,2));
    Third.reset(new Wheel(14,2));
    Fourth.reset(new Wheel(14,2));
}
