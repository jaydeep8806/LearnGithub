#include<stdio.h>

int main () {
    for(int i=1; i<=7; i++) {
        if ( i == 2) {
            break;
        }
        printf("%d \n", i);
    }
     
     printf("end");

     return 0;
}