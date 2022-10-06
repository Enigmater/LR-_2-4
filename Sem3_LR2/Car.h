#pragma once
#include <string>
#include "InfoAbout.h"
#include "Size.h"
#include "Parameters.h"
#include "TypeCar.h"

using namespace std;

const int THIS_YEAR = 2022;

/*
��������� ������:
    ��������� ���������� � ������:
        ������,
        ����
    ��������� �������:
        �����,
        ������,
        ������
    ��������� ��������������:
        �������� ���������,
        ����� ����,
        ������������ ��������
        ������
    ��������� ��� ������:
        �����,
        ���-�� ����
*/

struct Car {
    struct InfoAbout info;
    struct Size size;
    struct Parameters param;
    struct TypeCar type;
};

Car CarInit();
void CarInputCP(struct Car car[], int countCars = 1);
void CarOutputCP(struct Car car[], int countCars = 1);

int CarAge(struct Car car);
void PrintCarAge(struct Car car[], int countCars = 1);
void ComprasionByMilage(struct Car car1, struct Car car2);

