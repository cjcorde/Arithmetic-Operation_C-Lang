#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void division() {
    float num1;
    float num2;
    char divide_another_number;
    float new_number;
    float quotient = 0;
    bool isDivision = true;
    int decimalPlaces;

    printf("\n--------------------------------------------");
    printf("\n\t\tDIVISION");
    printf("\n--------------------------------------------");
    printf("\nYou have chosen DIVISION");
    printf("\nEnter the dividend: ");
    while (scanf("%f", &num1) != 1) {
        printf("Invalid input. Please enter a number: ");
        scanf("%*[^\n]");
        scanf("%*c");
    }
    printf("Enter the divisor: ");
    while (scanf("%f", &num2) != 1 || num2 == 0) {
        if (num2 == 0) {
            printf("Invalid input. Division by zero is not allowed. Please enter a non-zero divisor: ");
        } else {
            printf("Invalid input. Please enter a number: ");
        }
        scanf("%*[^\n]");
        scanf("%*c");
    }

    quotient = num1 / num2;
    printf("\nHow many decimal places do you want to show? ");
    while (scanf("%d", &decimalPlaces) != 1) {
        printf("Invalid input. Please enter a number: ");
        scanf("%*[^\n]");
        scanf("%*c");
    }

    printf("\nThe quotient of %.*f divided by %.*f is '%.*f'\n", decimalPlaces, num1, decimalPlaces, num2, decimalPlaces, quotient);

    // Prompt user if they want to divide by another number
    do {
        printf("--------------------------------------------");
        printf("\nWould you like to divide by another number? [Y] if YES & [N] if NO: ");
        scanf(" %c", &divide_another_number);
        printf("--------------------------------------------");

        // Convert the user's input to lowercase.
        divide_another_number = tolower(divide_another_number);

        // If the user wants to divide by another number, get the number and divide it by the previous result.
        if (divide_another_number == 'y') {
            printf("\nThe last result is %.*f\n", decimalPlaces, quotient);
            printf("Enter the number to divide by: ");
            while (scanf("%f", &new_number) != 1 || new_number == 0) {
                if (new_number == 0) {
                    printf("Invalid input. Division by zero is not allowed. Please enter a non-zero divisor: ");
                } else {
                    printf("Invalid input. Please enter a number: ");
                }
                scanf("%*[^\n]");
                scanf("%*c");
            }
            quotient /= new_number;
            printf("The new quotient of %.*f divided by %.*f is '%.*f'\n", decimalPlaces, num1, decimalPlaces, num2, decimalPlaces, quotient);
        } else if (divide_another_number == 'n') {
            isDivision = false;
        } else {
            printf("Invalid input. Please enter y or n.\n");
        }
    } while (isDivision);
}
