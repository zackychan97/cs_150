/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 3/18/2021
 * **************/

#include <stdio.h>

int main(void)
{
    int counter = 10;

    // could use while counter != 0. I thought this way of thinking was interesting.
    while (counter > 0){
        printf("%d", counter);
        counter--;
    }   
    return 0;
}