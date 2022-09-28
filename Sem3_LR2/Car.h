#pragma once
#include <string>
#include "InfoAbout.h"
#include "Size.h"
#include "Parameters.h"
#include "TypeCar.h"

using namespace std;

const int MAX_SIZE = 100;

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
        ������� �������,
        �������� ���������,
        ����� ����,
        ������������ ��������
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
void CarInputCP(struct Car car[MAX_SIZE], int countCars = 1);
void CarOutputCP(struct Car car[MAX_SIZE], int countCars = 1);