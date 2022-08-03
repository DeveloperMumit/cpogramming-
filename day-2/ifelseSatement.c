#include<stdio.h>

int main()
{
    int age;
    printf("Enter your number to check eligible or not : \n");
    scanf("%d", &age);

    if(age > 120 || age < 0){
        printf("Invalid Age \n");
    }else if(age >= 18){
        printf("You are eligible to vote  \n");
    }else{
        printf("You are not eligible to vote  \n");
    }


    double number;
    printf("Enter a number  \n");
    scanf("%lf", &number);



    if(number < 0.0){
        printf("You Enter a negative number  \n");
    }else if(number > 0.0){
        printf("You enter a positive number  \n");
    }else{
        printf("You enter a 0. ");
    }

    return 0;
}
