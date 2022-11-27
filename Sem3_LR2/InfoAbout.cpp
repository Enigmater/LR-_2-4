#include "InfoAbout.h"
#include <iostream>

InfoAbout::InfoAbout()
{
	this->model = "Car model";
	this->color = "Car color";
	this->yearRelease = 2000;
}

InfoAbout::InfoAbout(string model, string color)
{
	this->model = model;
	this->color = color;
	this->yearRelease = 2000;
}

InfoAbout::InfoAbout(string model, string color, int yearRealease)
{
	this->model = model;
	this->color = color;
	this->yearRelease = yearRealease;
}

InfoAbout::~InfoAbout()
{
}

string InfoAbout::getModel()
{
	return this->model;
}

string InfoAbout::getColor()
{
	return this->color;
}

int InfoAbout::getYearRelease()
{
	return this->yearRelease;
}

void InfoAbout::setModel(string model)
{
	this->model = model;
}

void InfoAbout::setColor(string color)
{
	this->color = color;
}

void InfoAbout::setYearRelease(int yearRelease)
{
	this->yearRelease = yearRelease;
}

void operator<<(ostream&, InfoAbout p)
{
	cout << p.model << endl;
	cout << p.color << endl;
	cout << p.yearRelease << endl;
}
