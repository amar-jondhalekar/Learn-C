//Fibonacci Series using recursion in C
#include<stdio.h>
void printFibonacci(int n)
{
    static int first = 0, second = 1, third;
    if(n>0)
    {
        third = first + second;
        first = second;
        second = third;
        printf("\n%d", third);
        printFibonacci(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the element:");
    scanf("%d\n", &n);
    printf("\nPrint fibonacci series:-");
    printf("%d\n%d\n", 0,1);
    printFibonacci(n-2); // because  0 and 1 are already printed

    return 0;
}