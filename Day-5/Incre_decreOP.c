#include<stdio.h>
int main()
{
    int i, j;

   i = 10;
   j = i++;

   printf("i and j: %d %d", i, j); // it will print i = 11, but j = 10; cause before increment i it will assaign it inside the j variable
   // it will increment

   return 0;
}
