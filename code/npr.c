#include <stdio.h>

int factorial(int n) {
    int fact = 1,i;
    for ( i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r,npr;

    printf("enter the value of n and r: ");
    scanf("%d %d", &n, &r);

    if (r > n) {
        printf("invalid input");
        return 1;
    }

 npr = factorial(n) / factorial(n - r);

    printf("npr %d", npr);

    return 0;
}