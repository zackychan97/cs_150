/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 5/1/2021
 * **************/
/*
Write a function to find the largest from three integers. In the main function, let the user enter three integers, and then call the function to find the largest number
 */

#include<stdio.h>

int largest(int a, int b, int c)
{
    if(a > b && a > c)
    {
        return a;
    } else if (b > a && b > c)
    {
        return b;
    } else 
    {
        return c;
    }
    
}

int main()
{
    int numA, numB, numC;
    printf("Enter 3 integers: ");
    scanf("%d%d%d", &numA, &numB, &numC);
    printf("The largest number is: %d\n", largest(numA, numB, numC));
}