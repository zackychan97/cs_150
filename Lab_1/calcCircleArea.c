/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/4/2021
 * **************/

#include <stdio.h>

int main()
{
    float radius, area, pi;
    printf("Please enter the radius of the circle: ");
    scanf("%f", &radius);
    pi = 3.14f;
    area = radius * radius * pi;
    printf("\nThe area of the circle is: %f\n\n", area);

    return 0;
}