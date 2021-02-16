/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/16/2021
 * **************/

#include <stdio.h>
#include <math.h>

int main()
{
    float G, mass1, mass2, r, finalValue;

    printf("We are going to calculate float force according to formula (G * mass1 * mass2) / (r * r). Please enter G, then enter mass1, followed by mass2, and ending with entering in value for r.\n");
    scanf("%f", &G); // Get input from user (float) and store in G
    scanf("%f", &mass1); // Get input from user (float) and store in mass1
    scanf("%f", &mass2); // Get input from user (float) and store in mass2
    scanf("%f", &r);
    finalValue = (G * mass1 * mass2) / (r * r);
    printf("The final value of float force equals: %f\n", finalValue);
    return 0;
}

// The problem with the physics student's code was that they were probably not using parenthesis where needed. The operators in the formula all have the same precedence, so, instead of the value of G * mass1 * mass2 being divided by the value of r * r, we are instead taking that former value and dividing by r, and then multiplying that value by r. 