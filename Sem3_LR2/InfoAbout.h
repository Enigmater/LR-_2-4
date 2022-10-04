#pragma once
#include <string>

struct InfoAbout {
    std::string model;
    std::string color;
    int yearRelease;
};

InfoAbout InfoInit(std::string model = "Модель машины", std::string color = "Цвет машины", int yearRealease = 2000);