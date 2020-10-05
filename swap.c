// Program to swap two integer number
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);

    a = a - b;

    b = a + b;

    a = b - a;

    printf("The first swap number is: \n%d", a);
    printf("\nThe second swap number is: \n%d", b);
    return 0;
}