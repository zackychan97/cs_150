/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/4/2021
 * **************/

#include <stdio.h>

int main()
{
    float preTipBill, tips, postTipBill;
    int personsSplittingBill;

    printf("Enter total before tip: ");
    scanf("%f", &preTipBill);
    printf("Enter the percent you would like to tip, do not include the percentage sign: ");
    scanf("%f", &tips);
    printf("How many people are splitting the bill? ");
    scanf("%d", &personsSplittingBill);
    postTipBill = (preTipBill + preTipBill * tips * 0.01) / personsSplittingBill;
    printf("Total per person: %f\n", postTipBill);

    return 0;
}