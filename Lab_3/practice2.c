/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 4/13/2021
 * **************/

#include<stdio.h>

int main()
{
    char ch;
    int count = 0;
    printf("Enter a sentence please: ");
    scanf("%c", &ch);
    while(ch != '\n')
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            count++;
        }
        scanf("%c", &ch);
    }
    printf("Total number: %d", count);
}