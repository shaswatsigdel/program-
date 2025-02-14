#include <stdio.h>
#include <string.h>

void join(char a[], char b[]) {
    strcat(a, b);
    printf("%s", a);
}

int main() {
    char a[20] = "hi ", b[] = "world";
    join(a, b);
    return 0;
}
