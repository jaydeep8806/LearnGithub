#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (float *) calloc(5 * sizeof(float));

    printf("enter number(5) : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &ptr[i]);

    }

    for(int i=0; i<8; i++) {
        printf("number %d is %d \n", i ,ptr[i]);

        return 0;
    }