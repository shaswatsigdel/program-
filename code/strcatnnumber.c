#include <stdio.h>
#include <string.h>

void join(char a[], char b[], int c) {
    strncat(a, b, c);
    printf("%s", a);
}

int main() {
    char a[20] = "hi ", b[] = "world";
    join(a, b, 3);
    return 0;
}
