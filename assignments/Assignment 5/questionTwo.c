/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/25/2021
 * **************/

#include <stdio.h>

int main(void)
{
    float richterInput;
    printf("Please enter the earthquake's Richter scale number: ");
    scanf("%f", &richterInput);

    if (richterInput >= 8.00f)
    {
        printf("Effect: most structures fall.\n");
    }
    else if (richterInput < 8.00f && richterInput >= 7.00f)
    {
        printf("Effect: Many buildings destroyed.\n");
    }
    else if (richterInput < 7.00f && richterInput >= 6.00f)
    {
        printf("Effect: Many buildings considerably damaged, some collapse.\n");
    }
    else if (richterInput < 6.00f && richterInput >= 4.50f)
    {
        printf("Effect: Damage to poorly constructed buildings.\n");
    }
    else if (richterInput < 4.50f && richterInput >= 0.00f)
    {
        printf("Effect: No destruction of buildings.\n");
    }
    else
    {
        printf("Invalid input.");
    };

    return 0;
}