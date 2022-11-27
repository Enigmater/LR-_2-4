#pragma once
#include <string>
using namespace std;

class InfoAbout
{
protected:
	string model, color;
	int yearRelease;
public:
	InfoAbout();
	InfoAbout(string model, string color);
	InfoAbout(string model, string color, int yearRealease);
	~InfoAbout();

	string getModel();
	string getColor();
	int getYearRelease();

	virtual void setModel(string model);
	void setColor(string color);
	void setYearRelease(int yearRelease);

	friend void operator << (ostream&, InfoAbout p);
};

