#include <stdio.h>

int main() {
    int a = 1;

    while (a <= 20) {
        printf("multiplication table of %d:\n", a);
        int b = 1;
        while (b <= 10) {
            printf("%d x %d = %d\n", a, b, a * b);
            b++;
        }
        printf("\n");
        a++;
    }

    return 0;
}