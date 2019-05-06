#include "LUXCarWheels.h"

LUXCarWheels::LUXCarWheels()
{
    First.reset(new Wheel(10,3));
    Second.reset(new Wheel(10,3));
    Third.reset(new Wheel(10,3));
    Fourth.reset(new Wheel(10,3));
}
