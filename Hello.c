#include <stdio.h>

int main() {
    int age;

    printf("Enter a age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("adult \n");

    } else if (age > 13 && < 18) {
        printf("teenager \n");
    } else {
        printf("child\n");
    }
    return 0;
}
