#include "Condition.h"

Condition::Condition()
{
	this->condition = 3;
	this->model = getName("Car model");
}

Condition::Condition(string model, string color, int cond):InfoAbout(model, color)
{
	this->condition = cond;
}

void Condition::setCondition(int condition)
{
	this->condition = condition;
}

int Condition::getCondition()
{
	return this->condition;
}

string Condition::getName(string model)
{;
	if (this->condition <= 3) {
		model += "_old";
	}
	else {
		model += "_new";
	}
	return model;
}

void Condition::setModel(string model)
{
	this->model = getName(model);
}

void Condition::operator=(InfoAbout b)
{
	this->model = b.getModel();
	this->color = b.getColor();
	this->yearRelease = b.getYearRelease();
	this->condition = 3;
}
