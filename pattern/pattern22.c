#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    for (b = 0; b < a; b++) {
        for (c = 0; c < a; c++) printf("*");
        printf("\n");
    }
    return 0;
}
