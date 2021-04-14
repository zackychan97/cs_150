/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 4/14/2021
 * **************/

// Program to print an Alphabet in format requested on Assignment 7 CSC150

#include <stdio.h>

int main(void)
{
    
    char ch;
    for (ch = 'A'; ch <= 'G'; ch++)
    {
        printf("%c ", ch);
    }

    printf("\n");

    for (ch = 'H'; ch <= 'N'; ch++)
    {
        printf("%c ", ch);
    }
    printf("\n");
    for (ch = 'O'; ch <= 'T'; ch++)
    {
        printf("%c ", ch);
    }
    printf(" \n");
    for(ch = 'U'; ch <= 'Z'; ch++)
    {
        printf("%c ", ch);
    }
    printf("\n");;
    
    return 0;
}