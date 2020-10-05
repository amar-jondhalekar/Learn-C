/*Palindrome number in c: A palindrome number is a number that is same after reverse.
 For example 121, 34543, 343, 131, 48984 are the palindrome numbers.*/
 #include<stdio.h>
 int main()
 {
     int num, reverse,  sum = 0, temp;
     printf("Enter the nuumber:- ");
     scanf("%d", &num);
     temp = num;
     while(num > 0)
     {
         reverse = num % 10;
         sum = (sum * 10) + reverse;
         num = num / 10;
     }
     if(temp == sum)
     {
         printf("Palindrome Number.");
     }
     else{
         printf("Not Palindrome Number.");
     }
 }