#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>

#include "Car.h";
#include "malloc.h"

const int COUNT_CARS_STATIC = 2;
const int COUNT_CARS_DINAMIC = 2;

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("\tStatic\n");
    struct Car staticMemory[COUNT_CARS_STATIC];
    printf("\tВвод");
    printf("\n___________________________________________\n");
    CarInputCP(staticMemory, COUNT_CARS_STATIC);
    printf("\tВывод\n");
    CarOutputCP(staticMemory, COUNT_CARS_STATIC);
    PrintCarAge(staticMemory, COUNT_CARS_STATIC);
    printf("\n___________________________________________\n");

    struct Car staticMemory1;
    struct Car staticMemory2;
    CarInputCP(&staticMemory1);
    CarInputCP(&staticMemory2);

    ComprasionByMilage(staticMemory1, staticMemory2);

    printf("\n___________________________________________\n");
    printf("\tDinamic\n\n");
    struct Car* dinamicMemory = (Car*)calloc(COUNT_CARS_DINAMIC, sizeof(Car));
    printf("\tВвод\n");
    CarInputCP(dinamicMemory, COUNT_CARS_DINAMIC);
    printf("\tВывод\n");
    CarOutputCP(dinamicMemory, COUNT_CARS_DINAMIC);

}
