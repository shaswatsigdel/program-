#include <stdio.h>

int main() {
    int a[3][3], b = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            if (i < j) b += a[i][j];
        }
    }
    printf("%d", b);
    return 0;
}
