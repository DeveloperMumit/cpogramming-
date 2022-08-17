#include<stdio.h>
int main()
{
    int answer, count;
    int right, wrong;

    right = 0;
    wrong = 0;

    for(count = 1; count < 11; count = count+1){
        printf("What is %d + %d = ", count, count);
        scanf("%d", &answer);

        if(answer == count + count){
            printf("Right answer \n");
            right++;
        }
        else{
            printf("sorry you are wrong \n");
            printf("The answer is %d \n", count + count);
            wrong++;

        }
    }
    printf("You got %d right and %d wrong", right, wrong);
    return 0;
}
