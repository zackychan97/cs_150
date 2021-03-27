/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 3/23/2021
 * **************/

#include <stdio.h>

int main(void)
{
    int i = 1;
    do {
        printf("%d", i*i);
        i++;
    } while (i <= 10);
}