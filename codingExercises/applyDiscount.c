/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/16/2021
 * **************/

#include <stdio.h>

int main(void)
{
    float totalPreTax, totalPostTax;

    printf("Enter your total bill: ");
    scanf("%f", &totalPreTax); // Get input (float value) and store

    // If our total before tax is more than 500, we will give this customer a 15% discount, followed by adding on our 7.5% (.075) tax.
    // Else, we will not apply any discount, and add the same tax on to our bill
    if(totalPreTax >= 500.00){
        totalPreTax = totalPreTax - (totalPreTax * 0.15);
        totalPostTax = totalPreTax + (totalPreTax * 0.075);
        printf("Total bill equals: %f", totalPostTax);
    }
    else {
        totalPostTax = totalPreTax + (totalPreTax * 0.075);
        printf("Total bill equals: %f", totalPostTax);
    }

    return 0;
}