//Write a c program to print fibonacci series without using recursion
/*Fibonacci Series in C: In case of fibonacci series, next number is the sum of previous two numbers 
for example 0, 1, 1, 2, 3, 5, 8, 13, 21 etc. The first two numbers of fibonacci series are 0 and 1.*/
#include<stdio.h>
int main()
{
  int first = 0, second = 1, third, num, i;
  printf("Enter the elements:");
  scanf("%d", &num);
  printf("%d\n%d\n", first, second); // printing 0 and 1 
  for(i = 2; i < num; ++i) // loop start from 2 because 0 and 1 has already started.
  {
      third = first + second;
      printf("%d\n", third);

      first = second;
      second = third;
  }
    return 0;
}