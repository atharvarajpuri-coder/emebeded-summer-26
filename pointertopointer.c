#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;
    int **pp = &p;
    
    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);
    printf("p = %p\n", (void*)p);
    printf("*pp = %p\n", (void*)*pp);
    return 0;
}