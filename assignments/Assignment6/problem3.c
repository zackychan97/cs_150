#include<stdio.h>

int main(void)
{
    float n;
    float sum = 0;

    printf("Enter an integer: ");
    scanf("%f", &n);
    for(float i = 1; i <= n; i++)
    {
        sum = sum + (1 / i);
    };
    printf("The sum is: %f\n", sum);
};