#include<stdio.h>
int main()
{
    int num, reverse, sum = 0, temp;
    printf("Enter the number:");
    scanf("%d", &num);
    temp = num;
    while(num > 0)
    {
        reverse = num % 10;
        sum = (sum * 10) + reverse;
        num = num  / 10;
    }
    if(temp == sum)
    {
        printf("Pallindrome");
    }
    else{
        printf("Not Pallindrome");
    }
}