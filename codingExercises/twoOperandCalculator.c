/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/23/2021
 * **************/

#include <stdio.h>

int main(void)
{
    int operandChoice, operandOne, operandTwo, output;

    printf("Please choose from the list: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division\n");
    scanf("%d", &operandChoice);

    printf("Enter your two operands with a space between the two: ");
    scanf("%d%d", &operandOne, &operandTwo);

    switch (operandChoice)
    {
    case 4:
        output = operandOne / operandTwo;
        printf("Result is: %d\n", output);
        break;
    case 3:
        output = operandOne * operandTwo;
        printf("Result is: %d\n", output);
        break;
    case 2:
        output = operandOne - operandTwo;
        printf("Result is: %d\n", output);
        break;
    case 1:
        output = operandOne + operandTwo;
        printf("Result is: %d\n", output);
        break;
    default:
        printf("Invalid input. Sorry!\n");
        break;
    }

    return 0;
}