#include "InfoAbout.h"

InfoAbout InfoInit(std::string model, std::string color, int yearRelease) {
    struct InfoAbout info {model, color, yearRelease};
    return info;
}