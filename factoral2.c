//Let's see the factorial program in c using recursion.
#include<stdio.h>
int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else{
        return (n*factorial(n-1));
    }
}
int main()
{
    int num, fact;
    printf("Enter the number:");
    scanf("%d", &num);

    fact = factorial(num);
    printf("The factorial of %d is %d", num, fact);
}