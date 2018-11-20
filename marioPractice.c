#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Ask user for input between 0 and 23
    int height;
    int numberOfSpaces;
    do
        {
        height = get_int("Please enter a positive number greater than 0 and less than 23 :");
        }
        while (height <= 0 && height >= 23);
    // Print out this many rows
    int row;
    numberOfSpaces = height - 1;
    int numberOfHashes = 1;
    for (row = 0; row < height; row++) // This can be read as, "for each row"
    {
        int space;
        // "For each column that's a space."
        for (space = 0; space < numberOfSpaces; space++) {
            printf(" ");
            }
            int hash;
             // "For each column that's a hash"
            for (hash = 0; hash < numberOfHashes; hash++) {
            printf("#");
            }
            printf("    ");
            for (hash = 0; hash < numberOfHashes; hash++) {
            printf("#");
            }
            for (space = 0; space < numberOfSpaces; space++) {
            printf(" ");
            }
        printf("\n"); // Once you finish printing out the row, print the new line character.
        // For the next row to begin though, it has to have one less space and one additional hash.
        numberOfSpaces--;
        numberOfHashes++;
    }
}