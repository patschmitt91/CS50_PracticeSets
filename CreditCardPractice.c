#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]) {
    long long x = 9087987;
    int counter = 1;
    int even_total = 0;
    int odd_total = 0;
    string card_type = "";
    while (x > 0) {
        int y = x % 10;
        if (counter % 2 == 0) { // Even
            y = y * 2;
            if (y > 9) {
                y = (y % 10) + 1;
            }
            even_total = even_total + y;
        } else { // Odd
            odd_total = odd_total + y;
        }
        x = x / 10;
        if (x < 60 && x > 9) {
            if (x > 50 && x < 56) {
                card_type = "MASTERCARD\n";
            } else if (x > 39 && x < 50) {
                card_type = "VISA\n";
            } else if (x == 34 || x == 37 ) {
                card_type = "AMEX\n";
            } else {
                card_type = "INVALID\n";
            }
        }
        counter++;
    }
    int total = odd_total + even_total;

    if (total % 10 != 0) {
        card_type = "INVALID\n";
    }
    printf("%s", card_type);
    return 0;
}