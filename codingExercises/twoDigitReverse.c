/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/12/2021
 * **************/

#include <stdio.h>

int main()
{
    int input, a, b;
    // 1) Read from the user and store it inside a data structure
    printf("Please enter a two digit number: ");
    scanf("%d", &input);
    // 2) Reverse the digits
    a = input / 10; // get the tens digit
    b = input % 10; // get the units digit
    int newNumber = b * 10 + a;
    // 3) Print the result
    printf("The reversed number is: %d\n", newNumber);
}