#include<stdio.h>
//program to create simple calculator using switchCase
int main()
{

    char operation;
    printf("Enter an operator : (+, -, *, /)");
    scanf("%c", &operation);



    double n1, n2;
    printf("Enter two oprand : ");
    scanf("%lf %lf", &n1, &n2);


    switch(operation)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2);
        break;

    case '-':
        printf("%.1lf - %.1lf =%.1lf", n1, n2, n1-n2);
        break;

     case '*':
        printf("%.1lf * %.1lf =%.1lf", n1, n2, n1*n2);
        break;

     case '/':
        printf("%.1lf / %.1lf =%.1lf", n1, n2, n1/n2);
        break;

     default:
        printf("Error! operator is not correct");

    }


    return 0;
}
