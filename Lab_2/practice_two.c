/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 3/18/2021
 * **************/

#include <stdio.h>

int main(void)
{
    int sum = 0;
    int n;

    printf("Enter an integer: \n");
    scanf("%d", &n);

    int i = 1;
    while(i <= n)
    {
        sum += i;
        i++;
    }

    printf("Sum is %d \n", sum);