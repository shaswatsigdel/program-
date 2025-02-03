#include <stdio.h>

int main() {
    int a;

    printf("enter the value of n: ");
    scanf("%d", &a);

    int b = 1;
    while (b <= a) {
        if (b % 2 != 0) {
            printf("%d ", b);
        }
        b++;
    }
    printf("\n");

    return 0;
}