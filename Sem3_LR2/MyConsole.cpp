#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>

#include "Car.h";
#include "InfoAbout.h"
#include "Condition.h"
#include "malloc.h"

const int COUNT_CARS_DINAMIC = 1;

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    InfoAbout info;
    Condition cond;
  /*  Car* car = new Car[COUNT_CARS_DINAMIC];*/

    //cout << "\tВвод данных" << endl;
    //for (int i = 0; i < COUNT_CARS_DINAMIC; i++)
    //{
    //    car[i].Read();
    //}

    /*cout << "Модель (базовый): " << info.getModel() << endl << endl;
    cout << "Модель (производный): " << cond.getModel() << endl << endl;
    car->Print();
    cout << endl;*/

    // Перегрузка <<
    cout << info;
    cout << endl;

    // Перегрузка =
    info.setModel("Car(info)");
    cout << "Before: " << cond.getModel() << endl;
    cond = info;
    cout << "After: " << cond.getModel()<< endl;
    cout << endl;
    
    // virtual
    InfoAbout* inf = new Condition();
    inf->setModel("Car model 1");
    cout << inf->getModel() << endl;
    cout << endl;

   /* delete[] car;*/
}
