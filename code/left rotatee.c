#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5}, b = 5, c, e;

    e = a[0];
    for (c = 0; c < b - 1; c++) a[c] = a[c + 1];
    a[b - 1] = e;

    for (c = 0; c < b; c++) printf("%d ", a[c]);

    return 0;
}
