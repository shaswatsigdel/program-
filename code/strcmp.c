#include <stdio.h>
#include <string.h>

int cmp(char a[], char b[]) {
    return stricmp(a, b);
}

int main() {
    char a[] = "hello", b[] = "HELLO";
    printf("%d", cmp(a, b));
    return 0;
}
