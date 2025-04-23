/******************************************************************************
 * File Name    : Operations.c
 * Descriptions : This file contains the implementation of basic arithmetic operations.
 *                It includes functions for addition, subtraction, multiplication,
 *                division, and exponentiation.
 * Author       : Ken Alleyne
 * Created On   : 2025-04-19
 * Last Updated : 2025-04-22
 * Version      : 1.0.0
 * Dependencies : Operations.h
 * Compiler     : GCC (GNU Compiler Collection)
 * Notes        : Initial version of the program.
 *******************************************************************************/

// Include statements
#include "Operations.h"

// *****************************************************************************
// Function to add two long integers
long add(long a, long b) {
    return a + b;
}
// *****************************************************************************
// Function to subtract two long integers
long subtract(long a, long b) {
    return a - b;
}
// *****************************************************************************
// Function to multiply two long integers
long multiply(long a, long b) {
    return a * b;
}
// *****************************************************************************
// Function to divide two long integers
long divide(long a, long b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return -1; // Return -1 to indicate an error
    }
    return a / b;
}
// *****************************************************************************
// Function to exponentiate a base to an exponent
long exponentiate(long base, long exp) {
    long result = 1;
    for (long i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
// *****************************************************************************
// Function to perform the operation based on the operator
long performOperation(long operand1, long operand2, char operator) {
    switch (operator) {
        case '+':
            return add(operand1, operand2);
        case '-':
            return subtract(operand1, operand2);
        case '*':
            return multiply(operand1, operand2);
        case '/':
            return divide(operand1, operand2);
        case '^':
            return exponentiate(operand1, operand2);
        default:
            printf("Error: Invalid operator.\n");
            return 0; // Return 0 to indicate an error
    }
}