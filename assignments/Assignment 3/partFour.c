/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/16/2021
 * **************/

#include <stdio.h>
#include <math.h>

int main(){

    int n, num1, num2, num3, reverse;

    printf("Enter the number (integer) to reverse: ");
    scanf("%d", &n);

    num1 = n / 100;
    num2 = (n % 100) / 10;
    num3 = n % 10;

    reverse = 100 * num3 + 10 * num2 + num1;

    printf("The reversed number is %d\n", reverse);

    return 0;
}