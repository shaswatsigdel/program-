#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
bool prime (int a){

if (a <= 1) {
        return false;
    }
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int b = sizeof(a) / sizeof(a[0]);

    printf("Prime numbers in the array:\n");

    int i = 0;
    while (i < b) {
        if (prime(a[i])) {
            printf("%d ", a[i]);
        }
        i++;
    }
    printf("\n");

    return 0;
}
