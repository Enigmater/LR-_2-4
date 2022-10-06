#pragma once
#include <string>

struct Parameters {
    float enginePower, tankCapacity, maxSpeed, mileage;
};

Parameters ParamInit(float enginePower, float tankCapacity, float maxSpeed, float milage);