//C Program to reverse number
#include<stdio.h>
int main()
{
    int num, reverse = 0, cal;
    printf("Enter the number:");
    scanf("%d", &num);
    while(num!=0)
    {
        cal = num % 10;
        reverse = reverse * 10 + cal;
        num/=10;
    }
    printf("The reverse number is:%d", reverse);
}