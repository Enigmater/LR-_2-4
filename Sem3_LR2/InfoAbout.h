#pragma once
#include <string>
using namespace std;

struct InfoAbout {
    string model;
    string color;
    int yearRelease;
};

InfoAbout InfoInit(string model = "Car", string color = "Color", int yearRealease = 2000);