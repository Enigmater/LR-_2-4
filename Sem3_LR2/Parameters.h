#pragma once
#include <string>

class Parameters
{
private:
	float enginePower, tankCapacity, maxSpeed, mileage;
public:
	Parameters();
	Parameters(float enginePower);
	Parameters(float enginePower, float tankCapacity, float maxSpeed, float mileage);
	float getEnginePower();
	float getTankCapacity();
	float getMaxSpeed();
	float getMileage();

	void setEnginePower(float enginePower);
	void setTankCapacity(float tankCapacity);
	void setMaxSpeed(float maxSpeed);
	void setMileage(float mileage);
	~Parameters();
};
