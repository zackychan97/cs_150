/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 4/13/2021
 * **************/

// Program to enter a sentence (terminate with Enter key), then count the number of upper-case letters in that sentence
#include <stdio.h>

int main(void)
{
    printf("Please enter a sentence: ");
    char ch;
    int count = 0;
    while((ch = getchar()) != '\n')
    {
        if((ch >= 'A' && ch <= 'Z'))
        {
            count++;
        }
    }
    printf("Total number is: %d\n", count);
    return 0;
}