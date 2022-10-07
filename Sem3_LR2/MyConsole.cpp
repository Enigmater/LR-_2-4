#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>

#include "Car.h";
#include "malloc.h"

const int COUNT_CARS_DINAMIC = 2;

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Car* car = new class Car[COUNT_CARS_DINAMIC];

    cout << "\tВвод данных" << endl;
    for (int i = 0; i < COUNT_CARS_DINAMIC; i++)
    {
        car[i].Read();
    }

    cout << "\n\tВывод данных" << endl;
    for (int i = 0; i < COUNT_CARS_DINAMIC; i++)
    {
        car[i].Print();
        cout << "\nВозраст машины: " << car[i].Age() << endl;
    }

    Car* car1 = new Car;
    Car* car2 = new Car;
    car1->setMileage(10000.0f);
    car2->setMileage(12000.0f);
    car1->ComprasionByMilage(*car2);

    delete car1, car2;
    delete[] car;
}
