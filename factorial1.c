#include<stdio.h>
#include<conio.h>
int main()
{
    int i, fact = 1, num;
    printf("Enter the number:");
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is %d", num, fact);
    return 0;
    getch();
}

//Enter a number: 5
//Factorial of 5 is: 120