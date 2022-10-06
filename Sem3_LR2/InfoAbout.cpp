#include "InfoAbout.h"

InfoAbout InfoInit(string model, string color, int yearRelease) {
    struct InfoAbout info;
    info.model = model;
    info.color = color;
    info.yearRelease = yearRelease;
    return info;
}