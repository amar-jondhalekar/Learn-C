#include<stdio.h>
int main()
{
    int first = 0, second = 1, third, num, i;
    printf("Enter the element:");
    scanf("%d", &num);
    printf("%d\n%d\n", first, second);
    for(i = 2; i < num; ++i)
    {
        third = first + second;
        printf("%d\n", third);
        first = second;
        second = third;
    }
    return 0;
}