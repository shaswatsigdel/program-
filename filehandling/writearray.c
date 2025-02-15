#include <stdio.h>

int main() {
    FILE *f;
    int a[5] = {1, 2, 3, 4, 5};

    f = fopen("data.txt", "w");
    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fprintf(f, "%d\n", a[i]);
    }

    fclose(f);
    return 0;
}
