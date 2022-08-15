#include<stdio.h>
int main()
{
    int num;

    printf("Enter a integer number : ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("This is am even number");
    if(num % 2 != 0)
        printf("This is a odd number");
    return 0;
}
