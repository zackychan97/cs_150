/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 4/13/2021
 * **************/

#include<stdio.h>

int main()
{
    int a, b, i;
    int sum = 0;
    printf("Enter 2 integers: ");
    scanf("%d%d", &a, &b);
    printf("Value of a is: %d, Value of b is: %d \n", a, b); // Debugging comment added
    for(i = a; i <= b; i++)
    {
        printf("In loop, i is %d\n", i); // Debugging comment added
        sum += i;
    }
    printf("The sum is: %d", sum);
}