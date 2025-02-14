#include <stdio.h>
#include <string.h>

void low(char a[]) {
    strlwr(a);
    printf("%s", a);
}

int main() {
    char a[] = "HELLO";
    low(a);
    return 0;
}
