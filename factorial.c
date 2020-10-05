/*
Factorial Program in C: Factorial of n is the product of all positive descending integers.
 Factorial of n is denoted by n!. For example:
 5! = 5*4*3*2*1 = 120  
 3! = 3*2*1 = 6 
 Here, 5! is pronounced as "5 factorial", it is also called "5 bang" or "5 shriek".
 The factorial is normally used in Combinations and Permutations (mathematics).
 
 *There are many ways to write the factorial program in c language. Let's see the 2 ways to write the factorial program.

 Factorial Program using loop
 Factorial Program using recursion 
*/
#include<stdio.h>
int main(){

    int num, i, fact = 1;
    printf("Enter the number:");
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
    {
        fact = fact * i;

    } 
    printf("\n The factorial of %d is %d", num, fact);
    return 0;
}