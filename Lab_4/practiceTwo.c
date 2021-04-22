/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 4/22/2021
 * **************/
/*
 * Find Biggest & Smallest Number given an array of values
 */

#include<stdio.h>
#define N 6

int main()
{
    int a[N] = {2, 32, 42, 10, 8, 67};
    int biggest = a[0];
    int smallest = a[0];

    for(int i = 0; i < N; i++)
    {
        if(a[i] > biggest)
        {
            biggest = a[i];
        }
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    printf("The biggest is %d, the smallest is %d", biggest, smallest);
}
