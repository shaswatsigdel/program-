#include <stdio.h>
// sum 
int main() {
    int a, b, c, d = 0, e = 0;
    scanf("%d", &a);
    for (b = 2; e < a; b++) {
        for (c = 2; c <= b / 2; c++) {
            if (b % c == 0) break;
        }
        if (c > b / 2) {
            e++;
            d += b;
        }
    }
    printf("%d", d);
    return 0;
}
