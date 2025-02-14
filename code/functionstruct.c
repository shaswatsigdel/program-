#include <stdio.h>

struct employee {
    char name[50];
    int id;
    float salary;
};

void print(struct employee *p) {
    printf("name: %s\n", p->name);
    printf("id: %d\n", p->id);
    printf("salary: %.2f\n", p->salary);
}

int main() {
    struct employee e;

    printf("enter name: ");
    scanf("%s", e.name);
    printf("enter id: ");
    scanf("%d", &e.id);
    printf("enter salary: ");
    scanf("%f", &e.salary);

    print(&e);

    return 0;
}