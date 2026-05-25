#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    printf("value: %d\n", *p);
    printf("address: %p\n", (void*)p);
    return 0;
}