/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/16/2021
 * **************/

#include <stdio.h>
#include <math.h>

int main() {
    int sec, h, m, s;
    printf("Input the seconds you wish to convert into hours, minutes, and seconds: ");
    scanf("%d", &sec);

    h = (sec/3600); // calculate the total hours

    m = (sec - (3600 * h))/60; // calculate the minutes

    s = (sec - (3600*h) - (m * 60)); // calculate the seconds

    printf("H:M:S = %d:%d:%d\n", h, m, s);

    return 0;

}