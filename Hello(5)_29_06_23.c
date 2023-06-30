#include<stdio.h>

int main() {

    int j     = 10;
    int *ptr  = &j;
    int **pptr = &ptr;

    printf("%d\n", **pptr);
    
    return 0;
}