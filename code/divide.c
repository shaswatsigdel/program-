#include <stdio.h>

int main() {
    int a, b;
    float c;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = (float)a / b;
    printf("result is: %.2f", c);
    return 0;
}