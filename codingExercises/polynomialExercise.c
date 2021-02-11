#include <stdio.h>
#include <math.h>

int main()
{
    int x, polynomialValue;
    printf("Please enter the integer value of x, which will be the value of x in the following formula: 3x^5 + 2x^4 - 5x - 7\n");
    scanf("%d", &x);
    polynomialValue = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * x - 7;
    printf("%d", &polynomialValue);
    return 0;
}