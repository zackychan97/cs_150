/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 2/23/2021
 * **************/

#include <stdio.h>

int main(void){
int inputNumber;

switch (inputNumber){
    case 6: 
        printf('Sunday');
        break;
    case 5: 
        printf('Friday');
        break;
    case 4: 
        printf('Thursday');
        break;
    case 3: 
        printf('Wednesday');
        break;
    case 2: 
        printf('Tuesday');
        break;
    case 1: 
        printf('Monday');
        break;
    case 0: 
        printf('Monday');
        break;
    default:
        printf('Invalid input\n');
        break;
}

return 0;
}