#include<stdio.h>
#include<string.h>

void pritString(char arr[]); 
int countLength(char arr[]);

int main() {
      char firstStr[100] = "Jay ";
      char secondStr[] = "Baldaniya";
      strcat(firstStr, secondStr);
      puts(firstStr);
}