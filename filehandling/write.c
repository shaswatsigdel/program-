#include <stdio.h>

int main() {
    FILE *f;
    int a;

    f = fopen("data1.txt", "w");
    if (f == NULL) {
        printf("Error opening file");
        return 1;
    }

    scanf("%d", &a);
    fprintf(f, "%d\n", a);

    fclose(f);
    return 0;
}
