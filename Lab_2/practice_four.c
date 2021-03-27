/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 3/23/2021
 * **************/

#include <stdio.h>

int main(void)
{
    int a;
    int sum = 0;
    while(1)
    {
        // 1) Get the input (number) from the user
        printf("Enter a number, end with a 0: ");
        scanf("%d", &a);

        // 2) if sum == 0, we will leave while loop
        if(a == 0)
        {
            break;
        }
        sum = sum + a;
    }
    printf("The sum is %d", sum);
}
