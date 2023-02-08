#include <stdio.h>
#include <stdlib.h>

#include "math/vec3.hpp"

using Math::Vec3;

int main(int argc, char** argv) {
    printf("Hello world!\n");

    Vec3<float> vec = Vec3<float>(0.1f, 0.2f, 0.5f);

    printf("Vec3[%f,%f,%f]\n", vec.x, vec.y, vec.z);

    return 0;
}