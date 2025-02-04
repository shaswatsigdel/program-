#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b ;
    b= sizeof(a) / sizeof(a[0]);

    printf("number of elements in the array %d", b);

    return 0;
}