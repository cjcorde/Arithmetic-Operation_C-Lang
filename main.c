#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "E:\Users\emphr\Documents\COLLEGE\SECOND SEMESTER\VC\CODING\CODING\CALCULATOR\subtraction.c"
#include "E:\Users\emphr\Documents\COLLEGE\SECOND SEMESTER\VC\CODING\CODING\CALCULATOR\addition.c"
#include "E:\Users\emphr\Documents\COLLEGE\SECOND SEMESTER\VC\CODING\CODING\CALCULATOR\multiplication.c"
#include "E:\Users\emphr\Documents\COLLEGE\SECOND SEMESTER\VC\CODING\CODING\CALCULATOR\division.c"

int main() {
    int exitFlag = 0;
    char continueChoice;
    int choice;
    char username[20];

    while (!exitFlag) {
        printf("\n<<==========================================>>\n");
        printf("\nHello, tell us your name first: ");
        fgets(username, sizeof(username), stdin);

        printf("Welcome %s, This calculator performs basic arithmetic operations: Addition, Subtraction, Multiplication, and Division.\n", username);
        printf("Please always follow the instructions below:\n");
        printf("1. This program accepts decimal numbers.\n");
        printf("2. Any input that is not a valid number will result in an invalid output.\n");
        printf("3. Once the input is provided, it cannot be undone.\n");
        printf("\n--------------------------------------------");
        printf("\n\t\t    MENU");
        printf("\n--------------------------------------------");
        printf("\nCHOOSE AN OPERATION:\n\n");
        printf("\tPRESS [1] FOR ADDITION.\n");
        printf("\tPRESS [2] FOR SUBTRACTION.\n");
        printf("\tPRESS [3] FOR MULTIPLICATION.\n");
        printf("\tPRESS [4] FOR DIVISION.\n");
        printf("\tPRESS [5] TO EXIT\n");
        printf("\n--------------------------------------------\n");

        while (1) {
            printf("Enter your choice (1-5): ");
            if (scanf("%d", &choice) == 1) {
                if (choice >= 1 && choice <= 5) {
                    break;
                } else {
                    printf("Invalid choice. Please enter a number between 1 and 5.\n");
                }
            } else {
                scanf("%*[^\n]");
                scanf("%*c");
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
            }
        }

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                exitFlag = 1;
                printf("\nExiting... Thank you for using our program!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        if (!exitFlag) {
            printf("\n<<==========================================>>\n\n");
            printf("Would you like to perform another operation? (Y/N): ");
            scanf(" %c", &continueChoice);
            if (toupper(continueChoice) != 'Y') {
                exitFlag = 1;
                printf("\nExiting... Thank you for using our program!\n");
            }
        }
    }

    return 0;
}