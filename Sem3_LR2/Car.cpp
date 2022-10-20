#define _CRT_SECURE_NO_WARNINGS
#define DEBUG true;

#include "Car.h"
#include <iostream>

Car::Car()
{
	InfoAbout initInfo;
	Size initSize;
	Parameters initParam;
	TypeCar initType;

	this->info.setModel(initInfo.getModel());
	this->info.setColor(initInfo.getColor());
	this->info.setYearRelease(initInfo.getYearRelease());

	this->size.setLenght(initSize.getLenght());
	this->size.setWidth(initSize.getWidth());
	this->size.setHigh(initSize.getHigh());

	this->param.setEnginePower(initParam.getEnginePower());
	this->param.setTankCapacity(initParam.getTankCapacity());
	this->param.setMaxSpeed(initParam.getMaxSpeed());
	this->param.setMileage(initParam.getMileage());

	this->type.setTypeBody(initType.getTypeBody());
	this->type.setNumberSeats(initType.getNumberSeats());
}

Car::Car(InfoAbout info)
{
	Size initSize;
	Parameters initParam;
	TypeCar initType;

	this->info.setModel(info.getModel());
	this->info.setColor(info.getColor());
	this->info.setYearRelease(info.getYearRelease());

	this->size.setLenght(initSize.getLenght());
	this->size.setWidth(initSize.getWidth());
	this->size.setHigh(initSize.getHigh());

	this->param.setEnginePower(initParam.getEnginePower());
	this->param.setTankCapacity(initParam.getTankCapacity());
	this->param.setMaxSpeed(initParam.getMaxSpeed());
	this->param.setMileage(initParam.getMileage());

	this->type.setTypeBody(initType.getTypeBody());
	this->type.setNumberSeats(initType.getNumberSeats());
}

Car::Car(int numberSeats) {
	InfoAbout initInfo;
	Size initSize;
	Parameters initParam;
	TypeCar initType;

	this->info.setModel(initInfo.getModel());
	this->info.setColor(initInfo.getColor());
	this->info.setYearRelease(initInfo.getYearRelease());

	this->size.setLenght(initSize.getLenght());
	this->size.setWidth(initSize.getWidth());
	this->size.setHigh(initSize.getHigh());

	this->param.setEnginePower(initParam.getEnginePower());
	this->param.setTankCapacity(initParam.getTankCapacity());
	this->param.setMaxSpeed(initParam.getMaxSpeed());
	this->param.setMileage(initParam.getMileage());

	this->type.setTypeBody(initType.getTypeBody());
	this->type.setNumberSeats(numberSeats);
}
Car::Car(InfoAbout info, Size size, Parameters param, TypeCar type)
{
	this->info.setModel(info.getModel());
	this->info.setColor(info.getColor());
	this->info.setYearRelease(info.getYearRelease());

	this->size.setLenght(size.getLenght());
	this->size.setWidth(size.getWidth());
	this->size.setHigh(size.getHigh());

	this->param.setEnginePower(param.getEnginePower());
	this->param.setTankCapacity(param.getTankCapacity());
	this->param.setMaxSpeed(param.getMaxSpeed());
	this->param.setMileage(param.getMileage());

	this->type.setTypeBody(type.getTypeBody());
	this->type.setNumberSeats(type.getNumberSeats());
}

Car::~Car()
{
}

void Car::setMileage(float mileage)
{
	this->param.setMileage(mileage);
}

void Car::Read()
{
	string model, color;
	int yearRelease;
	cout << "������: ";
	cin >> model;
	cout << "����: ";
	cin >> color;
	cout << "���� �������: ";
	cin >> yearRelease;

	float len, widht, high;
	cout << "�����: ";
	cin >> len;
	cout << "������: ";
	cin >> widht;
	cout << "������: ";
	cin >> high;

	float enginePower, tankCapacity, maxSpeed, mileage;
	cout << "�������� ���������: ";
	cin >> enginePower;
	cout << "����� ����: ";
	cin >> tankCapacity;
	cout << "������������ ��������: ";
	cin >> maxSpeed;
	cout << "������: ";
	cin >> mileage;

	string typeBody;
	int numSeats;
	cout << "�����: ";
	cin >> typeBody;
	cout << "���-�� �������: ";
	cin >> numSeats;
	cout << endl;

	this->info.setModel(model);
	this->info.setColor(color);
	this->info.setYearRelease(yearRelease);
	this->size.setLenght(len);
	this->size.setWidth(widht);
	this->size.setHigh(high);
	this->param.setEnginePower(enginePower);
	this->param.setTankCapacity(tankCapacity);
	this->param.setMaxSpeed(maxSpeed);
	this->param.setMileage(mileage);
	this->type.setTypeBody(typeBody);
	this->type.setNumberSeats(numSeats);
}

void Car::Print()
{
	cout << "������: " << this->info.getModel() << endl;
	cout << "����: " << this->info.getColor() << endl;
	cout << "���� �������: " << this->info.getYearRelease() << endl;

	cout << "�����: " << this->size.getLenght() << endl;
	cout << "������: " << this->size.getWidth() << endl;
	cout << "������: " << this->size.getHigh() << endl;

	cout << "�������� ���������: " << this->param.getEnginePower() << endl;
	cout << "����� ����: " << this->param.getTankCapacity() << endl;
	cout << "������������ ��������: " << this->param.getMaxSpeed() << endl;
	cout << "������: " << this->param.getMileage() << endl;

	cout << "�����: " << this->type.getTypeBody() << endl;
	cout << "���-�� �������: " << this->type.getNumberSeats() << endl;
}

void Car::Age(int *age)
{
	*age = THIS_YEAR - this->info.getYearRelease();
}

void Car::Age(int& age)
{
	age = THIS_YEAR - this->info.getYearRelease();
}

void ComprasionByMilage(Car &a,Car car)
{
	printf("\n\t��������� ����� �� �������\n");
	float difference = a.param.getMileage() - car.param.getMileage();
	if (difference < 0) {
		printf("������ ������� ���� < ������ ������ ����\n");
	}
	else if (difference > 0) {
		printf("������ ������� ���� > ������ ������ ����\n");
	}
	else {
		printf("������ ������� ���� = ������ ������ ����\n");
	}
}
