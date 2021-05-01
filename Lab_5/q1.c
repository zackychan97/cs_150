/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 5/1/2021
 * **************/
/*
 * Write a function to calculate the average of two integers. Then in the main function, let the user to enter two integers and call the function to print the average of that two numbers
 */

#include<stdio.h>

int average(int a, int b)
{
    return ((a + b) / 2);
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("The average is: %d\n", average(num1, num2));
}