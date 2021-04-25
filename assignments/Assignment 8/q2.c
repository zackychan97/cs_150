/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 4/24/2021
 * **************/

// Write a program to declare an array and initialize the array with the following numbers: (2, 4, 6, 8, 10). Then update the elements in this array with their own square, so your new array should store these values (4, 16, 36, 64, 100)

#include <stdio.h>

int main(void)
{
    int a[5];
    a[0] = 2;
    a[1] = 4;
    a[2] = 6;
    a[3] = 8;
    a[4] = 10;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        a[i] = a[i] * a[i];
        printf("Array location %d has been updated to %d\n", i, a[i]);
    }
    return 0;
}