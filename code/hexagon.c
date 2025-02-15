#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the side length of the hexagon: ");
    scanf("%f", &side);

    area = 2.598 * side * side; 
    printf("The area of the hexagon is: %.2f", area);

    return 0;
}
