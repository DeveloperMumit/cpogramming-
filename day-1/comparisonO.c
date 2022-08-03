/*
    > Greater than
    < less than
    == Equal
    >= greater than or equal to
    <= less than or equal to
    != Not equal to
*/

#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool value1 = (12 > 3);// -boolean expression
    bool value2 = (12 < 3);
    bool value3 = (13 == 21);
    bool value4 = (34 >= 34);
    bool value5 = (34 <= 33);
    bool value6 = (33 != 34);

    printf("> Greater than : %d \n", value1);
    printf("< less than %d \n", value2);
    printf("== Equal %d \n", value3);
    printf(" >= greater than or equal to %d \n", value4);
    printf("<= less than or equal to %d \n", value5);
    printf("!= Not equal to %d", value6);

    return 0;
}
