#pragma once
#include <string>

struct TypeCar {
    std::string typeBody;
    int numberSeats;
};

TypeCar TypeCarInit(std::string typeBody, int numberSeats);