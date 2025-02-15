#include <stdio.h>
#include <math.h>

int main() {
    int a;
    scanf("%d", &a);
    if (sqrt(a) == (int)sqrt(a)) printf("yes");
    else printf("no");
    return 0;
}
