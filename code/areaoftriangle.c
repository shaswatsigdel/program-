#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("enter the three sides of the triangle ");
    scanf("%f %f %f", &a, &b, &c);

    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("area of the triangle %f", area);

    return 0;
}