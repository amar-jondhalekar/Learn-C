#include<stdio.h>
int main()
{
    int num, reverse, sum = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;
    while(num > 0)
    {
        reverse = num % 10;
        sum = (sum * 10) + reverse;
        num = num / 10;
    }
    if(temp = sum)
    {
        printf("Pallindrome Number.");
    }
    else{
        printf("Not Pallindrome Number.");
    }
    return 0;
}

/*
Palindrome number algorithm :-
Get the number from user
Hold the number in temporary variable
Reverse the number
Compare the temporary number with reversed number
If both numbers are same, print palindrome number
Else print not palindrome number
*/