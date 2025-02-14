#include <stdio.h>
#include <string.h>

void up(char a[]) {
    strupr(a);
    printf("%s", a);
}

int main() {
    char a[] = "hello";
    up(a);
    return 0;
}
