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

    void Read();
    void Print();
    void Age(int* age);
    void Age(int& age);

    Car operator + (Car car) {
        return Car(this->type.getNumberSeats() + car.type.getNumberSeats());
    };
    Car& operator ++ () {
        this->type.setNumberSeats(this->type.getNumberSeats() + 1);
    };
    Car& operator ++ (int) {

    };
};


