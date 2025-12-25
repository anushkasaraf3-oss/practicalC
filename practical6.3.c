// Basic Structure Example
#include <stdio.h>
//anushka saraf 10260//
int main() {
    int entered_pin;
    int correct_pin = 1234; 
    int attempts = 0;
    int max_attempts = 3;
    int authenticated = 0;

    printf("Welcome to the ATM!\n");

    while (attempts < max_attempts && !authenticated) {
        printf("Enter your PIN: ");
        scanf("%d", &entered_pin);

        if (entered_pin == correct_pin) {
            printf("PIN Correct! Welcome.\n");
            authenticated = 1;
        } else {
            printf("Incorrect PIN.\n");
            attempts++;
            if (attempts < max_attempts) {
                printf("You have %d attempts left.\n", max_attempts - attempts);
            } else {
                printf("Too many incorrect attempts. Card blocked.\n");
            }
        }
    }

    return 0;
}
