#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>

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
struct Car{
    struct InfoAbout {
        std::string model;
        std::string color;
    };
    struct Size {
        int lenght, width, high;
    };
    struct Parameters {
        std::string transmission;
        int engiinePower, tankCapacity, maxSpeed;     
    };
    struct TypeCar {
        std::string typeBody;
        int numberSeats;
    };
};

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


}
