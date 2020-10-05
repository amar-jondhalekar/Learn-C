/*
Sum of digits algorithm
To get sum of each digits by c program, use the following algorithm:

Step 1: Get number by user
Step 2: Get the modulus/remainder of the number
Step 3: sum the remainder of the number
Step 4: Divide the number by 10
Step 5: Repeat the step 2 while number is greater than 0.
Let's see the sum of digits program in C.
*/
#include<stdio.h>
int main()
{
    int num, sum = 0, cal;
    printf("Enter the number:");
    scanf("%d", &num);
    while(num > 0)
    {
        cal = num % 10;
        sum = sum + cal;
        num = num / 10;
    }
    printf("The sum of digit is %d", sum);
    return 0;
}