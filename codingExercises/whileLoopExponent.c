/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/25/2021
 * **************/

#include <stdio.h>

int main(void)
{
    int n, power, output;
    n = 1;
    power = 1;
    while(n <=20){
        power = power * 2;
        printf("2^%d = %d", n, output);
        ++n;
    };

    return 0;
}