#include <stdio.h>

void printString(char a[]) {
    printf("String: %s\n", a);
}

int main() {
    char a[] = "Hello";
    printString(a);
    return 0;
}
