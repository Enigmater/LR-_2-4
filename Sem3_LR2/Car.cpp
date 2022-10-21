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
	cout << "Модель: ";
	cin >> model;
	cout << "Цвет: ";
	cin >> color;
	cout << "Дата выпуска: ";
	cin >> yearRelease;

	float len, widht, high;
	cout << "Длина: ";
	cin >> len;
	cout << "Ширина: ";
	cin >> widht;
	cout << "Высота: ";
	cin >> high;

	float enginePower, tankCapacity, maxSpeed, mileage;
	cout << "Мощность двигателя: ";
	cin >> enginePower;
	cout << "Объем бака: ";
	cin >> tankCapacity;
	cout << "Максимальная скорость: ";
	cin >> maxSpeed;
	cout << "Пробег: ";
	cin >> mileage;

	string typeBody;
	int numSeats;
	cout << "Кузов: ";
	cin >> typeBody;
	cout << "Кол-во сидений: ";
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
	cout << "Модель: " << this->info.getModel() << endl;
	cout << "Цвет: " << this->info.getColor() << endl;
	cout << "Дата выпуска: " << this->info.getYearRelease() << endl;

	cout << "Длина: " << this->size.getLenght() << endl;
	cout << "Ширина: " << this->size.getWidth() << endl;
	cout << "Высота: " << this->size.getHigh() << endl;

	cout << "Мощность двигателя: " << this->param.getEnginePower() << endl;
	cout << "Объем бака: " << this->param.getTankCapacity() << endl;
	cout << "Максимальная скорость: " << this->param.getMaxSpeed() << endl;
	cout << "Пробег: " << this->param.getMileage() << endl;

	cout << "Кузов: " << this->type.getTypeBody() << endl;
	cout << "Кол-во сидений: " << this->type.getNumberSeats() << endl;
}

void Car::FileRead()
{
	ifstream file;
	try {
		file.open("Cars.txt");
	}
	catch (const ifstream::failure& ex) {
		cout << "Ошибка при открытии файла!" << endl;
		cout << ex.what() << endl;
	}
	string model, color, body;
	float len, width, high, engPower, tankCap, maxSpeed, mileage;
	int yearRealiese, numSeats;
	for (int i = 0; i < getCountCars(); i++) {
		file >> model >> color >> yearRealiese;
		file >> len >> width >> high;
		file >> engPower >> tankCap >> maxSpeed >> mileage;
		file >> body >> numSeats;
	}
	InfoAbout info(model, color, yearRealiese);
	Size size(len, width, high);
	Parameters param(engPower, tankCap, maxSpeed, mileage);
	TypeCar type(body, numSeats);
	this->setCar(info, size, param, type);
	file.close();
}

void Car::FileWrite()
{
	ofstream file;
	try {
		file.open("Cars.txt");
		throw ("Ошибка при открытии файла!");
	}
	catch (string msg) {
		cout << msg << endl;
	}
	for (int i = 0; i < getCountCars(); i++) {
		file << info.getModel() << endl << info.getColor() << endl << info.getYearRelease() << endl;
		file << size.getLenght() << endl << size.getWidth() << endl << size.getHigh() << endl;
		file << param.getEnginePower() << endl << param.getTankCapacity() << endl << param.getMaxSpeed() << endl << param.getMileage() << endl;
		file << type.getTypeBody() << endl << type.getNumberSeats() << endl;
	}
	file.close();
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
	printf("\n\tСравнение машин по пробегу\n");
	float difference = a.param.getMileage() - car.param.getMileage();
	if (difference < 0) {
		printf("Пробег первого авто < пробег вторго авто\n");
	}
	else if (difference > 0) {
		printf("Пробег первого авто > пробег вторго авто\n");
	}
	else {
		printf("Пробег первого авто = пробег вторго авто\n");
	}
}

int Car::countCars = 0;
