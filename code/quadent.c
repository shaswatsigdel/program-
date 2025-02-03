#include <stdio.h>

int main() {
    int a, b;
    printf("enter x and y: ");
    scanf("%d %d", &a, &b);

    if (a > 0 && b > 0)
        printf("First Quadrant");
    else if (a < 0 && b > 0)
        printf("Second Quadrant");
    else if (a < 0 && b < 0)
        printf("Third Quadrant");
    else if (a > 0 && b < 0)
        printf("Fourth Quadrant");
    else
        printf("Origin or on axis");

    return 0;
}