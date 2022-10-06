#pragma once
#include <string>

using namespace std;

class TypeCar
{
private:
	string typeBody;
	int numberSeats;
public:
	TypeCar();
	TypeCar(string typeBody);
	TypeCar(string typeBody, int numberSeats);
	string getTypeBody();
	int getNumberSeats();

	void setTypeBody(string typeBody);
	void setNumberSeats(int numberSeats);
	~TypeCar();
};