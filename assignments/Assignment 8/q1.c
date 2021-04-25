/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 4/24/2021
 * **************/

// Write a program to declare an array and initialize the array with the following numbers: (10, 12, 8, 34,43, 16). Then calculate the sum and the average of those numbers

#include <stdio.h>

int main(void)
{
    // 1. Declare and initialize the array
    float a[6];
    a[0] = 10.0f;
    a[1] = 11.0f;
    a[2] = 8.0f;
    a[3] = 34.0f;
    a[4] = 43.0f;
    a[5] = 16.0f;

    // 2. Use for loop to access every data in 1D array and perform operations on array (sum)
    float sum = 0.0f;
    for (int i = 0; i < 6; i++)
    {
        /* code */
        sum+= a[i];
    }

    // 3. Calculate average now that we have sum
    float average = sum / 6.0f;

    printf("Average: %f  | Sum: %f\n", average, sum);
    
    return 0;
}