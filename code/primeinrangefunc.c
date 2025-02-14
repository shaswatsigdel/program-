#include <stdio.h>

int isPrime(int a) {
    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

void primeInRange(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int a = 10, b = 30;
    printf("Prime numbers between %d and %d are: ", a, b);
    primeInRange(a, b);
    return 0;
}
