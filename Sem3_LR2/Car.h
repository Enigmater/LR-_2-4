#pragma once
#include <string>
#include "InfoAbout.h"
#include "Size.h"
#include "Parameters.h"
#include "TypeCar.h"

using namespace std;

const int MAX_SIZE = 100;

/*
Структура Машина:
    Структура Информация о машина:
        модель,
        цвет
    Структура Размеры:
        длина,
        ширина,
        высота
    Структура Характеристики:
        коробка передач,
        мощность двигателя,
        объем бака,
        максимальная скорость
    Структура Тип машины:
        кузов,
        кол-во мест
*/

struct Car {
    struct InfoAbout info;
    struct Size size;
    struct Parameters param;
    struct TypeCar type;
};

Car CarInit();
void CarInputCP(struct Car car[MAX_SIZE], int countCars = 1);
void CarOutputCP(struct Car car[MAX_SIZE], int countCars = 1);