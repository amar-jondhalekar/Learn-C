#include<stdio.h>
float avrg(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter the first element:");
    scanf("%d", &a);
    printf("Enter the second element:");
    scanf("%d", &b);
    printf("Enter the third element:");
    scanf("%d", &c);
    avrg(a, b, c);
    return 0;
}
float avrg(int a, int b, int c)
{
    int result;
    result = (float) (a + b + c)/3;
    printf("The average of three numbers are:%d", result);
    return result;
}