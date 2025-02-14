#include <stdio.h>
#include <string.h>

void rev(char a[]) {
    strrev(a);
    printf("%s", a);
}

int main() {
    char a[] = "hello";
    rev(a);
    return 0;
}
