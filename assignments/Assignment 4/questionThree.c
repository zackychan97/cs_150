/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/25/2021
 * **************/

#include <stdio.h>

int main(void)
{
    float inputNumber;
    printf("Enter a number please: ");
    scanf("%f", &inputNumber);

    if (inputNumber < 0)
    {
        printf("The number is negative\n");
    }
    else if (inputNumber == 0)
    {
        printf("The number is == to 0\n");
    }
    else if (inputNumber > 0)
    {
        printf("The number is positive\n");
    }
    else
    {
        printf("Invalid input\n");
    };

    return 0;
}