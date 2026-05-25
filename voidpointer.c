#include <stdio.h>

int main() {
    int x = 10;
    float f = 3.14;
    
    void *vp;
    
    vp = &x;
    printf("int: %d\n", *(int*)vp);
    
    vp = &f;
    printf("float: %.2f\n", *(float*)vp);
    
    return 0;
}