#include "Car.h"
#include <iostream>

#define DEBUG true;

Car CarInit()
{
    Car car{ InfoInit() , SizeInit() , ParamInit() , TypeCarInit() };
    return car;
}

void CarInputCP(Car car[MAX_SIZE], int countCars)
{
#ifdef DEBUG
    cout << "Initiaization Mode" << endl;
    for (int i = 0; i < countCars; i++)
    {
        car[i] = CarInit();
    }
#else
    for (int i = 0; i < countCars; i++)
    {
        cout << "Модель: ";
        cin >> car[i].info.model;
        cout << "Цвет: ";
        cin >> car[i].info.color;

        cout << "Размеры(длина): ";
        cin >> car[i].size.lenght;
        cout << "Размеры(ширина): ";
        cin >> car[i].size.width;
        cout << "Размеры(высота): ";
        cin >> car[i].size.high;

        cout << "Параметры(Коробка передач): ";
        cin >> car[i].param.transmission;
        cout << "Параметры(Мощность): ";
        cin >> car[i].param.enginePower;
        cout << "Параметры(Объем бака): ";
        cin >> car[i].param.tankCapacity;
        cout << "Параметры(Максимальная скорость): ";
        cin >> car[i].param.maxSpeed;

        cout << "Тип(Кузов): ";
        cin >> car[i].type.typeBody;
        cout << "Тип(Кол-во мест): ";
        cin >> car[i].type.numberSeats;
    }
#endif // DEBUG
}

void CarOutputCP(Car car[MAX_SIZE], int countCars)
{
    for (int i = 0; i < countCars; i++)
    {
        cout << "Модель: " << car[i].info.model << endl;
        cout << "Цвет: " << car[i].info.color << endl;

        cout << "Размеры(длина): " << car[i].size.lenght << endl;
        cout << "Размеры(ширина): " << car[i].size.width << endl;
        cout << "Размеры(высота): " << car[i].size.high << endl;

        cout << "Параметры(Коробка передач): " << car[i].param.transmission << endl;
        cout << "Параметры(Мощность): " << car[i].param.enginePower << endl;
        cout << "Параметры(Объем бака): " << car[i].param.tankCapacity << endl;
        cout << "Параметры(Максимальная скорость):" << car[i].param.maxSpeed << endl;

        cout << "Тип(Кузов): " << car[i].type.typeBody << endl;
        cout << "Тип(Кол-во мест): " << car[i].type.numberSeats << endl;
    }
}

int CarAge(Car car)
{
    int age = THIS_YEAR - car.info.yearRelease;
    return age;
}

void ComprasionByMilage(Car car1, Car car2)
{
    float difference = car1.param.mileage - car2.param.mileage;
    if (difference < 0) {
        printf("Пробег первого авто < пробег вторго авто");
    }
    else if (difference > 0) {
        printf("Пробег первого авто > пробег вторго авто");
    }
    else {
        printf("Пробег первого авто = пробег вторго авто");
    }
}



