#define _CRT_SECURE_NO_WARNINGS
#define DEBUG true;

#include "Car.h"
#include <iostream>

Car CarInit()
{
    Car car{ InfoInit() , SizeInit() , ParamInit() , TypeCarInit() };
    return car;
}

void CarInputCP(Car car[], int countCars)
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
        printf("\tCar %d\n", i + 1);
        printf("������: ");
        scanf("%s", &car[i].info.model);
        printf("����: ");
        scanf("%s", &car[i].info.color);

        printf("�������(�����): ");
        scanf("%f", &car[i].size.lenght);
        printf("�������(������): ");
        scanf("%f", &car[i].size.width);
        printf("�������(������): ");
        scanf("%f", &car[i].size.high);

        printf("���������(��������): ");
        scanf("%f", &car[i].param.enginePower);
        printf("���������(����� ����): ");
        scanf("%f", &car[i].param.tankCapacity);
        printf("���������(������������ ��������): ");
        scanf("%f", &car[i].param.maxSpeed);
        printf("���������(������): ");
        scanf("%f", &car[i].param.mileage);

        printf("���(�����): ");
        scanf("%s", &car[i].type.typeBody);
        printf("���(���-�� ����): ");
        scanf("%d", &car[i].type.numberSeats);
    }
#endif // DEBUG
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




