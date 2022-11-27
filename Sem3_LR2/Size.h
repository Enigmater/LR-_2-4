#pragma once
#include <string>

class Size
{
private:
	float lenght, width, high;
public:
	Size();
	Size(float lenght);
	Size(float lenght, float width, float high);
	float getLenght();
	float getWidth();
	float getHigh();

	void setLenght(float lenght);
	void setWidth(float width);
	void setHigh(float high);
	~Size();
};