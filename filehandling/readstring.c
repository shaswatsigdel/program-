#include <stdio.h>

int main() {
    FILE *f;
    char a[100];

    f = fopen("data2.txt", "r");
    if (f == NULL) {
        printf("Error opening file");
        return 1;
    }

    fscanf(f, "%s", a);
    printf("%s", a);

    fclose(f);
    return 0;
}
