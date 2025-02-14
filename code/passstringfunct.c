#include <stdio.h>

void printStrings(char a[][20], int b) {
    for (int i = 0; i < b; i++) {
        printf("String %d: %s\n", i+1, a[i]);
    }
}

int main() {
    char a[3][20] = {"Hello", "World", "C"};
    int b = 3;
    printStrings(a, b);
    return 0;
}
