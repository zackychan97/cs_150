/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 3/23/2021
 * **************/

#include <stdio.h>

int main(void)
{
    while(1)
    {

        printf("Please choose from the list: \n");
        printf("1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
        printf("5. Exit the system \n");

        int action;
        scanf("%d", &action);

        if(action == 5)
        {
            printf("Thanks for using the calculator! \n");
            printf("See you next time ^_^ \n");
            break;
        }

        int a, b;
        printf("Please enter two numbers: \n");
        scanf("%d%d", &a, &b);

        switch (action)
        {
        case 1:
            printf("%d\n", a + b);
            break;
        case 2:
            printf("%d\n", a - b);
            break;
        case 3:
            printf("%d\n", a * b);
            break;
        case 4:
            printf("%d\n", a / b);
            break;
        default:
            printf("Invalid input\n");
            break;
        }
    }
    return 0;
}
