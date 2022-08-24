#include<stdio.h>

int main(){

    int a = 10;
    int b = 20;

    int *p, *q;
    p = &a;
    q = &b;

    printf("value of a %d \n", a);
    printf("value of a %d\n", *p);

    printf("adress of a %x \n", &a);
    printf("adress of a: %x\n", p);
}