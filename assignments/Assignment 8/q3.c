
#include <stdio.h>

int main(void)
{
    // 1. Declare and initialize array
    int a[10];
    a[0] = 88;
    a[1] = 74;
    a[2] = 82;
    a[3] = 91;
    a[4] = 94;
    a[5] = 89;
    a[6] = 81;
    a[7] = 66;
    a[8] = 79;
    a[9] = 78;

    // 2. Loop through array, checking IF a[i] is greater than or equal to the passing grade and adding to our tally if so
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] >= 60)
        {
            count++;
        }
    }
    printf("%d students passed the test!\n", count);
    return 0;
}