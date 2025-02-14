#include <stdio.h>

struct employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct employee e;

    printf("enter name ");
    scanf("%s", e.name);
    printf("enter id ");
    scanf("%d", &e.id);
    printf("enter salary ");
    scanf("%f", &e.salary);

    printf("name %s\n", e.name);
    printf("id %d\n", e.id);
    printf("salary %f\n", e.salary);

    return 0;
}