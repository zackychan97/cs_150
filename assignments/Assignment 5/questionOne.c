/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/25/2021
 * **************/

#include <stdio.h>

int main(void)
{
    int input1, input2, input3;

    printf("Enter 3 integers please. Separate each one with a space: ");
    scanf("%d%d%d", &input1, &input2, &input3);

    (input1 == input2 && input1 == input3) ? printf("Equal.\n") : printf("Not equal\n");

    return 0;
}