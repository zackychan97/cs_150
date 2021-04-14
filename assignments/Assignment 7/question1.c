/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 4/13/2021
 * **************/

// Program that allows user to enter 10 lower case letters, and converts them to upper case

#include <stdio.h>

int main(void)
{
    char ch;
    printf("Please enter 10 letters: ");
    for (int i = 1; i <= 10; i++)
    {
        scanf(" %c", &ch);
        if( ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
        printf("%c\n", ch);
    }
    return 0;
}