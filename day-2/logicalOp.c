/*
    && ------ AND operator
    || ------OR operator
    !- -------Not operator
*/
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int age = 18;
    double height = 6.3;
    bool result = ((age >= 18) && (height >= 6));

    printf("%d", result);
    return 0;
}
