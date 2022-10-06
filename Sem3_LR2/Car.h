#pragma once
#include <string>
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
private:
    InfoAbout info;
    Size size;
    Parameters param;
    TypeCar type;
public:
    Car();
    Car(InfoAbout info);
    Car(InfoAbout info, Size size, Parameters param, TypeCar type);
    ~Car();

    void setMileage(float mileage);

    void Read();
    void Print();
    int Age();
    void ComprasionByMilage(Car car);

};


