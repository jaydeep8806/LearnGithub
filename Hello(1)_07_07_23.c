#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = { 7 , 9.8, "Jaydeep"};
    printf("student roll = %d\n", s1.roll);

    struct student *ptr = &s1;
    printf("student roll = %d \n", (*ptr).roll);

    return 0;
}