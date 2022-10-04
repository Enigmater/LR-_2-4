#pragma once
#include <string>

struct Size {
    float lenght, width, high;
};

Size SizeInit(float lenght = 2, float width = 1.5, float high = 1);