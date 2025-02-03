#include <stdio.h>

int main() {
    int a, b, c;

    printf("enter the number of days: ");
    scanf("%d", &a);

    b = a / 365;
    c = (a % 365) / 7;
    a = (a % 365) % 7;

    printf("year %d", b);
    printf("weeks %d", c);
    printf("days %d", a);

    return 0;
}