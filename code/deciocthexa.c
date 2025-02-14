#include <stdio.h>

int main() {
    int a;

    printf("enter an integer: ");
    scanf("%d", &a);

    printf("decimal: %d", a);
    printf("octal: %o", a);
    printf("hexadecimal: %x", a);

    return 0;
}