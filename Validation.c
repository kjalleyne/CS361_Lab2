/******************************************************************************
 * File Name    : Validation.c
 * Description  : This file contains functions to validate user input for operands and operators.
 * Author       : Ken Alleyne
 * Created On   : 2025-04-19
 * Last Updated : 2025-04-22
 * Version      : 1.0.0
 * Dependencies : Validation.h
 * Compiler     : GCC (GNU Compiler Collection)
 * Notes        : Initial version of the program.
 ******************************************************************************/

// Include statements
#include "Validation.h"

// *****************************************************************************
// Function to check if the operand is valid
int isValidOperand(long operand) {
    // Check if the operand is within the valid range for long integers
    return (operand >= LONG_MIN && operand <= LONG_MAX);
}
// *****************************************************************************
// Function to check if the operator is valid
int isValidOperator(char operator) {    
    // Check if the operator is one of the valid operators
    return (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '^');
}
// *****************************************************************************
// Function to validate the operand input
long validateOperand(long operand) {

    // Variable declarations
    char ch;
    int isValid = 0;

    // Prompt for the operand until a valid one is entered
    do {
        // Validate the operand
        if (scanf("%ld%c", &operand, &ch) != 2 || ch != '\n' || !isValidOperand(operand)) {

            // Dipslay an error message
            printf("Invalid operand. Please enter a valid integer.\n");

            // Clear the input buffer
            while ((ch = getchar()) != '\n' && ch != EOF);
        }
        else 
            // Set the isValid flag to 1
            isValid = 1;

    } while (!isValid);

    return operand; // Return the valid operand
}
// *****************************************************************************
// Function to validate the operator input
char validateOperator(char operator) {

    // Variable declarations
    char ch;
    int isValid = 0;

    // Prompt for the operator until a valid one is entered
    do {
        // Validate the operator
        if (scanf(" %c%c", &operator, &ch) != 2 || ch != '\n' || !isValidOperator(operator)){

            // Display an error message
            printf("Invalid operator. Please enter a valid operator (+, -, *, /, ^).\n");

            // Clear the input buffer
            while ((ch = getchar()) != '\n' && ch != EOF);
        }
        else 
            // Set the isValid flag to 1
            isValid = 1;

    } while (!isValid);

    return operator; // Return the valid operator
}