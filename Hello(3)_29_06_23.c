#include<stdio.h>

int main() {
    int age = 17;
    int *ptr = &age;

    //
   // printf("%p\n", &age);
    printf("%d\n", age);

    printf("%d\n", *ptr);

    printf("%d\n", *(&age));

    return 0;
}