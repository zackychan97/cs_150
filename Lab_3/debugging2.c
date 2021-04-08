/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 4/8/2021
 * **************/
/*
 * To calculate 1*2*3...*n
 */

#include<stdio.h>

int main()
{
    int n;
    int product = 1;
    printf("Please enter an integer: ");
    scanf("%d", &n); // needed an ampersand 
    printf("Debugging! Value of n: %d\n", n); // debugging

    for(int i = 1; i <= n; i++)
    {
        printf("Loop i value is %d\n", i);
        product *= i;
    }
    printf("The product is %d", product);
}