/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/16/2021
 * **************/

#include <stdio.h>
#include <math.h>

int main(){
    float x1, y1, x2, y2, gdistance, distance;
    printf("Input the value for the x1 coordinate: ");
    scanf("%f", &x1);
    printf("Input the value for the y1 coordinate: ");
    scanf("%f", &y1);
    printf("Input the value for the x2 coordinate: ");
    scanf("%f", &x2);
    printf("Input the value for the y2 coordinate: ");
    scanf("%f", &y2);
    gdistance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); 
    distance = sqrt(gdistance);
    printf("Distance between the points on x/y axis is: %.4f\n", distance);
    return 0;
}