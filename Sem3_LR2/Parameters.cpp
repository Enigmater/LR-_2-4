#include "Parameters.h"

Parameters::Parameters()
{
	this->enginePower = 150.0f;
	this->tankCapacity = 50.0f;
	this->maxSpeed = 200.0f;
	this->mileage = 10000.0f;
}

Parameters::Parameters(float enginePower)
{
	this->enginePower = enginePower;
	this->tankCapacity = 50.0f;
	this->maxSpeed = 200.0f;
	this->mileage = 10000.0f;
}

Parameters::Parameters(float enginePower, float tankCapacity, float maxSpeed, float mileage)
{
	this->enginePower = enginePower;
	this->tankCapacity = tankCapacity;
	this->maxSpeed = maxSpeed;
	this->mileage = mileage;
}

float Parameters::getEnginePower()
{
	return this->enginePower;
}

float Parameters::getTankCapacity()
{
	return this->tankCapacity;
}

float Parameters::getMaxSpeed()
{
	return this->maxSpeed;
}

float Parameters::getMileage()
{
	return this->mileage;
}

void Parameters::setEnginePower(float enginePower)
{
	this->enginePower = enginePower;
}

void Parameters::setTankCapacity(float tankCapacity)
{
	this->tankCapacity = tankCapacity;
}

void Parameters::setMaxSpeed(float maxSpeed)
{
	this->maxSpeed = maxSpeed;
}

void Parameters::setMileage(float mileage)
{
	this->mileage = mileage;
}

Parameters::~Parameters()
{
}
