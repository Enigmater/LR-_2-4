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
        cout << "������: ";
        cin >> car[i].info.model;
        cout << "����: ";
        cin >> car[i].info.color;

        cout << "�������(�����): ";
        cin >> car[i].size.lenght;
        cout << "�������(������): ";
        cin >> car[i].size.width;
        cout << "�������(������): ";
        cin >> car[i].size.high;

        cout << "���������(������� �������): ";
        cin >> car[i].param.transmission;
        cout << "���������(��������): ";
        cin >> car[i].param.enginePower;
        cout << "���������(����� ����): ";
        cin >> car[i].param.tankCapacity;
        cout << "���������(������������ ��������): ";
        cin >> car[i].param.maxSpeed;

        cout << "���(�����): ";
        cin >> car[i].type.typeBody;
        cout << "���(���-�� ����): ";
        cin >> car[i].type.numberSeats;
    }
#endif // DEBUG
}

void CarOutputCP(Car car[MAX_SIZE], int countCars)
{
    for (int i = 0; i < countCars; i++)
    {
        cout << "������: " << car[i].info.model << endl;
        cout << "����: " << car[i].info.color << endl;

        cout << "�������(�����): " << car[i].size.lenght << endl;
        cout << "�������(������): " << car[i].size.width << endl;
        cout << "�������(������): " << car[i].size.high << endl;

        cout << "���������(������� �������): " << car[i].param.transmission << endl;
        cout << "���������(��������): " << car[i].param.enginePower << endl;
        cout << "���������(����� ����): " << car[i].param.tankCapacity << endl;
        cout << "���������(������������ ��������):" << car[i].param.maxSpeed << endl;

        cout << "���(�����): " << car[i].type.typeBody << endl;
        cout << "���(���-�� ����): " << car[i].type.numberSeats << endl;
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
        printf("������ ������� ���� < ������ ������ ����");
    }
    else if (difference > 0) {
        printf("������ ������� ���� > ������ ������ ����");
    }
    else {
        printf("������ ������� ���� = ������ ������ ����");
    }
}



