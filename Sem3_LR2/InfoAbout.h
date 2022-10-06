#pragma once
#include <string>
using namespace std;

struct InfoAbout {
    string model;
    string color;
    int yearRelease;
};

InfoAbout InfoInit(string model, string color, int yearRealease = 2000);