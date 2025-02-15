#include <stdio.h>

int main() {
    FILE *f;
    int a;

    f = fopen("data1.txt", "r");
    if (f == NULL) {
        printf("Error opening file");
        return 1;
    }

    fscanf(f, "%d", &a);
    printf("%d", a);

    fclose(f);
    return 0;
}
