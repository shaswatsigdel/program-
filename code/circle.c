#include <stdio.h>
#define PI 3.14

float diameter(float a) {
    return 2 * a;
}

float circumference(float a) {
    return 2 * PI * a;
}

float area(float a) {
    return PI * a * a;
}

int main() {
    float a = 5;
    printf("diameter: %f", diameter(a));
    printf("circumference: %f", circumference(a));
    printf("area %f", area(a));
    return 0;
}
