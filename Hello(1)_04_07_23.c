#include<stdio.h>
#include<string.h>

void pritString(char arr[]);
int countLength(char arr[]);

int main() {
      char oldStr[100] = " oldStr";
      char newStr[] = "newStr";
      strcpy (newStr, oldStr);
      puts(newStr);
}