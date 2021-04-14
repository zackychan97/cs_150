/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 4/14/2021
 * **************/

// Program to enter a sentence (terminate with enter key) then count the number of vowels in that sentence

#include <stdio.h>

int main(void)
{
    
    printf("Please enter a sentence: ");
    char ch;
    int count = 0;
    while((ch = getchar()) != '\n')
    {
        if (ch == 'a' || ch == 'A')
        {
            count++;
        } else if (ch == 'e' || ch == 'E')
        {
            count++;
        } else if (ch == 'i' || ch == 'I')
        {
            count++;
        } else if (ch == 'o' || ch == 'O')
        {
            count++;
        } else if (ch == 'u' || ch == 'U')
        {
            count++;
        }
    }
    printf("The total number of vowels: %d\n", count);
    
    return 0;
}