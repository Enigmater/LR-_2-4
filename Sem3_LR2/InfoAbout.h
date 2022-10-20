#pragma once
#include <string>
using namespace std;

class InfoAbout
{
private:
	string model, color;
	int yearRelease;
public:
	InfoAbout();
	InfoAbout(string model);
	InfoAbout(string model, string color, int yearRealease);
	~InfoAbout();

	string getModel();
	string getColor();
	int getYearRelease();

	void setModel(string model);
	void setColor(string color);
	void setYearRelease(int yearRelease);
};

