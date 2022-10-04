#include "Parameters.h"

Parameters ParamInit(float enginePower, float tankCapacity, float maxSpeed, float milage)
{
    Parameters param{enginePower, tankCapacity, maxSpeed, milage};
    return param;
}
