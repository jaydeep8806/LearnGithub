#include<stdio.h>
//Declaration/prototype
void printHello();
void printGoodbye();

int main() {
  printHello();  //Function call
  printGoodbye();
  return 0;
}

//Function Defination
void printHello() {
    printf("Hello!\n");
}

void printGoodbye() {
     printf("Goodbye\n");
}