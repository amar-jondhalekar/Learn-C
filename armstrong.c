/*
Armstrong number is a number that is equal to the sum of cubes of its digits. 

For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

Let's try to understand why 153 is an Armstrong number.
*/
#include <stdio.h>
int main()
{
    int num, reverse, sum = 0, temp;
    printf("Enter the number:");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        reverse = num % 10;
        sum = sum + (reverse * reverse * reverse); // sum = (sum * 10) + reverse;
        num = num / 10;
    }
    if (temp == sum)
        printf("Armstrong Number.");
    else
        printf("Not Armstrong Number.");
    return 0;
}

/*
153 = (1*1*1)+(5*5*5)+(3*3*3)  
where:  
(1*1*1)=1  
(5*5*5)=125  
(3*3*3)=27  
So:  
1+125+27=153  
*/