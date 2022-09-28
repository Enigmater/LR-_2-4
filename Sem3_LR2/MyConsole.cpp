#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>

#include "Car.h";

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct Car vaz;
    cout << "\tВвод" << endl;
    CarInputCP(&vaz);
    cout << "\tВывод" << endl;
    CarOutputCP(&vaz);
}
