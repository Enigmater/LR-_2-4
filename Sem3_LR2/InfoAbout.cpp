#include "InfoAbout.h"

InfoAbout InfoInit(string model, string color, int yearRelease) {
    struct InfoAbout info{model, color, yearRelease};
    return info;
}