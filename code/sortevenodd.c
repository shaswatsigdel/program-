#include <stdio.h>

int main() {
    int a[] = {4, 3, 2, 7, 8, 1, 6, 5}, b = 8, c, d, e;

    for (c = 0; c < b - 1; c++) {
        for (d = c + 1; d < b; d++) {
            if ((a[c] % 2 == a[d] % 2 && a[c] > a[d]) || (a[c] % 2 == 1 && a[d] % 2 == 0)) {
                e = a[c];
                a[c] = a[d];
                a[d] = e;
            }
        }
    }
    for (c = 0; c < b; c++) printf("%d ", a[c]);

    return 0;
}
