#include "TypeCar.h"

TypeCar::TypeCar()
{
	this->typeBody = "Sedan";
	this->numberSeats = 5;
}

TypeCar::TypeCar(string typeBody)
{
	this->typeBody = typeBody;
	this->numberSeats = 5;
}

TypeCar::TypeCar(string typeBody, int numberSeats)
{
	this->typeBody = typeBody;
	this->numberSeats = numberSeats;
}

string TypeCar::getTypeBody()
{
	return this->typeBody;
}

int TypeCar::getNumberSeats()
{
	return this->numberSeats;
}

void TypeCar::setTypeBody(string typeBody)
{
	this->typeBody = typeBody;
}

void TypeCar::setNumberSeats(int numberSeats)
{
	this->numberSeats = numberSeats;
}

TypeCar::~TypeCar()
{
}



