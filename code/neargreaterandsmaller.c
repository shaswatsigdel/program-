#include <stdio.h>


int main() {
    int a[] = {9, 5,11, 4, 7};
    int b = sizeof(a) / sizeof(a[0]);
    int c = 10;

    int d=0;
    int e=10000; 
    int i = 0;
    while (i < b) {
        if (a[i] < c && a[i] > d) {
            d = a[i];
        }
        if (a[i] > c && a[i] < e) {
            e = a[i];
        }
        i++;
    }

    printf("nearest lesser element: %d", d);
    printf("nearest greater element: %d", e);

    return 0;
}