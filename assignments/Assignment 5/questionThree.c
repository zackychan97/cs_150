/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/25/2021
 * **************/

#include <stdio.h>

int main(void)
{
    int inputInt;

    printf("Enter the number: ");
    scanf("%d", &inputInt);

    if (inputInt > 0 && inputInt < 10)
    {
        printf("The number %d has 1 digit.\n", inputInt);
    }
    else if (inputInt >= 10 && inputInt < 100)
    {
        printf("The number %d has 2 digits.\n", inputInt);
    }
    else if (inputInt >= 100 && inputInt < 1000)
    {
        printf("The number %d has 3 digits.\n", inputInt);
    }
    else if (inputInt >= 1000 && inputInt < 10000)
    {
        printf("The number %d has 4 digits.\n", inputInt);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}