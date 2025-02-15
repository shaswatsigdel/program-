#include <stdio.h>

int main() {
    FILE *f;
    char a;
    int b = 0;

    f = fopen("data.txt", "r");
    if (f == NULL) {
        printf("Error opening file.");
        return 1;
    }

    while ((a = fgetc(f)) != EOF) {
        if (a == '\n') {
            b++;
        }
    }

    printf("Number of lines: %d", b);
    fclose(f);
    return 0;
}
