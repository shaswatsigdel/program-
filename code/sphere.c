#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    printf("Enter radius: ");
    scanf("%f", &a);

    b = 4 * 3.14 * a * a; 
     c = (4.0 / 3) * 3.14 * a * a * a; 

    printf("Surface Area %f\n", b);
    printf("Volume: %f\n", c);

    return 0;
}