#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void subtraction() {
    float num1;
    float num2;
    char add_another_number;
    float new_number;
    float difference = 0;
    bool isSubtraction = true;
    int decimalPlaces;

    printf("\n--------------------------------------------");
    printf("\n\t\tSUBTRACTION");
    printf("\n--------------------------------------------");
    printf("\nYou have chosen SUBTRACTION");
    printf("\nEnter the first number: ");
    while (scanf("%f", &num1) != 1) {
        printf("Invalid input. Please enter a number: ");
        scanf("%*[^\n]");  
        scanf("%*c");      
    }
    printf("Enter the second number: ");
    while (scanf("%f", &num2) != 1) {
        printf("Invalid input. Please enter a number: ");
        scanf("%*[^\n]");  
        scanf("%*c");      
    }

    difference = num1 - num2;
    printf("\nHow many decimal places do you want to show? ");
    while (scanf("%d", &decimalPlaces) != 1) {
        printf("Invalid input. Please enter a number: ");
        scanf("%*[^\n]");  
        scanf("%*c");      
    }

    printf("\nThe difference between %.*f and %.*f is '%.*f'\n", decimalPlaces, num1, decimalPlaces, num2, decimalPlaces, difference);

    // Prompt user if they want to subtract another number
    do {
        printf("--------------------------------------------");
        printf("\nWould you like to subtract another number? [Y] if YES & [N] if NO: ");
        scanf(" %c", &add_another_number);
        printf("--------------------------------------------");

        // Convert the user's input to lowercase.
        add_another_number = tolower(add_another_number);

        // If the user wants to subtract another number, get the number and subtract it from the last result.
        if (add_another_number == 'y') {
            printf("\nThe last result is %.*f\n", decimalPlaces, difference);
            printf("Enter the number to subtract: ");
            while (scanf("%f", &new_number) != 1) {
                printf("Invalid input. Please enter a number: ");
                scanf("%*[^\n]");  
                scanf("%*c");      
            }
            difference -= new_number;
            printf("The new difference between %.*f and %.*f is '%.*f'\n", decimalPlaces, num1, decimalPlaces, num2, decimalPlaces, difference);
        } else if (add_another_number == 'n') {
            isSubtraction = false;
        } else {
            printf("Invalid input. Please enter y or n.\n");
        }
    } while (isSubtraction);
}
