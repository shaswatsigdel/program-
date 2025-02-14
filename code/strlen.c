#include <stdio.h>
#include <string.h>

int len(char a[]) {
    return strlen(a);
}

int main() {
    char a[] = "hello";
    printf("%d", len(a));
    return 0;
}
