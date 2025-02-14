#include <stdio.h>

int sum(int a[], int b) {
    int c = 0;
    for (int i = 0; i < b; i++) {
        c += a[i];
    }
    return c;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b = 5;
    printf("Sum: %d\n", sum(a, b));
    return 0;
}
