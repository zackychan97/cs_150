/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/25/2021
 * **************/

#include <stdio.h>

int main(void)
{
    int inputNumber;

    printf("Enter a number, 1-12, which will print the corresponding month. Example: input: 1, output: January: ");
    scanf("%d", &inputNumber);

    switch (inputNumber)
    {
    case 12:
        /* code */
        printf("December\n");
        break;
    case 11:
        /* code */
        printf("November\n");
        break;
    case 10:
        /* code */
        printf("October\n");
        break;
    case 9:
        /* code */
        printf("September\n");
        break;
    case 8:
        /* code */
        printf("August\n");
        break;
    case 7:
        /* code */
        printf("July\n");
        break;
    case 6:
        /* code */
        printf("June\n");
        break;
    case 5:
        /* code */
        printf("May\n");
        break;
    case 4:
        /* code */
        printf("April\n");
        break;
    case 3:
        /* code */
        printf("March\n");
        break;
    case 2:
        /* code */
        printf("February\n");
        break;
    case 1:
        /* code */
        printf("January\n");
        break;
    default:
        printf("Invalid input.\n");
        break;
    }
    return 0;
}