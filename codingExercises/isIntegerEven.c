/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/16/2021
 * **************/

#include <stdio.h>

int main(){
    int inputInteger, calculateRemainder;

    printf("Input an integer that will be checked if it is even or odd\n");
    scanf("%d", &inputInteger); // Get input (integer) and store it
    calculateRemainder = inputInteger % 2; // Calculate if input is even (remainder 0)

    // If the remainder of input is 0, then, we print a statement telling the user this, else, we print a statement telling user the integer they input is odd
    if (calculateRemainder == 0){
        printf("The integer is even\n");
    }
    else {
        printf("The integer is odd\n");
    }
    return 0;
}