#include<stdio.h>
int main()
{
    int magic;
    int guess;

    magic = 1325;
    guess = 0;


    for(int i = 0; i < 10 && guess != magic; i++){
        printf("Enter you Guessing number :");
        scanf("%d", &guess);

        if(magic == guess){
            printf("Right!");
        }
        else{
            if(magic < guess){
                printf("you are too high  \n");
            }
            else{
                printf("you are too low \n");
            }
        }



    }

    return 0;
}
