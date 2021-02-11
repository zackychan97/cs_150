/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/4/2021
 * **************/

#include <stdio.h>

int main()
{
    int x, polynomialValue;
    printf("Please enter the integer value of x, which will be the value of x in the following formula: 3x^5 + 2x^4 - 5x - 7\n");
    scanf("%d", &x);
    polynomialValue = (3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * x - 7);
    printf("The value of the polynomial is: %d\n", polynomialValue);

    return 0;
}
