/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 3/18/2021
 * **************/

#include <stdio.h>

int main(void)
{
    int sum = 0;
    int a;
    printf("Enter a series of integers: \n");
    scanf("%d", &a);

    while (a != 0)
    {
        sum += a;
        printf("Enter an integer: \n");
        scanf("%d", &a);
    }
    printf("The sum is %d", sum);
    return 0;
}