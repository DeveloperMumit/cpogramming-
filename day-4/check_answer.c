#include<stdio.h>
int main(){

    int num;
    printf("What is 10 + 20 = ");
    scanf("%d", &num);

    if(num == 20)
    {
        printf("your answer is correct \n");
        printf("Congratulation ! \n");
    }
    if(num != 20)
    {
        printf("your answer is incorrect \n");
        printf("Don't up upset, Try it another time");
    }

    return 0;
}

