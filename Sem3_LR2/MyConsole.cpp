#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>

#include "Car.h";
#include "malloc.h"

const int COUNT_CARS_DINAMIC = 10;

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Car* car = new class Car[COUNT_CARS_DINAMIC];

    //cout << "\tВвод данных" << endl;
    //for (int i = 0; i < COUNT_CARS_DINAMIC; i++)
    //{
    //    car[i].Read();
    //}

    cout << "\n\tВывод данных" << endl;
    int age = 0;
    
    car->setCountCars(2);
    for (int i = 0; i < car->getCountCars(); i++)
    {
        car[i].Print();
        car[i].Age(&age);
        cout << "\nВозраст машины (ссылка): " << age;
        car[i].Age(age);
        cout << "\nВозраст машины (адресс): " << age << endl;
    }

    /*---Сравнение по пробегу---*/
    Car* car1 = new Car;
    Car* car2 = new Car;
    car1->setMileage(10000.0f);
    car2->setMileage(12000.0f);
    ComprasionByMilage(*car1, *car2);

    /*---Сложение объектов, инкремент(пост/преф-иксный)---*/
    Car car3, car4;
    Car car5 = car3 + car4;
    cout << endl;
    car5.Print();
    car5++;
    cout << endl;
    car5.Print();
    ++car5;
    cout << endl;
    car5.Print();

    delete car1, car2;
    delete[] car;
}
