/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/4/2021
 * **************/

#include <stdio.h>

int main()
{
    float km, mi;
    printf("Please enter the distance in kilometers: ");
    scanf("%f", &km);
    mi = km * 0.62f;
    printf("The distance in miles is: %f\n", mi);

    return 0;
}