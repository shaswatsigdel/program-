#include <stdio.h>

int sumd(int *a) {
    int b = 0, c = *a;
    while (c > 0) {
        b += c % 10;
        c /= 10;
    }
    return b;
}

int main() {
    int a = 123;
    printf("%d", sumd(&a));
    return 0;
}
