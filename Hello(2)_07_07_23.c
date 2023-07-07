#include<stdio.h>
#include<string.h>

typedef struct computerengineeringstudents{
    int roll;
    float cgpa;
    char name[100];
}coe;

int main() {
    coe s1 = { 7 , 9.8, "Jaydeep"};
    printf("student roll = %d\n", s1.roll);

    return 0;
}