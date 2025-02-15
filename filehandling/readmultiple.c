#include <stdio.h>

int main() {
    FILE *f;
    int a, b;

    f = fopen("data1.txt", "r");
    if (f == NULL) {
        printf("Error opening file");
        return 1;
    }

    while (fscanf(f, "%d", &a) != EOF) {
        printf("%d ", a);
    }

    fclose(f);
    return 0;
}
