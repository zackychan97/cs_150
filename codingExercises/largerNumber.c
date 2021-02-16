/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/16/2021
 * **************/

#include <stdio.h>
#include <math.h>

int main(){
    float x, y;
    printf("We are going to decide which of the two numbers inputted is larger than the other. Please enter the value of x: ");
    scanf("%f", &x);
    printf("Please enter the value of y: ");
    scanf("%f", &y);
    if (x > y){
        printf("%f is the greater number\n", x);
    }
    else {
        printf("%f is the greater number\n", y);
    }
    return 0;
}