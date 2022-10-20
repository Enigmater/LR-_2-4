#pragma once
#include <string>
#include "InfoAbout.h"
#include "Size.h"
#include "Parameters.h"
#include "TypeCar.h"

using namespace std;

const int THIS_YEAR = 2022;

/*
����� ������:
    ����� ���������� � ������:
        ������,
        ����
    ����� �������:
        �����,
        ������,
        ������
    ����� ��������������:
        �������� ���������,
        ����� ����,
        ������������ ��������
        ������
    ����� ��� ������:
        �����,
        ���-�� ����
*/

class Car
{
    friend void ComprasionByMilage(Car&, Car car);
private:
    static int countCars;
    InfoAbout info;
    Size size;
    Parameters param;
    TypeCar type;
public:
    Car();
    Car(int numberSeats);
    Car(InfoAbout info);
    Car(InfoAbout info, Size size, Parameters param, TypeCar type);
    ~Car();

    void setMileage(float mileage);

    static int getCountCars() {
        return countCars;
    }
    static void setCountCars(int newCountCars) {
        countCars = newCountCars;
    }

    void Read();
    void Print();
    void Age(int* age);
    void Age(int& age);

    Car operator + (Car car) {
        return Car(this->type.getNumberSeats() + car.type.getNumberSeats());
    };
    Car& operator ++ () {
        this->param.setMaxSpeed(this->param.getMaxSpeed() + 10);
        return *this;
    };
    Car operator ++ (int) {
        Car post = *this;
        ++* this;
        return post;
    };
};


