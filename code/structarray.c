#include <stdio.h>

struct student {
    char name[50];
    int marks[5];
};

int main() {
    struct student s;

    printf("enter name: ");
    scanf("%s", s.name);

    for (int i = 0; i < 5; i++) {
        printf("enter mark %d: ", i + 1);
        scanf("%d", &s.marks[i]);
    }

    printf("name: %s", s.name);
    for (int i = 0; i < 5; i++) {
        printf("mark %d: %d", i + 1, s.marks[i]);
    }

    return 0;
}