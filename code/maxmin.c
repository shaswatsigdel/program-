#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int a = 5, b = 8;
    printf("Max: %d", max(a, b));
    printf("Min: %d", min(a, b));
    return 0;
}
