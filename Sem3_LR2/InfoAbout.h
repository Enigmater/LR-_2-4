#pragma once
#include <string>

struct InfoAbout {
    std::string model;
    std::string color;
    int yearRelease;
};

InfoAbout InfoInit(std::string model = "������ ������", std::string color = "���� ������", int yearRealease = 2000);