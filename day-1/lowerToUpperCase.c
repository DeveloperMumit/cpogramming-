#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any Lower case letter :");
    scanf("%c", &lower);

    printf("The uppercase letter : %c", lower-32);
    return 0;
}
