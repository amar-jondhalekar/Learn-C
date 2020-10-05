#include<stdio.h>
int main()
{
    int a[10], num, i;
    system("cls");
    printf("Enter the number to convert the binary to decimal:");
    scanf("%d", &num);
    for(i = 0; num > 0; i++)
    {
        a[i] = num % 2;
        num = num / 2;
    }
    printf("\n To convert binary number is:");
    for(i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    return 0;
}