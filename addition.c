#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void addition() {
    float num1;
    float num2;
    char add_another_number;
    float new_number;
    float sum = 0;
    bool isAddition = true;
    int decimalPlaces;

    printf("\n--------------------------------------------");
    printf("\n\t\tADDITION");
    printf("\n--------------------------------------------");
    printf("\nYou have chosen ADDITION");
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

    sum = num1 + num2;
    printf("\nHow many decimal places do you want to show? ");
    while (scanf("%d", &decimalPlaces) != 1) {
        printf("Invalid input. Please enter a number: ");
        scanf("%*[^\n]");  
        scanf("%*c");      
    }

    printf("\nThe sum of %.*f and %.*f is '%.*f'\n", decimalPlaces, num1, decimalPlaces, num2, decimalPlaces, sum);

    // Prompt user if they want to add another number
    do {
        printf("--------------------------------------------");
        printf("\nWould you like to add another number? [Y] if YES & [N] if NO: ");
        scanf(" %c", &add_another_number);
        printf("--------------------------------------------");

        // Convert the user's input to lowercase.
        add_another_number = tolower(add_another_number);

        // If the user wants to add another number, get the number and add it to the last result.
        if (add_another_number == 'y') {
            printf("\nThe last result is %.*f\n", decimalPlaces, sum);
            printf("Enter the number to add: ");
            while (scanf("%f", &new_number) != 1) {
                printf("Invalid input. Please enter a number: ");
                scanf("%*[^\n]");  
                scanf("%*c");      
            }
            sum += new_number;
            printf("The new sum of %.*f and %.*f is '%.*f'\n", decimalPlaces, num1, decimalPlaces, num2, decimalPlaces, sum);
        } else if (add_another_number == 'n') {
            isAddition = false;
        } else {
            printf("Invalid input. Please enter y or n.\n");
        }
    } while (isAddition);
}
