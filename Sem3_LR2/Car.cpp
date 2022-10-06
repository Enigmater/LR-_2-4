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
        printf("Модель: ");
        scanf("%s", &car[i].info.model);
        printf("Цвет: ");
        scanf("%s", &car[i].info.color);

        printf("Размеры(длина): ");
        scanf("%f", &car[i].size.lenght);
        printf("Размеры(ширина): ");
        scanf("%f", &car[i].size.width);
        printf("Размеры(высота): ");
        scanf("%f", &car[i].size.high);

        printf("Параметры(Мощность): ");
        scanf("%f", &car[i].param.enginePower);
        printf("Параметры(Объем бака): ");
        scanf("%f", &car[i].param.tankCapacity);
        printf("Параметры(Максимальная скорость): ");
        scanf("%f", &car[i].param.maxSpeed);
        printf("Параметры(Пробег): ");
        scanf("%f", &car[i].param.mileage);

        printf("Тип(Кузов): ");
        scanf("%s", &car[i].type.typeBody);
        printf("Тип(Кол-во мест): ");
        scanf("%d", &car[i].type.numberSeats);
    }
#endif // DEBUG
}

void CarOutputCP(Car car[], int countCars)
{
    for (int i = 0; i < countCars; i++)
    {
        printf("\tCar %d\n", i + 1);
        printf("Модель: %s\n", car[i].info.model);
        printf("Цвет: %s\n", car[i].info.color);
        printf("Дата выпуска: %d\n", car[i].info.yearRelease);

        printf("Размеры(длина): %f\n", car[i].size.lenght);
        printf("Размеры(ширина): %f\n", car[i].size.width);
        printf("Размеры(высота): %f\n", car[i].size.high);

        printf("Параметры(Мощность): %f\n", car[i].param.enginePower);
        printf("Параметры(Объем бака): %f\n", car[i].param.tankCapacity);
        printf("Параметры(Максимальная скорость): %f\n", car[i].param.maxSpeed);
        printf("Параметры(пробег): %f\n", car[i].param.mileage);

        printf("Тип(Кузов): %s\n", car[i].type.typeBody);
        printf("Тип(Кол-во мест): %d\n", car[i].type.numberSeats);
    }
}

int CarAge(Car car)
{
    int age = THIS_YEAR - car.info.yearRelease;
    return age;
}

void PrintCarAge(struct Car car[], int countCars)
{
    printf("\n\tВозраст машины\n");
    for (int i = 0; i < countCars; i++) {
        printf("Age Car#%d = %d\n", i + 1, CarAge(car[i]));
    } 
}

void ComprasionByMilage(Car car1, Car car2)
{
    printf("\n\tСравнение машин по пробегу\n");
    float difference = car1.param.mileage - car2.param.mileage;
    if (difference < 0) {
        printf("Пробег первого авто < пробег вторго авто\n");
    }
    else if (difference > 0) {
        printf("Пробег первого авто > пробег вторго авто\n");
    }
    else {
        printf("Пробег первого авто = пробег вторго авто\n");
    }
}




