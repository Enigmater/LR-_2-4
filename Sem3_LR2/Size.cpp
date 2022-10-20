#include "Size.h"

Size::Size()
{
	this->lenght = 2.0f;
	this->width = 1.5f;
	this->high = 1.0f;
}

Size::Size(float lenght)
{
	this->lenght = lenght;
	this->width = 1.5f;
	this->high = 1.0f;
}

Size::Size(float lenght, float width, float high)
{
	this->lenght = lenght;
	this->width = width;
	this->high = high;
}

float Size::getLenght()
{
	return this->lenght;
}

float Size::getWidth()
{
	return this->width;
}

float Size::getHigh()
{
	return this->high;
}

void Size::setLenght(float lenght)
{
	this->lenght = lenght;
}

void Size::setWidth(float width)
{
	this->width = width;
}

void Size::setHigh(float high)
{
	this->high = high;
}

Size::~Size()
{
}
