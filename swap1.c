#include<stdio.h>
int main()
{
    int first = 0, second = 1, temp, i;
    printf("The first number:%d\n", first);
    printf("The second number:%d\n", second);

    for(i = 0; i < temp; i++)
    {
        temp = first + second;
        second = first;
        first = temp;
        printf("The SWAP value of first is:%d\n", first);
        printf("The SWAP value of second is:%d", second);
    }

}