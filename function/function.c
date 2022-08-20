#include<stdio.h>

void printHello(); //function prototype
void printGoodbye();

int main()
{
    printHello(); // function call

    printGoodbye();
}

void printHello()//function definitions
{

    printf("Hello World! \n");
    printf("My name is Abdul Mumit \n");
}
void printGoodbye(){
    
    printf("__Bye for now \n");
}