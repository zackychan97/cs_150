#include<stdio.h>

int main(void)
{
    int a;
    int smallest = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        if(a < smallest)
        {
            smallest = a;
        }
    } while (a > 0);
    printf("The smallest number is: %d\n", smallest);
}