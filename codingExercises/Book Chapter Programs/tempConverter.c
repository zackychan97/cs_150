/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/17/2021
 * **************/

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void){
    float fahrenheitInput, celsiusOutput;

    printf("Enter the Fahrenheit temperature: ");
    scanf("%f", &fahrenheitInput);
    celsiusOutput = (fahrenheitInput - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.2f\n", celsiusOutput); 

    return 0;
}