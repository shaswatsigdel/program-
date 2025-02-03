#include <stdio.h>

int main() {
    int a;
    printf("enter the value of n: ");
    scanf("%d", &a);

    int b = 0;
    int c = 1;
    while (c <= a) {
        if (c % 2 == 0) {
            b =b- c;
        } else {
            b =b+ c;
        }
        c++;
    }

    printf("sum of the series: %d", b);

// Given the series 1 -2+3-4+5-6+7-8 … N terms, and we have to find the sum of all values using C program.

    return 0;
}

