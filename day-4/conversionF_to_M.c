#include<stdio.h>
int main()
{
    float num;
    int choice;

    printf("Enter a value: ");
    scanf("%f", &num);


    printf("1: feet to meters, 2: meters to feet \n");
    printf("enter your choice : ");
    scanf("%d", &choice);

    if(choice == 1)
        printf("Your answer is : %f", num / 3.28); // conversion feets to meters
    if(choice == 2)
        printf("Your answer is : %f", num * 3.28); // conversion meters to feet


    return 0;
}
