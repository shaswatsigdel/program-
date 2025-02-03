#include <stdio.h>

int main() {
    int a;
    printf("enter the value of n: ");
    scanf("%d", &a);

    float b = 0;
    float c = 1;
    while (c <= a) {
        b =b+ (c * (c + 1)) / (c + 2);
        c++;
    }

    printf("sum of the series: %f\n", b);

//  sum of series 1.2/3 + 2.3/4 +3.4/5 + 4.5/6 + ... + n(n +1)/(n+2) 
    return 0;
}