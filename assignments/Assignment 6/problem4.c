#include<stdio.h>

int main(void)
{
    int sum = 0;
    int num;
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        sum+=num;
    };
    printf("Average is %d\n", sum/10);
};