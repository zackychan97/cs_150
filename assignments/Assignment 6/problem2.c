#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d is a multiple of 3\n", i);
        };
    };
};