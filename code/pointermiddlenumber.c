#include <stdio.h>

int mid(int *a, int *b, int *c) {
    if ((*a > *b && *a < *c) || (*a > *c && *a < *b)) return *a;
    if ((*b > *a && *b < *c) || (*b > *c && *b < *a)) return *b;
    return *c;
}

int main() {
    int a = 10, b = 5, c = 8;
    printf("%d", mid(&a, &b, &c));
    return 0;
}
