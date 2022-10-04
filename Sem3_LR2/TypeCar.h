#pragma once
#include <string>

struct TypeCar {
    std::string typeBody;
    int numberSeats;
};

TypeCar TypeCarInit(std::string typeBody = "Тип кузова", int numberSeats = 5);