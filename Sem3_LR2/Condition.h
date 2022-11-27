#pragma once
#include "InfoAbout.h"
class Condition : public InfoAbout {
private:
	int condition;
public:
	Condition();
	Condition(string model, string color, int cond);
	void setCondition(int condition);
	int getCondition();
	string getName(string model);
	void setModel(string model) override;
	void operator=(InfoAbout b);
};