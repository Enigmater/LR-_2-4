#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>

#define DEBUG true;

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
struct Car{
    struct InfoAbout {
        string model;
        string color;
    } info;
    struct Size {
        int lenght, width, high;
    } size;
    struct Parameters {
        string transmission;
        int enginePower, tankCapacity, maxSpeed;     
    } param;
    struct TypeCar {
        string typeBody;
        int numberSeats;
    } type;
};

void Read(struct Car car[MAX_SIZE], int countCars = 1) {
#ifdef DEBUG
    cout << "Debug Mode" << endl;
    for (int i = 0; i < countCars; i++)
    {
        car[i].info.model = "Машина";
        car[i].info.color = "Красный";
        car[i].size.lenght = 100;
        car[i].size.width = 100;
        car[i].size.high = 100;
        car[i].param.transmission = "Механика";
        car[i].param.enginePower = 150;
        car[i].param.tankCapacity = 50;
        car[i].param.maxSpeed = 200;
        car[i].type.typeBody = "Седан";
        car[i].type.numberSeats = 5;
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

void Print(struct Car car[MAX_SIZE], int countCars = 1) {
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

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct Car vaz;
    cout << "\tVvod" << endl;
    Read(&vaz);
    cout << "\tVivod" << endl;
    Print(&vaz);
}
