#include <stdio.h>

int main() {
    FILE *f;
    char a;

    f = fopen("data.txt", "r");
    if (f == NULL) {
        printf("Error opening file.");
        return 1;
    }

    while ((a = fgetc(f)) != EOF) {
        printf("%c", a);
    }

    if (feof(f)) {
        printf("Reached end of file.");
    }

    fclose(f);
    return 0;
}
