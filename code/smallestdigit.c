#include <stdio.h>

int main() {
    int num, digit, largest = 10;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        if (digit < largest) {
            largest = digit;
        }
        num /= 10;
    }

    printf("smallest digit: %d", largest);

    return 0;
}
