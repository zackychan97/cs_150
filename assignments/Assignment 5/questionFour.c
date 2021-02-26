/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/25/2021
 * **************/

#include <stdio.h>

int main(void)
{
    float inputTaxableIncome, outputTaxLiable;
    printf("Enter your taxable income: ");
    scanf("%f", &inputTaxableIncome);

    if (inputTaxableIncome > 0.0f && inputTaxableIncome <= 750.0f)
    {
        outputTaxLiable = inputTaxableIncome * .01f;
        printf("Taxable income: %.2f\n", outputTaxLiable);
    }
    else if (inputTaxableIncome > 750.0f && inputTaxableIncome <= 2250.0f)
    {
        outputTaxLiable = ((inputTaxableIncome - 750.0f) * .02f) + 7.5f;
        printf("Taxable income: %.2f\n", outputTaxLiable);
    }
    else if (inputTaxableIncome > 2250.0f && inputTaxableIncome <= 3750.0f)
    {
        outputTaxLiable = ((inputTaxableIncome - 2250.0f) * .03f) + 37.5f;
        printf("Taxable income: %.2f\n", outputTaxLiable);
    }
    else if (inputTaxableIncome > 3750.0f && inputTaxableIncome <= 5250.0f)
    {
        outputTaxLiable = ((inputTaxableIncome - 3750.00f) * .04f) + 82.5f;
        printf("Taxable income: %.2f\n", outputTaxLiable);
    }
    else if (inputTaxableIncome > 5250 && inputTaxableIncome <= 7000)
    {
        outputTaxLiable = ((inputTaxableIncome - 5250.00f) * .05f) + 142.5f;
        printf("Taxable income: %.2f\n", outputTaxLiable);
    }
    else if (inputTaxableIncome > 7000)
    {
        outputTaxLiable = ((inputTaxableIncome - 7000.00f) * .06f) + 230.0f;
        printf("Taxable income: %.2f\n", outputTaxLiable);
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}