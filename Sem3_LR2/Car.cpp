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
        printf("Модель: ");
        scanf("%s", &carInit.info.model);
        printf("Цвет: ");
        scanf("%s", &carInit.info.color);

        printf("Размеры(длина): ");
        scanf("%f", &carInit.size.lenght);
        printf("Размеры(ширина): ");
        scanf("%f", &carInit.size.width);
        printf("Размеры(высота): ");
        scanf("%f", &carInit.size.high);

        printf("Параметры(Мощность): ");
        scanf("%f", &carInit.param.enginePower);
        printf("Параметры(Объем бака): ");
        scanf("%f", &carInit.param.tankCapacity);
        printf("Параметры(Максимальная скорость): ");
        scanf("%f", &carInit.param.maxSpeed);
        printf("Параметры(Пробег): ");
        scanf("%f", &carInit.param.mileage);

        printf("Тип(Кузов): ");
        scanf("%s", &carInit.type.typeBody);
        printf("Тип(Кол-во мест): ");
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




