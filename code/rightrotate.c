#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5}, b = 5, c, e;

    e = a[b - 1];
    for (c = b - 1; c > 0; c--) a[c] = a[c - 1];
    a[0] = e;

    for (c = 0; c < b; c++) printf("%d ", a[c]);

    return 0;
}
