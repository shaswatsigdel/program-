#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the side length of the pentagon: ");
    scanf("%f", &side);

    area = 1.72 * side * side;  
    printf("The area of the pentagon is: %f", area);

    return 0;
}
