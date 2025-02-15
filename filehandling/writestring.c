#include <stdio.h>

int main() {
    FILE *f;
    char a[100];

    f = fopen("data2.txt", "w");
    if (f == NULL) {
        printf("Error opening file");
        return 1;
    }

    scanf("%s", a);
    fprintf(f, "%s\n", a);

    fclose(f);
    return 0;
}
