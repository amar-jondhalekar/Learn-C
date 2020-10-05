#include<stdio.h>
void printFib(int n)
{
    static int first = 0, second = 1, third;
    if(n > 0)
    {
        third = first + second;
        first = second;
        second = third;
        printf("%d\n", third);
        printFib(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d\n", &n);
    printf("\nPrint fibonacci series:-");
    printf("%d\n%d\n", 0,1);
    printFib(n-2);
    return 0;
}