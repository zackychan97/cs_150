/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 3/18/2021
 * **************/

#include <stdio.h>

int main(void)
{
    int inputInteger;
    int n = 0;
    int i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &inputInteger);

    while (inputInteger > n){
        n += 1;
        i++;
    }

    printf("Sum is %d\n", n);
    return 0;
}