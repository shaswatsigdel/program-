#include <stdio.h>

typedef struct {
    float a, b;
} complex;

complex add(complex a, complex b) {
    complex c;
    c.a = a.a + b.a;
    c.b = a.b + b.b;
    return c;
}

complex sub(complex a, complex b) {
    complex c;
    c.a = a.a - b.a;
    c.b = a.b - b.b;
    return c;
}

int main() {
    complex a, b, c;
    
    a.a = 3; a.b = 4;
    b.a = 1; b.b = 2;
    
    c = add(a, b);
    printf("%f %f", c.a, c.b);
    
    c = sub(a, b);
    printf("%f %f", c.a, c.b);
    
    return 0;
}
