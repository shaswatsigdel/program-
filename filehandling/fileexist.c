#include <stdio.h>

int main() {
    FILE *f;

    f = fopen("data.txt", "r");
    if (f != NULL) {
        printf("File exists");
        fclose(f);
    } else {
        printf("File does not exist");
    }

    return 0;
}
