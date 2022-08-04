#include<stdio.h>

int main(){

/*
    this while loop
*/

//    int count = 1;
//    while( count < 5){
//        printf("while loop in c \n");
//        printf("count = %d \n", count);
//        count  = count + 1;
//    }
//

//    int number;
//    printf("Enter the number: ");
//    scanf("%d", &number);
//
//    int count = 1;
//
//    while(count <= 10){
//       int product = number * count;
//       printf("%d * %d = %d \n ", number, count, product);
//        count = count + 1;
//    }

/*
    This is  do while loop
*/
    int number;
    scanf("%d", &number);
   int count = 5;

   do{
         int product = number * count;
    printf("%d * %d = %d \n",number, count, product);

    count = count + 1;
   }while(count <= 10);

    return 0;
}
