#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;
    int max_attempts = 10;  // 10 attempts

    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("Guess the number (1-100) in %d tries!\n\n", max_attempts);

    while (attempts < max_attempts) {
        printf("Attempt %d/%d: Enter guess: ", attempts + 1, max_attempts);
        scanf("%d", &guess);

        // Check if guess is within valid range
        if (guess < 1 || guess > 100) {
            printf("Please enter a number between 1 and 100 only!\n\n");
            continue;
        }

        attempts++;

        if (guess == secret) {
            printf("\n*** You won! The number was %d ***\n", secret);
            break;
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }

        if (attempts == max_attempts) {
            printf("\n*** Game Over! The number was %d ***\n", secret);
        }
    }

    return 0;
}
