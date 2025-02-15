#include <stdio.h>

int main() {
    FILE *f;
    int a[5], i;

    f = fopen("data.txt", "r");
    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        fscanf(f, "%d", &a[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    fclose(f);
    return 0;
}
