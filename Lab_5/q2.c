/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 5/1/2021
 * **************/
/*
 * Write a function to calculate the area of a circle. In the main function, let the user to enter three radiuses for three different circles, and then print the area for each circle
 */

#include<stdio.h>

float circle(float r)
{
    return 3.14*r*r;
}

int main()
{
    float r1, r2, r3;
    printf("Enter three radiuses: ");
    scanf("%f%f%f", &r1, &r2, &r3);

    printf("The area for circle 1 is: %f\n", circle(r1));
    printf("The area for circle 1 is: %f\n", circle(r2));
    printf("The area for circle 1 is: %f\n", circle(r3));
}