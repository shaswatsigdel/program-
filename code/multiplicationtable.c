#include <stdio.h>

int main() {
    int a;

    printf("enter an integer: ");
    scanf("%d", &a);

    printf("multiplication table of %d:\n", a);

    int b = 1;
    while (b <= 10) {
        printf("%d x %d = %d\n", a, b, a * b);
        b++;
    }

    return 0;
}