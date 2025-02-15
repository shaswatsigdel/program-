#include <stdio.h>

typedef struct {
    int a, b;
} data;

data add(data a) {
    data c;
    c.a = a.a + a.b;
    return c;
}

int main() {
    data a, c;
    a.a = 5;
    a.b = 10;
    
    c = add(a);
    
    printf("%d", c.a);
    
    return 0;
}
