#pragma once
#include <string>

struct Parameters {
    std::string transmission;
    int enginePower, tankCapacity, maxSpeed;
};

Parameters ParamInit();