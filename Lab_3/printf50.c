/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 4/13/2021
 * **************/

#include<stdio.h>

int main()
{
    for(int i = 1; i <= 50; i++)
    {
        printf("%d\n", i);
        if(i % 10 == 0)
        {
            printf("\n");
        }
    }
}