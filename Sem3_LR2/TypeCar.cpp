#include "TypeCar.h"

TypeCar TypeCarInit(std::string typeBody, int numberSeats)
{
    TypeCar type{typeBody, numberSeats};
    return type;
}
