/*
C Program to convert Decimal to Binary
Decimal to binary in C: We can convert any decimal number (base-10 (0 to 9)) into binary number(base-2 (0 or 1)) by c program.

Decimal Number
Decimal number is a base 10 number because it ranges from 0 to 9, there are total 10 digits between 0 to 9. Any combination of digits is decimal number such as 23, 445, 132, 0, 2 etc.

Binary Number
Binary number is a base 2 number because it is either 0 or 1. Any combination of 0 and 1 is binary number such as 1001, 101, 11111, 101010 etc.

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10], i, num;
    system("cls");
    printf("Enter the number:");
    scanf("%d", &num);
    for (i = 0; num > 0; i++)
    {
        a[i] = num % 2;
        num = num / 2;
    }
    printf("\n Binary of given number is:");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    return 0;
}
/*
Let's see the some binary numbers for the decimal number.

Decimal	Binary
1	1
2	10
3	11
4	100
5	101
6	110
7	111
8	1000
9	1001
10	1010
Decimal to Binary Conversion Algorithm
Step 1: Divide the number by 2 through % (modulus operator) and store the remainder in array
Step 2: Divide the number by 2 through / (division operator)
Step 3: Repeat the step 2 until number is greater than 0
Let's see the c example to convert decimal to binary.
Output:

Enter the number to convert: 5
Binary of Given Number is=101 
Next TopicC Program to convert Number in Characters


*/