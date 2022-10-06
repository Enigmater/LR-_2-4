#define _CRT_SECURE_NO_WARNINGS
#define DEBUG true;

#include "Car.h"
#include <iostream>

Car CarInit(Car CarInit)
{
    Car car{    
        InfoInit(CarInit.info.model, CarInit.info.color, CarInit.info.yearRelease),      
        SizeInit(CarInit.size.lenght, CarInit.size.width, CarInit.size.high),
        ParamInit(CarInit.param.enginePower, CarInit.param.tankCapacity, CarInit.param.maxSpeed, CarInit.param.mileage), 
        TypeCarInit(CarInit.type.typeBody, CarInit.type.numberSeats)
    };
    return car;
}

void CarInputCP(Car car[], int countCars)
{
    Car carInit;
    cout << "Initiaization Mode" << endl;
    carInit.info.model = "Car";
    carInit.info.color = "Color";
    carInit.info.yearRelease = 2000;
    carInit.size.lenght = 2.0f;
    carInit.size.width = 1.0f;
    carInit.size.high = 1.0f;
    carInit.param.enginePower = 150.0f;
    carInit.param.tankCapacity = 50.0f;
    carInit.param.maxSpeed = 200.0f;
    carInit.param.mileage = 10000.0f;
    carInit.type.typeBody = "Sedan";
    carInit.type.numberSeats = 5;
    for (int i = 0; i < countCars; i++)
    {
#ifndef DEBUG
        printf("\tCar %d\n", i + 1);
        printf("������: ");
        scanf("%s", &carInit.info.model);
        printf("����: ");
        scanf("%s", &carInit.info.color);

        printf("�������(�����): ");
        scanf("%f", &carInit.size.lenght);
        printf("�������(������): ");
        scanf("%f", &carInit.size.width);
        printf("�������(������): ");
        scanf("%f", &carInit.size.high);

        printf("���������(��������): ");
        scanf("%f", &carInit.param.enginePower);
        printf("���������(����� ����): ");
        scanf("%f", &carInit.param.tankCapacity);
        printf("���������(������������ ��������): ");
        scanf("%f", &carInit.param.maxSpeed);
        printf("���������(������): ");
        scanf("%f", &carInit.param.mileage);

        printf("���(�����): ");
        scanf("%s", &carInit.type.typeBody);
        printf("���(���-�� ����): ");
        scanf("%d", &carInit.type.numberSeats);
#endif // DEBUG
        car[i] = CarInit(carInit);
    }
}

void CarOutputCP(Car car[], int countCars)
{
    for (int i = 0; i < countCars; i++)
    {
        printf("\tCar %d\n", i + 1);
        printf("������: %s\n", car[i].info.model);
        printf("����: %s\n", car[i].info.color);
        printf("���� �������: %d\n", car[i].info.yearRelease);

        printf("�������(�����): %f\n", car[i].size.lenght);
        printf("�������(������): %f\n", car[i].size.width);
        printf("�������(������): %f\n", car[i].size.high);

        printf("���������(��������): %f\n", car[i].param.enginePower);
        printf("���������(����� ����): %f\n", car[i].param.tankCapacity);
        printf("���������(������������ ��������): %f\n", car[i].param.maxSpeed);
        printf("���������(������): %f\n", car[i].param.mileage);

        printf("���(�����): %s\n", car[i].type.typeBody);
        printf("���(���-�� ����): %d\n", car[i].type.numberSeats);
    }
}

int CarAge(Car car)
{
    int age = THIS_YEAR - car.info.yearRelease;
    return age;
}

void PrintCarAge(struct Car car[], int countCars)
{
    printf("\n\t������� ������\n");
    for (int i = 0; i < countCars; i++) {
        printf("Age Car#%d = %d\n", i + 1, CarAge(car[i]));
    } 
}

void ComprasionByMilage(Car car1, Car car2)
{
    printf("\n\t��������� ����� �� �������\n");
    float difference = car1.param.mileage - car2.param.mileage;
    if (difference < 0) {
        printf("������ ������� ���� < ������ ������ ����\n");
    }
    else if (difference > 0) {
        printf("������ ������� ���� > ������ ������ ����\n");
    }
    else {
        printf("������ ������� ���� = ������ ������ ����\n");
    }
}




