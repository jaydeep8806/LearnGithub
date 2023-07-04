#include<stdio.h>
#include<string.h>

void pritString(char arr[]);
int countLength(char arr[]);

int main() {
    char firstStr[] = "Apple";
    char secStr[] = "Banana";
    printf("%d", strcmp(firstStr, secStr));
}