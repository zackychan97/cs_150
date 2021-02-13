/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/12/2021
 * **************/

#include <stdio.h>

int main()
{
    int height, length, area;
    //height = 12;
    //length = 10;
    // printf("Please enter the value of height: ");
    // scanf("%d", &height);
    // printf("Please enter the value of length: ");
    // scanf("%d", &length);
    printf("Please enter the height and then the length:");
    scanf("%d %d", &height, &length);
    area = height * length;
    printf("The value of area is: %d\n", area);
}