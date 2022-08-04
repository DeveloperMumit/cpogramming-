#include<stdio.h>

int main()
{
//    for(int i = 0; i <=10; i++){
//        if(i == 4){
//            printf("%d", i);
//            break;
//
//        }
//        printf("%d \n", i);
//    }

    while(1){
        int number;
        printf("Enter a number :");
        scanf("%d", &number);
        if(number < 100 && 50 >number){
            break;
        }
        printf("%d \n", number);
    }

    return;
}
