/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 4/14/2021
 * **************/

// Program A7_5.c is to count the number of 5 in a series of number entered by the user. However it has some logic errors. Please use some printf statements to debug the program.

#include<stdio.h>

int main()
{
    int a;
    int count = 0;
    printf("Please enter a series of number, terminate by 1: ");
    while(1)
    {
        scanf("%d", &a);
        printf("Value of a: %d outside if statement\n", a); // debugging comment
        if (a == 5)
        {
            printf("Value of a: %d inside if statement (a == 5)\n", a); // debugging comment
            count++;
            printf("Value of count inside a == 5 if statement: %d", count); // debugging comment
        }
        if(a == 1)
        {
            printf("Value of a: %d inside if statement (a == 1)\n", a); // debugging comment
            break;
        }
    }
    printf("there are %d 5s\n", count);
}