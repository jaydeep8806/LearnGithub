#include<stdio.h>
#include<string.h>

struct students {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct students s1;
    s1.roll = 7;
    s1.cgpa = 9.8;
   // s1.name = "jay";

    strcpy (s1.name, "Jaydeep");

    printf("student name  = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa    = %f\n", s1.cgpa);

    struct students s2;
    s2.roll = 8;
    s2.cgpa = 9.8;
    strcpy (s2.name, "Nandani");

    printf("student name = %s\n", s2.name);
    printf("student roll no = %d\n", s2.roll);
    printf("student cgpa = %f", s2.cgpa);

    struct students s3;
    s3.roll = 9;
    s3.cgpa = 9.8;
    strcpy (s3.name, "Bhavin");

    printf("student name = %s\n", s3.name);
    printf("student roll no = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);

    return 0;
}