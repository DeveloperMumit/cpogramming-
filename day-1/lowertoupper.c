#include <stdio.h>
#include <ctype.h>
int main()
{

    char lower, upper;
    printf("Enter a lower case letter : ");
    scanf("%c", &lower);

    upper = toupper(lower);
    printf("The upper case letter is : %c", upper);
    return 0;
}
