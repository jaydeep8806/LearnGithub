#include<stdio.h>

int main () {
    int sum = 0;
    printf("enter number : ");

    for(int i=5; i<=50; i++){
        sum += i;
    }

    printf("sum is %d", sum);

    return 0;
}