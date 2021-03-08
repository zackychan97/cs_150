#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1, num2;
    float numA, numB;
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &numA, &numB);

    int intSum, intDif;
    intSum = num1 + num2;
    intDif = num1 - num2;

    float fSum, fDif;
    fSum = numA + numB;
    fDif = numA - numB;

    printf("%d %d\n", intSum, intDif);
    printf("%.1f %.1f\n", fSum, fDif);
    
    return 0;
}