/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 5/1/2021
 * **************/
/*
Write a function to reverse the digits in an integer. In the main function, let the user to enter an integer and then call the function to reverse digits
 */

#include<stdio.h>

int reverse(int num)
{
    int newNum = 0;
    do
    {
        newNum = newNum * 10 + num % 10;
        num = num / 10;
    } while (num > 0);
    
    return newNum;
}

int main(void)
{
    int num;
    int newNum;
    printf("Please enter a number: ");
    scanf("%d", &num);
    newNum = reverse(num);
    printf("The reversed number is: %d\n", newNum);
}