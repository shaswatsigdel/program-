#include <stdio.h>

void printDetails(int a, float b, char c) {
    printf("Integer: %d, Float: %.2f, Char: %c\n", a, b, c);
}

int main() {
    int a = 5;
    float b = 3.14;
    char c = 'A';
    printDetails(a, b, c);
    return 0;
}
