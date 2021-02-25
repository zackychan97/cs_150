/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/23/2021
 * **************/

#include <stdio.h>

int main(void){
float inputBill, outputBill;

// Gathers input intended to represent the user's bill (float)
printf("Enter the bill total: ");
scanf("%f", &inputBill);

// Applies discount % based upon the pre-tax bill
if (inputBill < 0){
    printf("Invalid bill value\n"); 
} else if (inputBill < 500) {
    outputBill = inputBill + (inputBill * .075f);
    printf("Total bill: %f", outputBill);
} else if (inputBill < 1000){
    outputBill = (inputBill - (inputBill * .15f)) + (inputBill * .075f);
    printf("Total bill: %f", outputBill);
} else if (inputBill < 2000){
    outputBill = (inputBill - (inputBill * .20f)) + (inputBill * .075f);
    printf("Total bill: %f", outputBill);
} else {
    outputBill = (inputBill - (inputBill * .25f)) + (inputBill * .075f);
    printf("Total bill: %f", outputBill);
}

return 0;
}