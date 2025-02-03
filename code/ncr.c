#include <stdio.h>

int factorial(int n) {
    int fact = 1,i;
    for ( i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r,ncr;

    printf("enter the value of n and r ");
    scanf("%d %d", &n, &r);

    if (r > n) {
        printf("invalid input");
        return 1;
    }

     ncr = factorial(n) / (factorial(r) * factorial(n - r));

    printf("ncr: %d", ncr);

    return 0;
}