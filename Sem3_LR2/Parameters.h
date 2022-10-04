#pragma once
#include <string>

struct Parameters {
    float enginePower, tankCapacity, maxSpeed, fuel—onsumption, mileage;
};

Parameters ParamInit(float enginePower = 130, float tankCapacity = 50, float maxSpeed = 200, float milage = 50000);