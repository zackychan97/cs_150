/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 4/8/2021
 * **************/

#include<stdio.h>

int main()
{
    int n;
    int result = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) 
    {
        printf("Loop i is %d\n", i); // will run infinitely if value of n is 0. Won't run otherwise. We need to investigate our conditions of our loop.
        result += 1/i;
    }
    printf("The result is %d", result);

}