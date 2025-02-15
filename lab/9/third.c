#include <stdio.h>
#include <math.h>

typedef struct {
    float a, b;
} point;

typedef struct {
    float c;
} result;

result dist(point a, point b) {
    result d;
    d.c = sqrt((b.a - a.a) * (b.a - a.a) + (b.b - a.b) * (b.b - a.b));
    return d;
}

int main() {
    point a, b;
    a.a = 2; a.b = 3;
    b.a = 5; b.b = 7;
    
    result c = dist(a, b);
    printf("%f", c.c);
    
    return 0;
}
