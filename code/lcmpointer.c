#include <stdio.h>

int lcm(int *a, int *b) {
    int c = (*a > *b) ? *a : *b;
    while (1) {
        if (c % *a == 0 && c % *b == 0) {
            return c;
        }
        c++;
    }
}

int main() {
    int a = 4, b = 6;
    printf("%d", lcm(&a, &b));
    return 0;
}
