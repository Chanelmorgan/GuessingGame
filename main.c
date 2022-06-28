#include <stdio.h>

int main() {
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    const int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1; // basically storing a boolean value in the form of 1 nad 0
        }

    }
    if(outOfGuesses == 1){
        printf("Out Of Guesses");
    } else {
        printf("You Win!");
    }

    return 0;
}
