#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>

#include "Car.h";
#include "InfoAbout.h"
#include "Condition.h"
#include "AbstractClass.h"
#include "Template.h"

const int COUNT_CARS_DINAMIC = 1;

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    InfoAbout info;
    Condition cond;
  /*  Car* car = new Car[COUNT_CARS_DINAMIC];*/

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
    inf->setModel("VirtualCar");
    cout << inf->getModel() << endl;
    cout << endl;

    // abstract

    Driver man;
    Machine machine;
    Motocycle motocycle;
    Transport* transport = &machine;
    man.PrintTransport(transport);
    transport = &motocycle;
    man.PrintTransport(transport);
    cout << endl;

    // template

    Info<Machine> skoda("Skoda Octavia");
    skoda.Print();
    Info<Motocycle> racer("Racer Alpha");
    racer.Print();
    cout << endl;

   /* delete[] car;*/
}
