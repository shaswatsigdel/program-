#include <stdio.h>

int main() {
    char a = 'a';

    while (a <= 'z') {
        char b = a - 32;
        printf("%c ", b);
        a++;
    }
    printf("\n");

    return 0;
}