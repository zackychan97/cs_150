#include<stdio.h>

int main()
{
    int a, b, i;
    int sum = 0;
    printf("Enter 2 integers: ");
    scanf("%d%d", &a, &b);
    for(i = a; i <= b; i++);
    {
        sum += i;
    }
    printf("The sum is: %d", sum);
}