#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char a;

    f1 = fopen("data1.txt", "r");
    if (f1 == NULL) {
        printf("Error opening file");
        return 1;
    }

    f2 = fopen("copy.txt", "w");
    if (f2 == NULL) {
        printf("Error opening file");
        fclose(f1);
        return 1;
    }

    while ((a = fgetc(f1)) != EOF) {
        fputc(a, f2);
    }

    fclose(f1);
    fclose(f2);
    return 0;
}
