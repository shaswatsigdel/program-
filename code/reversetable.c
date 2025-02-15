#include <stdio.h>

int main() {
    int num;

    printf("Enter a number to display its reverse multiplication table: ");
    scanf("%d", &num);

    for (int i = 10; i >= 1; i--) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
