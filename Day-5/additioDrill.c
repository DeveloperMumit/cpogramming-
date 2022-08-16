#include<stdio.h>
int main()
{

    int answer, count;

    for(count = 1; count < 11; count++){
        printf("What is %d + %d ? \n", count, count);
        scanf("%d", &answer);

        if(answer == count + count){
            printf("Answer is right \n");
        }else
        {
            printf("Sorry your number is wrong \n");
            printf("The right number is %d /n", count + count);
        }

    }


    return 0;
}
