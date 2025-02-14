#include <stdio.h>

int main() {
    char a[100], b[100];
    int c = 0;

    scanf("%s", a);

    while (a[c] != '\0') {
        b[c] = a[c];
        c++;
    }
    b[c] = '\0';

    printf("%s\n", b);
    printf("%d\n", c);

    return 0;
}
