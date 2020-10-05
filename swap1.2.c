// swap two number's using * and /
#include<stdio.h>
int main()
{
    int a = 10, b = 20;
    printf("Before swap: a %d b %d", a,b);
    
    a = a * b; //a= 200 (10*20)=200

    b = a / b; //b=10 (200/20)=10

    a = a / b; //a=20 (200/10)=20

    printf("\nAfter swap: a %d b %d", a,b);

    return 0;
}