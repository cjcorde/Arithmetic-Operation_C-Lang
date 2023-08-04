#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void multiplication() {
    float num1;
    float num2;
    char multiply_another_number;
    float new_number;
    float product = 1;
    bool isMultiplication = true;
    int decimalPlaces;

    printf("\n--------------------------------------------");
    printf("\n\t\tMULTIPLICATION");
    printf("\n--------------------------------------------");
    printf("\nYou have chosen MULTIPLICATION");
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

    product = num1 * num2;
    printf("\nHow many decimal places do you want to show? ");
    while (scanf("%d", &decimalPlaces) != 1) {
        printf("Invalid input. Please enter a number: ");
        scanf("%*[^\n]");  
        scanf("%*c");      
    }

    printf("\nThe product of %.*f and %.*f is '%.*f'\n", decimalPlaces, num1, decimalPlaces, num2, decimalPlaces, product);

    // Prompt user if they want to multiply another number
    do {
        printf("--------------------------------------------");
        printf("\nWould you like to multiply another number? [Y] if YES & [N] if NO: ");
        scanf(" %c", &multiply_another_number);
        printf("--------------------------------------------");

        // Convert the user's input to lowercase.
        multiply_another_number = tolower(multiply_another_number);

        // If the user wants to multiply another number, get the number and multiply it with the previous result.
        if (multiply_another_number == 'y') {
            printf("\nThe last result is %.*f\n", decimalPlaces, product);
            printf("Enter the number to multiply: ");
            while (scanf("%f", &new_number) != 1) {
                printf("Invalid input. Please enter a number: ");
                scanf("%*[^\n]");  
                scanf("%*c");      
            }
            product *= new_number;
            printf("The new product of %.*f and %.*f is '%.*f'\n", decimalPlaces, num1, decimalPlaces, num2, decimalPlaces, product);
        } else if (multiply_another_number == 'n') {
            isMultiplication = false;
        } else {
            printf("Invalid input. Please enter y or n.\n");
        }
    } while (isMultiplication);
}
