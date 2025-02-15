#include <stdio.h>

int main() {
    char name[100];
    char maritalStatus;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter marital status (M for Married, S for Single): ");
    scanf(" %c", &maritalStatus);

    if (maritalStatus == 'M' || maritalStatus == 'm') {
        printf("Mrs. %s\n", name);
    } else if (maritalStatus == 'S' || maritalStatus == 's') {
        printf("Miss. %s\n", name);
    } else {
        printf("Invalid marital status.\n");
    }

    return 0;
}
