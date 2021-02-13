/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/12/2021
 * **************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    char s[20];
    char sen[100];
    
    scanf("%c", &ch); // Get input expected to be single character, store in char ch data structure
    scanf("%s\n", &s); // Get input expected to be a string, store in char s[MAX_LEN] data structure
    scanf("%[^\n]s", &sen); // Get input that will read until it sees a newline, essentially reading a sentence
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    
    
       
    return 0;
}