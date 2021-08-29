#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // declaring max value and play again variables
    int maxValue = 10;
    char playAgain;
    
Again:
   
    // creating the random number and user input variables
    srand(time(NULL));
    int numberToGuess = rand() % maxValue + 1;
    int userInput;
    
    // starting the game with a print
    printf("\nGuess a number from 0 - %d: " , maxValue);

Guess:
    scanf("%d", &userInput);
    
    // correct answer
    if(userInput == numberToGuess){
        printf("WOW!!! You got the correct answer!!!");
    } 
    
    // above maximum guess
    else if (userInput > maxValue){
        printf("That's above %d. Try again: ", maxValue);
        goto Guess;
    } 
    
    // above or below
    else if (userInput > numberToGuess){
        printf("Oh no, That's too high. Try again: ");
        goto Guess;
    } else if (userInput < numberToGuess){
        printf("Oh no, That's too low. Try again: ");
        goto Guess;
    } 
    
// setting up a replay option
    printf("\nWould you like to play again? Y or N: ");

Fail:
    scanf(" %c", &playAgain);

    if(playAgain == 'Y' || playAgain == 'y') {
        goto Again;
    } else if (playAgain == 'N' || playAgain == 'n') {
        printf("Ok, Have a good day :)");
    } 
    
    // if correct words are not used
    else {
        printf("Sorry I didn't get that, are you sure you used Y or N ? \nTry tell me again: ");
        goto Fail;
    }
    
    return 0;
}
