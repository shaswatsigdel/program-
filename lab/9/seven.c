#include <stdio.h>

typedef struct {
    int a;
    char b[50], c[50];
    int d;
    float e;
} student;

void show(student a[], int b) {
    int c;
    for (c = 0; c < b; c++) {
        printf("%d %s %s %d %f", a[c].a, a[c].b, a[c].c, a[c].d, a[c].e);
    }
}

int main() {
    student a[12];
    int b;
    
    for (b = 0; b < 12; b++) {
        scanf("%d %s %s %d %f", &a[b].a, a[b].b, a[b].c, &a[b].d, &a[b].e);
    }
    
    show(a, 12);
    
    return 0;
}
