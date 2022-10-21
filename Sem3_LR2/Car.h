#pragma once
#include <string>
#include <fstream>
#include "InfoAbout.h"
#include "Size.h"
#include "Parameters.h"
#include "TypeCar.h"

using namespace std;

const int THIS_YEAR = 2022;

/*
Класс Машина:
    Класс Информация о машина:
        модель,
        цвет
    Класс Размеры:
        длина,
        ширина,
        высота
    Класс Характеристики:
        мощность двигателя,
        объем бака,
        максимальная скорость
        пробег
    Класс Тип машины:
        кузов,
        кол-во мест
*/

class Car
{
    friend void ComprasionByMilage(Car&, Car car);
private:
    static int countCars;
    InfoAbout info;
    Size size;
    Parameters param;
    TypeCar type;
public:
    Car();
    Car(int numberSeats);
    Car(InfoAbout info);
    Car(InfoAbout info, Size size, Parameters param, TypeCar type);
    ~Car();

    void setMileage(float mileage);
    void setCar(InfoAbout info, Size size, Parameters param, TypeCar type) {
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

    static int getCountCars() {
        return countCars;
    }
    static void setCountCars(int newCountCars) {
        countCars = newCountCars;
    }

    void Read();
    void Print();

    void FileRead();
    void FileWrite();

    void Age(int* age);
    void Age(int& age);

    Car operator + (Car car) {
        return Car(this->type.getNumberSeats() + car.type.getNumberSeats());
    };
    Car& operator ++ () {
        this->param.setMaxSpeed(this->param.getMaxSpeed() + 10);
        return *this;
    };
    Car operator ++ (int) {
        Car post = *this;
        ++* this;
        return post;
    };
};


