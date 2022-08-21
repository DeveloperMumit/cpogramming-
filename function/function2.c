#include<stdio.h>

void salam(); // prototype/ declaration
void bonjour();// prototype/ declaration
int main()
{
    char ch;
    printf("Enter b for Bangladesh F for French : ");
    scanf("%c", &ch);

    if(ch == 'b'){
        salam(); // function call
    }else{
        bonjour(); // function call / invoke
    }
}
void salam() // function defination
{
    printf("Assalamulaikum");
}
void bonjour() // function defination
{
    printf("Bonjour");
}