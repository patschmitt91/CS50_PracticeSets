#include <cs50.h>
#include <stdio.h>


int main(void) {


    // Prompt user for amount of change

    float change;
    int coinCount = 0;
        do {
            change = get_float("Please enter the amount of change you have :");
        }
        while (change < 0); // change is a float and greater than 0

        // From here, I need to convert this float into an int
        int finalChange = change * 100;

    // Always use largest coin possible

        while (finalChange >= 25) {
            coinCount++;
            finalChange = finalChange - 25;
        }

        while (finalChange >= 10) {
            coinCount++;
            finalChange = finalChange - 10;
        }

        while (finalChange >= 5) {
            coinCount++;
            finalChange = finalChange - 5;
        }

        while (finalChange >= 1) {
            coinCount++;
            finalChange = finalChange - 1;
        }


    // Finally print minimum amount of coins usable
        printf("I have %i coins to return.\n", coinCount);
}