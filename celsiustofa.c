#include<stdio.h>
float celsiusToFahren(int a, int b, int c);
int main()
{
    float e;
    e = celsiusToFahren(0, 1.8, 32);
    return 0;
}
float celsiusToFahren(int a, int b, int c)
{ 
    float e;
    e = (float) (a * b) + c;
    printf("The result is:%.2f", e);
    return e;
}