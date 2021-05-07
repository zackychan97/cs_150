/*****************
 * Author: Zachary Bumpous 
 * Last Updated: 5/6/2021
 * **************/
/*
Number Guessing Game
For 2 Players
For each player:
    * program create a random number
    * the player guesses the number
    * After each entering, give the hint... too small / too big / just right...
    * has up to 10 times to guess
    * The player who uses less number of times, wins the game
 */

#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
// #include <stdbool.h>




int main(void)
{
    int num1, num2, guess, p1Tries, p2Tries = 0;
    int maxTries = 10;
    srand(time(0)); /* seed random number generator */
    num1 = rand() % 100 + 1; /* random number between 1 and 100 */
    num2 = rand() % 100 + 1; /* random number between 1 and 100 */

    printf("Guess My Number Game\n\n");

    do
    {
        // Logic for Player 1's Turn
        printf("Player 1, enter a guess between 1 and 100 : ");
        scanf("%d", &guess);
        p1Tries++;

        if (guess > num1)
        {
            printf("Too high!\n\n");
        }
        else if (guess < num1)
        {
            printf("Too low!\n\n");
        }
        else
        {
            printf("\nCorrect! You got it in %d guesses!\n\n", p1Tries);
        }
		
    }while (guess != num1 && p1Tries < maxTries);

    // Now Player 1's Turn has ended... we move onto player 2
    do
    {
        // Logic for Player 2's Turn
        printf("Player 2, enter a guess between 1 and 100 : ");
        scanf("%d", &guess);
        p2Tries++;

        if (guess > num2)
        {
            printf("Too high!\n\n");
        }
        else if (guess < num2)
        {
            printf("Too low!\n\n");
        }
        else
        {
            printf("\nCorrect! You got it in %d guesses!\n\n", p2Tries);
        }
		
    }while (guess != num2 && p2Tries < maxTries);
    // Now player 2's turn has ended... we move onto deciding who has won the game

    // Logic to determine who won the game:
    if (p1Tries < p2Tries)
    {
        printf("Player 1 wins the game with less guesses: %d to %d\n", p1Tries, p2Tries);
    } else if (p1Tries > p2Tries)
    {
        printf("Player 2 wins the game with less guesses: %d to %d\n", p2Tries, p1Tries);
    } else
    {
        printf("DRAW!! Both players took %d guesses\n", p1Tries);
    }
    
    

    return 0;
        
}