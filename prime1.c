//Write a c program to check prime number.

//Input: 44

//Output: not prime number

//Input: 7

//Output: prime number


#include <stdio.h>
int main()
{
    int num, i, m = 0, flag = 0;
    printf("Enter the number to check prime or not.:");
    scanf("%d", &num);
    m = num / 2;
    for (i = 2; i <= m; i++)
    {
        if (num % i == 0)
        {
            printf("\nThe number is not prime.");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("\nThe number is  prime.");
    return 0;
}