#include <stdio.h>

int main() {
    FILE *f;
    int a, b;

    f = fopen("data1.txt", "w");
    if (f == NULL) {
        printf("Error opening file");
        return 1;
    }

    scanf("%d", &b);
    for (a = 0; a < b; a++) {
        int n;
        scanf("%d", &n);
        fprintf(f, "%d\n", n);
    }

    fclose(f);
    return 0;
}
