#include<stdio.h>
int main()
{
    char upper;
    printf("type any upper case letter : ");
    scanf("%c", &upper);

    printf("The lowercase letter is : %c", upper+32);
    return 0;
}
